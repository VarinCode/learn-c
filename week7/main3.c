#include <stdio.h>
#define N 3

typedef struct {
    int electric, water, waste, service;
} utilitiesCosts;

typedef struct {
    int electric, water, totalCost;
} costOfRoom;

typedef struct {
    int electric;
    int water;
    int RPHWB; // The room that pays the highest water bill
    int RPHEB; // The room that pays the highest electricity bill
} HC;

int main(){
    const utilitiesCosts costs = {
            .electric = 15,
            .water = 30,
            .waste = 100,
            .service = 150
    };
    HC highCosts = {
            .electric = 0,
            .water = 0,
            .RPHWB = 0,
            .RPHEB = 0
    };
    costOfRoom rooms[N];

    int electric, water, sumCostElectric, sumCostWater;
    int totalWater[3], totalElectric[3];

    for(int i = 0; i < N; i++){
        printf("Room number %d\n", i + 1);
        printf("Enter number of electric:");
        scanf("%d", &electric);
        rooms[i].electric = electric;
        printf("Enter number of water:");
        scanf("%d", &water);
        rooms[i].water = water;
        printf("Added!\n\n");
    }

    for(int j = 0; j < N; j++){
        printf("Room number %d\n", j + 1);

        sumCostElectric = rooms[j].electric * costs.electric;
        sumCostWater = rooms[j].water * costs.water;
        totalWater[j] = sumCostWater;
        totalElectric[j] = sumCostElectric;

        printf("Number of Electric = %d Cost of Electric = %.2f\n", rooms[j].electric, (float)sumCostElectric);
        printf("Number of Water = %d Cost of Water = %.2f\n", rooms[j].water , (float)sumCostWater);
        printf("Cost of waste = %.2f\n", (float)costs.waste);
        printf("Cost of service = %.2f\n", (float)costs.service);

        rooms[j].totalCost = sumCostElectric + sumCostWater + costs.waste + costs.service;
        printf("Cost of Room number %d = %.2f\n", j + 1, (float)rooms[j].totalCost);
        printf("********************\n");
    }

    for(int k = 0; k < N; k++){
        if(totalElectric[k] > highCosts.electric){
            highCosts.electric = totalElectric[k];
            highCosts.RPHEB= k + 1;
        }
        if(totalWater[k] > highCosts.water){
            highCosts.water = totalWater[k];
            highCosts.RPHWB = k + 1;
        }
    }

    printf("\nHigh electric is Room number%d\n", highCosts.RPHEB);
    printf("High water is Room number%d\n", highCosts.RPHWB);

    return 0;
}
#include <stdio.h>

typedef struct {
    int start;
    int end;
} Mission;

int main() {
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d", &a, &b, &c,&d,&e,&f);
    Mission missions[3] = {
        {a, b},
        {c, d},
        {e, f}
    };

    int num_vehicles = 0;
    int end_times[3] = {0, 0, 0};


    for (int i = 0; i < 3; i++) {
        int assigned = 0;


        for (int j = 0; j < num_vehicles; j++) {
            if (missions[i].start >= end_times[j]) {
                end_times[j] = missions[i].end;
                assigned = 1;
                break;
            }
        }

        if (!assigned) {
            end_times[num_vehicles] = missions[i].end;
            num_vehicles++;
        }
    }

    printf("%d\n", num_vehicles);

    return 0;
}

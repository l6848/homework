//202610305113
//鲁俊志
#include <stdio.h>

#define MAXN 10

struct Player {
    char name[16];  
    int  score;     
};

void sort_players(struct Player arr[], int n);

int main(void) {
    int n;
    int i;
    struct Player players[MAXN];

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%15s %d", players[i].name, &players[i].score);
    }

    sort_players(players, n);

    for (i = 0; i < n; i++) {
        printf("%d %s %d\n", i + 1, players[i].name, players[i].score);
    }

    return 0;
}

void sort_players(struct Player arr[], int n) {
    int i, j;
    struct Player temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j].score < arr[j + 1].score) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
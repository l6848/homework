//202610305113
//鲁俊志
#include <stdio.h>

struct Window {
    int buffer[3]; 
    int count;     
};

struct Window push_data(struct Window win, int val);
int get_average(struct Window win);

int main(void) {
    int m;
    int i;
    int val;
    struct Window win;

    win.buffer[0] = 0;
    win.buffer[1] = 0;
    win.buffer[2] = 0;
    win.count = 0;

    if (scanf("%d", &m) != 1) {
        return 0;
    }

    for (i = 0; i < m; i++) {
        scanf("%d", &val);
        win = push_data(win, val);

        if (i > 0) {
            putchar(' ');
        }
        printf("%d", get_average(win));
    }
    putchar('\n');

    return 0;
}


struct Window push_data(struct Window win, int val) {
    win.buffer[win.count % 3] = val;
    win.count++;            
    return win;              
}

int get_average(struct Window win) {
    int n;
    int i;
    int sum = 0;

    n = (win.count < 3) ? win.count : 3;  
    if (n == 0) {
        return 0;                         
    }

    for (i = 0; i < n; i++) {
        sum += win.buffer[i];
    }

    return sum / n;                        
}
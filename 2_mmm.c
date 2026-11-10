//202610305113
//鲁俊志
#include <stdio.h>

struct Sensor {
    int temp;   
    int humi;  
    int valid;  
};

struct Sensor pack_sensor(int t, int h);

int main(void) {
    int t;
    int h;
    struct Sensor s;

    if (scanf("%d %d", &t, &h) != 2) {
        return 0;
    }

    s = pack_sensor(t, h);

    if (s.valid) {
        printf("TEMP=%d HUMI=%d\n", s.temp, s.humi);
    } else {
        puts("ERROR: Out of Range");
    }

    return 0;
}


struct Sensor pack_sensor(int t, int h) {
    struct Sensor s;

    s.temp = t;
    s.humi = h;
    s.valid = 0;        
    if (t >= -20 && t <= 50 && h >= 0 && h <= 100) {
        s.valid = 1;
    }

    return s;          
}
#include <math.h>
double geometricSum(int k) {
    if(k==0)
        return 1;
    else
        return pow(2, -k) + geometricSum(k-1);
}

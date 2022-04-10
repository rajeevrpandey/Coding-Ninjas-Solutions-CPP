#include<math.h>
int stringToNumber(char input[]) {
    int len = 0;
    while (input[len])
        len++;
    if(len < 1)
        return 0;
    else if(len == 1){
        return input[0] - 48;
    }
    int ans = stringToNumber(input+1);
    return (input[0] - 48) * pow(10, len-1) + ans;
}

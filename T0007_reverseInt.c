/**
 * Given a 32-bit signed integer, reverse digits of an integer.
 */
 
int reverse(int x) {

    long tmp = x;
    long xx = 0;
    long MAX = ((unsigned)(-1)>>1), MIN = ~MAX;

    while(tmp) {
        xx *= 10;
        xx += tmp % 10;
        tmp /= 10;
    }

    if( xx > MAX  || xx < MIN)
        return 0;
    
    return (int)xx;
}

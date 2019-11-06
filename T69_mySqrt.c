/* 
 *Implement int sqrt(int x).
 *
 * Compute and return the square root of x, where x is guaranteed to be a non-negative integer.
 *
 * Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.
 */

int mySqrt(int x){
    long t = x;
    long l = 0, r = x;
    long mid = 0;

    while (l <= r) {
        mid = (l + r) / 2;
        
        if (mid * mid > t)
            r = mid - 1;
        else if (mid * mid < t)
            l = mid + 1;
        else
            return mid;
    }
    return (int)(mid * mid > t ? mid - 1 : mid);
}

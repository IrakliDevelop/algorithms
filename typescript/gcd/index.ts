/**
 * @description this function implements Euclid's algorithm of finding greatest common divisor
 * @param {number} num1 
 * @param {number} num2 
 */
export function gcd(num1: number, num2: number): number {
    if (num1 <=0 || num2 <= 0) return 0;
    let temp: number;
    while (num1 != 0) {
        if (num1 < num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        num1 = num1 % num2;
    }
    return num2;
}
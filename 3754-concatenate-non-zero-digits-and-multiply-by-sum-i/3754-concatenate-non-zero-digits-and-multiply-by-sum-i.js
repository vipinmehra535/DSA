/**
 * @param {number} n
 * @return {number}
 */
var sumAndMultiply = function(n) {
    let x = 0;
    let sum = 0;

    // Convert number to string so we can loop through each digit
    let str = n.toString();

    for (let i = 0; i < str.length; i++) {
        let digit = Number(str[i]);

        // Ignore zeros
        if (digit !== 0) {
            // Build the new number
            x = x * 10 + digit;

            // Add to the sum
            sum += digit;
        }
    }

    return x * sum;
};
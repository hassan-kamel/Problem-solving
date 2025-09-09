/** 
 * Forward declaration of guess API.
 * @param {number} num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * var guess = function(num) {}
 */


function guessNumber(n: number): number {
    let low = 0;
    let high = n;

    while (low <= high) {
        const mid = low + Math.floor((high - low) / 2);

        if (guess(mid) === -1) {
            high = mid - 1;
        } else if (guess(mid) === 1) {
            low = mid + 1;
        } else if (guess(mid) === 0) {
            return mid;
        }
    }

    return -1;
};
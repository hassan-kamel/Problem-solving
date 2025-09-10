function largestAltitude(gain: number[]): number {
    let largest = Number.NEGATIVE_INFINITY;
    let currentSum = 0;
    [0, ...gain].forEach(alt => {
        currentSum += alt;
        largest = Math.max(largest, currentSum);
    })

    return largest;
};
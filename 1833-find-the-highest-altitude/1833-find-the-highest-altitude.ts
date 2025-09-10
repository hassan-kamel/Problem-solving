function largestAltitude(gain: number[]): number {
    let count = 0
    let max = Number.MIN_SAFE_INTEGER
    for(let i = 0; i<gain.length; i++) {
        count += gain[i]
        max = Math.max(max, count)
    }

    return max < 0 ? 0 : max
};
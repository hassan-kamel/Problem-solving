function uniqueOccurrences(arr: number[]): boolean {
    let freqMap = new Map();
    let freqSet = new Set();

    // Count frequencies
    for (let el of arr) {
        freqMap.set(el, (freqMap.get(el) || 0) + 1);
    }

    // Check for unique frequencies
    for (let freq of freqMap.values()) {
        freqSet.add(freq);
    }

    return freqMap.size === freqSet.size;
};
function closeStrings(word1: string, word2: string): boolean {
    if (word1.length !== word2.length) return false;

    if (
        !word1.split("").every(char => word2.includes(char)) ||
        !word2.split("").every(char => word1.includes(char))
    ) return false;

    const freq1 = new Map<string, number>()
    const freq2 = new Map<string, number>()

    for (let char of word1.split('')) {
        freq1.set(char, freq1.get(char) ? freq1.get(char) + 1 : 1)
    }
    for (let char of word2.split('')) {
        freq2.set(char, freq2.get(char) ? freq2.get(char) + 1 : 1)
    }

    const arr1 = [...freq1.values()];
    const arr2 = [...freq2.values()];

    while (arr1.length) {
        const curr = arr1.pop();
        const index = arr2.indexOf(curr);
        if (index == -1) return false;
        arr2.splice(index, 1);
    }



    return true;
};
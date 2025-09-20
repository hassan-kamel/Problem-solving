function checkInclusion(s1: string, s2: string): boolean {

    for (let i = 0; i <= s2.length - s1.length; i++) {
        if (isPermutation(s2.slice(i, i + s1.length), s1)) return true;
    }

    return false;

};

function isPermutation(s1: string, s2: string): boolean {
    if (s1.length !== s2.length) {
        return false;
    }

    const charCount = new Map<string, number>();

    for (let i = 0; i < s1.length; i++) {
        const char1 = s1[i];
        charCount.set(char1, (charCount.get(char1) || 0) + 1);

        const char2 = s2[i];
        charCount.set(char2, (charCount.get(char2) || 0) - 1);
    }

    return Array.from(charCount.values()).every(count => count === 0);
}
function characterReplacement(s: string, k: number): number {
    let start = 0, longest = 0, freq = new Map();

    for (let i = 0; i < s.length; i++) {
        freq.set(s[i], freq.has(s[i]) ? freq.get(s[i]) + 1 : 1);
        let maxF = 0;
        for (const [key, value] of freq) maxF = Math.max(maxF, value);
        if ((i - start + 1) - maxF <= k) longest = Math.max(longest, (i - start + 1));
        else {
            freq.set(s[start], freq.get(s[start]) - 1);
            start++;
        }
    }

    return longest;
};
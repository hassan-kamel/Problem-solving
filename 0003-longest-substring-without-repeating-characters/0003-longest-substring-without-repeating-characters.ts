function lengthOfLongestSubstring(s: string): number {
    let set = new Set(), maxL = 0, start = 0;
    const chars = s.split("");
    for (let i = 0; i < s.length; i++) {
        if (!set.has(chars[i])) {
            set.add(chars[i]);
            maxL = Math.max(maxL, (i - start) + 1);
        }
        else {
            while (set.has(chars[i])) {
                set.delete(chars[start]);
                start++;
            }
            i--;
        }

    }

    return maxL;
}
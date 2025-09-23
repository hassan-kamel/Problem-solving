function countGoodSubstrings(s: string): number {
    const map = new Map();
    s.split("").slice(0, 3).forEach((char) => {
        map.set(char, (map.get(char) || 0) + 1);
    })

    let res = 0;
    for (let i = 2; i < s.length; i++) {
        if (map.size === 3) res++;
        map.set(s[i - 2], map.get(s[i - 2]) - 1);
        map.set(s[i + 1], (map.get(s[i + 1]) || 0) + 1);

        if (map.get(s[i - 2]) === 0) map.delete(s[i - 2]);



    }

    return res;
};
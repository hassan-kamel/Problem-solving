function countGoodSubstrings(s: string): number {
    let res: number = 0
    for (let i: number = 0; i < s.length; i++) {
        if (new Set<string>(s.substring(i, i + 3)).size === 3) res++
    }
    return res
};
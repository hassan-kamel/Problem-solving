function findAnagrams(s: string, p: string): number[] {
    if (s.length < p.length) return [];
    let result = [];
    for (let i = 0; i <= s.length - p.length; i++) {
        if (checkIsAnagram(s.slice(i, p.length + i), p)) result.push(i);
    }
    return result;

};

function checkIsAnagram(s1: string, s2: string): boolean {
    const count = new Array(26).fill(0);
    for (let i = 0; i < s1.length; i++) {
        count[s1.charCodeAt(i) - 97]++;
        count[s2.charCodeAt(i) - 97]--;

    }
    return count.every(c => c === 0);
}
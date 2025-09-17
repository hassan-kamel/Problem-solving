function lengthOfLongestSubstring(s: string): number {
  const last = new Array<number>(128).fill(-1)
  let start = 0
  let maxLen = 0

  for (let i = 0; i < s.length; i++) {
    const code = s.charCodeAt(i)
    if (last[code] >= start) {
      start = last[code] + 1
    }
    last[code] = i
    maxLen = Math.max(maxLen, i - start + 1)
  }

  return maxLen
}
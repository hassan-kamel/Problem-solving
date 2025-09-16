function lengthOfLongestSubstring(s: string): number {
    let slow = 0, fast = 0, curr = 0, longest = 0;

    let set = new Set();

    let str = s.split("")
    while (fast < s.length) {
        if (!set.has(str[fast])) {
            set.add(str[fast]);
            curr++;
            if (longest < curr)
                longest = curr
            fast++;

        } else {
            curr = 0;
            set.clear();
            slow++;
            fast = slow;
        }


    }

    return longest;
};
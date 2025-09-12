function isPalindrome(str: string): boolean {
    let s = removeAllNonAlphanum(str.toLowerCase());
    if (s.length <= 1) return true;
    let i = 0, j = s.length - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
};

function isNonAlphanum(char: string): boolean {
    if (char.length !== 1) return false;
    return /^[^a-zA-Z0-9]$/.test(char);
}

function removeAllNonAlphanum(s: string): string[] {
    return s.split("").filter((char) => !isNonAlphanum(char));
}


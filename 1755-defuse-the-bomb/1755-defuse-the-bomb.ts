function decrypt(code: number[], k: number): number[] {
    if (k == 0) return new Array(code.length).fill(0);
    let result = [], start = k > 0 ? 1 : code.length - (-k), end = k > 0 ? k : code.length - 1;
    let currentSum = code.slice(start, end + 1).reduce((acc, curr) => acc + curr, 0)

    for (let i = 0; i < code.length; i++) {
        result.push(currentSum);
        currentSum -= code[start]
        start = ((start + 1) % code.length);
        end = ((end + 1) % code.length);
        currentSum += code[end];
    }

    return result;

};
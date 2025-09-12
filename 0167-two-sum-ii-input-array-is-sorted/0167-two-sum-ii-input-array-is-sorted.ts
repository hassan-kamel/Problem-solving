function twoSum(numbers: number[], target: number): number[] {
    let i = 0, j = numbers.length - 1;
    while (i < j) {
        const curr = numbers[i] + numbers[j];
        if (curr > target) j--;
        else if (curr < target) i++;
        else return [i + 1, j + 1];
    }
};
function simplifyPath(path: string): string {
    const dirs = path.split("/");
    const stack = [];
    dirs.filter(Boolean).forEach(dir => {
        if (dir == '..' && stack.length > 0) stack.pop();
        else if (dir == '..' && stack.length === 0) return;
        else if (dir !== '.') stack.push(dir);
    })

    return stack.length ? stack.map(dir => "/" + dir).join('') : '/';
};
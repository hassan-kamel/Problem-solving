/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function walk(node: TreeNode | null, path: number[]) {
    if (node == null) return;

    walk(node.left, path);
    path.push(node.val);
    walk(node.right, path);


}

function inorderTraversal(root: TreeNode | null): number[] {
    const path = [];
    walk(root,path);
    return path;
};
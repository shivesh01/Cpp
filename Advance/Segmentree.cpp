// sum of the given sequence using segment tree

/* Pseudocode

 int getSum(node, l, r)
{
    if the range of the node is within l and r
        return value in the node
   else if the range of the node is completely outside l and r
        return 0
   else
    return getSum(node's left child, l, r) + 
           getSum(node's right child, l, r)
} */
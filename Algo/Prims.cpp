// Prim's Algorithm in C++

// Pseudocode
T = ∅;
U = {1};
while (U ≠ V)
    let(u, v) be the lowest cost edge such that u ∈ U and v ∈ V - U;
T = T ∪ {(u, v)} U = U ∪ { v }
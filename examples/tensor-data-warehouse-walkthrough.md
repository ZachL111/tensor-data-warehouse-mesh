# Tensor Data Warehouse Mesh Walkthrough

This note is the quickest way to read the extra review model in `tensor-data-warehouse-mesh`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 159 | ship |
| stress | lineage depth | 172 | ship |
| edge | partition skew | 187 | ship |
| recovery | quality gap | 163 | ship |
| stale | schema drift | 235 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `baseline` becomes less cautious without a clear reason, I would inspect the drag input first.

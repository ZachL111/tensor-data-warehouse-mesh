# tensor-data-warehouse-mesh

`tensor-data-warehouse-mesh` explores data engineering with a small C++ codebase and local fixtures. The technical goal is to build a C++ toolkit that studies warehouse behavior through seeded input scenarios, with deterministic summary checks and no network dependency.

## Why It Exists

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Tensor Data Warehouse Mesh Review Notes

The first comparison I would make is `schema drift` against `schema drift` because it shows where the rule is most opinionated.

## Features

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/tensor-data-warehouse-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture Notes

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The same command runs the local verification path. The highest-scoring domain case is `stale` at 235, which lands in `ship`. The most cautious case is `baseline` at 159, which lands in `ship`.

## Limitations And Roadmap

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.

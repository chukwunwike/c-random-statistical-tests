This project implements four standard statistical tests in C to assess the quality of a pseudo-random number generator.

    Mean Test — Verifies the average of 1,000 generated digits approaches the expected value of 4.5.
    Frequency Test — Checks that digits 0–9 each occur approximately 10% of the time across 10,000 samples.
    Odd-Even Test — Confirms odd and even digits each appear roughly 50% of the time.
    Serial Test — Validates that all 100 possible pairs (00–99) occur with equal probability (~1%) across 10,000 pairs.

All programs use the specified random-number formula without modification and are compiled with GCC.

# Assignment 1 – Electricity Billing in C

Zero-rounding-error electricity billing for a rural co-operative (4,000 → 800,000 households).

| File | Task | What it shows |
|------|------|---------------|
| `task1_data_model.c` | Task 1 | Integer vs. string storage of a meter reading |
| `task2_data_types.c` | Task 2 | Data types and branch-free 16-bit rollover |
| `task3_constants_billing.c` | Task 3 | `#define` tariff constants and slab billing in paise |

## Build and run
```bash
gcc -Wall -Wextra -std=c99 task1_data_model.c -o task1 && ./task1
gcc -Wall -Wextra -std=c99 task2_data_types.c -o task2 && ./task2
gcc -Wall -Wextra -std=c99 task3_constants_billing.c -o task3 && ./task3
```

## Expected output
**Task 1**
```
Integer representation size: 2 bytes
String representation size:  6 bytes (d = 5 digits)
```
**Task 2**
```
sizeof(meter_t) = 2 bytes, maximum reading = 65535
Consumption: 330 units
Consumption: 256 units
```
**Task 3**
```
  0 units -> Rs 50.00
100 units -> Rs 50.00
150 units -> Rs 162.50
200 units -> Rs 275.00
350 units -> Rs 950.00
```

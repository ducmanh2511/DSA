# Các chỉ số nhỏ nhất (Minimum indexes)

**Phân loại:** Stack  
**Giới hạn thời gian:** 2 giây  
**Giới hạn bộ nhớ:** 256 MB

Cho mảng `A` gồm `N` số nguyên và `Q` truy vấn. Trong mỗi truy vấn, bạn được cho một chỉ số `i` (`1 ≤ i ≤ N`).

Hãy tìm chỉ số nhỏ nhất `j > i` thỏa mãn đồng thời:

1. Tổng các chữ số của `A[i]` lớn hơn tổng các chữ số của `A[j]`.
2. `A[i] < A[j]`.

Nếu không tồn tại chỉ số như vậy, in `-1`.

## Dữ liệu vào

- Dòng đầu tiên chứa hai số nguyên `N` và `Q`.
- Dòng tiếp theo chứa `N` phần tử của mảng `A`.
- Mỗi dòng trong `Q` dòng tiếp theo chứa một chỉ số truy vấn `i`.

## Dữ liệu ra

Với mỗi truy vấn, in chỉ số nhỏ nhất thỏa mãn yêu cầu; nếu không có, in `-1`.

## Ràng buộc

- `1 ≤ N, Q ≤ 10^5`
- `1 ≤ A[i] ≤ 10^9`
- `1 ≤ i ≤ N` đối với mỗi truy vấn

## Ví dụ

**Input**

```text
5 5
62 70 28 62 92
1
5
3
4
2
```

**Output**

```text
2
-1
4
-1
-1
```

**Giải thích:** Với truy vấn `i = 1`, ta có `A[1] = 62` và `A[2] = 70`. Vì `70 > 62` và tổng chữ số của `62` là `8 > 7` (tổng chữ số của `70`), đáp án là `2`.

**Nguồn:** https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/yassers-conditions-6cc26a09/
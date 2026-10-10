# Dynamic Array

## Đề bài

Sherlock gần đây đã học về **mảng động** (*dynamic array*). Để kiểm tra kiến thức của Sherlock, Watson đã đặt ra một số truy vấn liên quan đến mảng.

Các truy vấn được định nghĩa như sau:

### K = 1 — Add(x)

```text
Add(x)
```

Thêm `x` vào mảng động chứa các số.

---

### K = 2 — Delete(x)

```text
Delete(x)
```

Xóa một lần xuất hiện của `x` khỏi mảng.

---

### K = 3 — smallest(x)

```text
smallest(x)
```

In ra phần tử nhỏ thứ `x` trong mảng, với vị trí được đánh số bắt đầu từ `1`.

---

### K = 4 — gcd(L, R)

```text
gcd(L, R)
```

In ra **ước chung lớn nhất** của tất cả các số đã xuất hiện trong khoảng từ `L` đến `R`, bao gồm cả `L` và `R`, trong mảng.

---

Trong thao tác `Delete(x)`, phần tử `x` luôn tồn tại trong mảng.

Trong thao tác `smallest(x)`, tổng số phần tử trong mảng luôn lớn hơn hoặc bằng `x`.

Trong thao tác `gcd(L, R)`, sẽ có ít nhất hai số nguyên nằm trong khoảng từ `L` đến `R`.

Nhiệm vụ của bạn là giúp Sherlock trả lời các truy vấn này.

---

## Đầu vào

Dòng đầu tiên chứa một số nguyên `Q`, biểu thị số lượng truy vấn.

Các dòng tiếp theo chứa các truy vấn. Mỗi truy vấn có thể chứa hai hoặc ba số nguyên, được phân cách bởi một dấu cách.

Định dạng truy vấn có thể là:

```text
K x
```

hoặc:

```text
K L R
```

---

## Đầu ra

In ra đáp án của các truy vấn có:

```text
K = 3
```

hoặc:

```text
K = 4
```

Mỗi đáp án được in trên một dòng mới.

---

## Ràng buộc

```text
1 <= Q <= 10^6
1 <= x <= 10^6
1 <= K <= 4
1 <= L, R <= 10^6
L < R
```

---

## Đầu vào mẫu

```text
10
1 2
1 4
1 5
1 6
1 8
3 1
3 5
2 5
4 6 10
4 1 100
```
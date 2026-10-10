# HackerRank - Dynamic Array

## Đề bài

Khai báo một mảng hai chiều `arr` gồm `n` mảng rỗng:

```text
arr[0], arr[1], ..., arr[n - 1]
```

Khai báo một biến số nguyên `lastAnswer` và khởi tạo:

```text
lastAnswer = 0
```

Có hai loại truy vấn.

---

## Truy vấn loại 1

```text
1 x y
```

Tính:

```text
idx = (x XOR lastAnswer) % n
```

Sau đó thêm giá trị `y` vào cuối mảng:

```text
arr[idx]
```

---

## Truy vấn loại 2

```text
2 x y
```

Tính:

```text
idx = (x XOR lastAnswer) % n
```

Sau đó gán:

```text
lastAnswer = arr[idx][y % size(arr[idx])]
```

Lưu giá trị mới của `lastAnswer` vào mảng kết quả.

---

## Định dạng đầu vào

Dòng đầu tiên chứa hai số nguyên:

```text
n q
```

Trong đó:

- `n` là số lượng mảng rỗng.
- `q` là số lượng truy vấn.

Mỗi dòng trong `q` dòng tiếp theo chứa một truy vấn có dạng:

```text
1 x y
```

hoặc:

```text
2 x y
```

---

## Định dạng đầu ra

Với mỗi truy vấn loại `2`, in giá trị của `lastAnswer`.

Mỗi giá trị được in trên một dòng riêng.

---

## Ví dụ

### Đầu vào mẫu

```text
2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1
```

### Đầu ra mẫu

```text
7
3
```

---

## Giải thích

Trạng thái ban đầu:

```text
arr[0] = []
arr[1] = []

lastAnswer = 0
```

### Truy vấn 1

```text
1 0 5
```

Tính:

```text
idx = (0 XOR 0) % 2
    = 0
```

Thêm `5` vào `arr[0]`.

```text
arr[0] = [5]
arr[1] = []
```

---

### Truy vấn 2

```text
1 1 7
```

Tính:

```text
idx = (1 XOR 0) % 2
    = 1
```

Thêm `7` vào `arr[1]`.

```text
arr[0] = [5]
arr[1] = [7]
```

---

### Truy vấn 3

```text
1 0 3
```

Tính:

```text
idx = (0 XOR 0) % 2
    = 0
```

Thêm `3` vào `arr[0]`.

```text
arr[0] = [5, 3]
arr[1] = [7]
```

---

### Truy vấn 4

```text
2 1 0
```

Tính:

```text
idx = (1 XOR 0) % 2
    = 1
```

Mảng được chọn là:

```text
arr[1] = [7]
```

Tính:

```text
lastAnswer = arr[1][0 % 1]
           = arr[1][0]
           = 7
```

Kết quả:

```text
7
```

---

### Truy vấn 5

```text
2 1 1
```

Lúc này:

```text
lastAnswer = 7
```

Tính:

```text
idx = (1 XOR 7) % 2
    = 6 % 2
    = 0
```

Mảng được chọn là:

```text
arr[0] = [5, 3]
```

Tính:

```text
lastAnswer = arr[0][1 % 2]
           = arr[0][1]
           = 3
```

Kết quả:

```text
3
```

Do đó đầu ra cuối cùng là:

```text
7
3
```
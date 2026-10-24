# Bài tập Linked List

**Chủ đề:** Danh sách liên kết đơn (Singly Linked List)  
**Nguồn:** HackerEarth

---

## Bài 1: Khôi phục danh sách liên kết (Reversed Linked List)

**Giới hạn thời gian:** 1 giây  
**Giới hạn bộ nhớ:** 256 MB

**Đề gốc:** [Reversed Linked List](https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/practice-problems/algorithm/reversed-linked-list-01b722df/)

### Đề bài

Cho một danh sách liên kết gồm `N` số nguyên.

Danh sách ban đầu đã được biến đổi bằng các thao tác sau:

1. Xác định tất cả các đoạn liên tiếp chỉ chứa các số chẵn.
2. Đảo ngược thứ tự các phần tử trong từng đoạn đó.
3. Giữ nguyên vị trí các phần tử có giá trị lẻ.

Ví dụ, với danh sách:

`1 -> 2 -> 8 -> 9 -> 12 -> 16`

Các đoạn gồm toàn số chẵn là:

- `2 -> 8`
- `12 -> 16`

Sau khi đảo ngược từng đoạn, ta được:

`1 -> 8 -> 2 -> 9 -> 16 -> 12`

**Yêu cầu:** Cho danh sách sau khi biến đổi, hãy khôi phục danh sách ban đầu.

**Lưu ý:** Mỗi nút trong danh sách liên kết chứa một giá trị `data` và một con trỏ `next` trỏ đến nút tiếp theo.

### Dữ liệu vào (Input)

- Dòng đầu tiên chứa số nguyên `N`, là số lượng phần tử của danh sách liên kết.
- Dòng thứ hai chứa `N` số nguyên cách nhau bởi dấu cách, biểu diễn danh sách sau khi đã biến đổi.

### Dữ liệu ra (Output)

In ra `N` số nguyên của danh sách liên kết ban đầu, theo đúng thứ tự, cách nhau bởi dấu cách.

### Ràng buộc (Constraints)

- `1 <= N <= 10^3`
- `1 <= A[i] <= 10^9`

### Ví dụ

**Input**
```text
9
2 18 24 3 5 7 9 6 12
```

**Output**
```text
24 18 2 3 5 7 9 12 6
```

### Giải thích ví dụ

Danh sách ban đầu là:

`24 -> 18 -> 2 -> 3 -> 5 -> 7 -> 9 -> 12 -> 6`

Các đoạn liên tiếp chứa toàn số chẵn:

- `24 -> 18 -> 2`
- `12 -> 6`

Sau khi đảo ngược từng đoạn:

- `24 -> 18 -> 2` thành `2 -> 18 -> 24`
- `12 -> 6` thành `6 -> 12`

Danh sách sau biến đổi:

`2 -> 18 -> 24 -> 3 -> 5 -> 7 -> 9 -> 6 -> 12`

Đây chính là danh sách được cung cấp trong Input.

---
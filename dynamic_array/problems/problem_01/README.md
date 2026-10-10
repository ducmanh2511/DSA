Bài toán
- Khai báo một mảng hai chiều arr gồm n mảng rỗng, tất cả đều được đánh chỉ số bắt đầu từ 0.
- Khai báo một số nguyên lastAnswer và khởi tạo nó bằng 0.
Bạn cần xử lý hai loại truy vấn:
1. Truy vấn: 1 x y
   - Tính idx = ((x XOR lastAnswer) % n).
   - Thêm số nguyên y vào arr[idx].
2. Truy vấn: 2 x y
   - Tính idx = ((x XOR lastAnswer) % n).
   - Gán lastAnswer = arr[idx][y % size(arr[idx])].
   - Lưu giá trị mới của lastAnswer vào một mảng answers.
Chú ý:
- XOR là phép toán XOR theo bit, tương ứng với toán tử ^ trong hầu hết các ngôn ngữ.
- % là toán tử modulo.
- Cuối cùng, size(arr[idx]) là số lượng phần tử trong arr[idx].
Mô tả hàm
Hoàn thiện hàm dynamicArray với các tham số sau:
- int n: số lượng mảng rỗng cần khởi tạo trong arr.
- int queries[q][3]: mảng hai chiều gồm các số nguyên.
Giá trị trả về
- int[]: kết quả của mỗi truy vấn loại 2 theo thứ tự chúng xuất hiện.
Định dạng đầu vào
Dòng đầu tiên chứa hai số nguyên n và q cách nhau bởi dấu cách, trong đó n là kích thước của arr cần tạo và q là số lượng truy vấn.
Mỗi dòng trong q dòng tiếp theo chứa một truy vấn queries[i].
Ràng buộc
1 <= n, q <= 10^5
0 <= x, y <= 10^9

Đảm bảo rằng truy vấn loại 2 sẽ không bao giờ truy vấn một mảng rỗng hoặc một chỉ số không hợp lệ.
Đầu vào mẫu
STDIN    Function
-----    --------
2 5      kích thước arr[] n = 2, kích thước queries[] q = 5
1 0 5    queries = [[1,0,5],[1,1,7],[1,0,3],[2,1,0],[2,1,1]]
1 1 7
1 0 3
2 1 0
2 1 1

Đầu ra mẫu
7
3

Giải thích
Giá trị ban đầu:
arr[0] = [ ]
arr[1] = [ ]

Truy vấn 0: Thêm 5 vào arr[0].
arr[0] = [5]
arr[1] = [ ]

Truy vấn 1: Thêm 7 vào arr[1].
arr[0] = [5]
arr[1] = [7]

Truy vấn 2: Thêm 3 vào arr[0].
arr[0] = [5, 3]
arr[1] = [7]

Truy vấn 3: Gán giá trị tại chỉ số 0 của arr[1] cho lastAnswer. Lưu 7 vào mảng kết quả.
arr[0] = [5, 3]
arr[1] = [7]

Truy vấn 4: Gán giá trị tại chỉ số 1 của arr[0] cho lastAnswer. Lưu 3 vào mảng kết quả.
arr[0] = [5, 3]
arr[1] = [7]

Trả về mảng kết quả [7, 3]. Đoạn code có sẵn sẽ in các phần tử của mảng trên các dòng riêng biệt.
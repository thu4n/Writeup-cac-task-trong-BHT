# 10 BÀI LƯU ĐỒ THUẬT TOÁN
**Deadline đầu tiên mình nhận được khi tham gia vào Ban Học Tập của Đoàn khoa MMT&TT.**
## BÀI 1. 
![image](https://user-images.githubusercontent.com/53972592/139857911-f9d823a5-771c-4de4-8b30-6dff7d8a158d.png)

Đây là một bài mà mình nhận định là khá đơn giản. Dù không nêu rõ nhưng mình hiểu ý của người ra đề là chỉ được sử dụng phép nhân trong lưu đồ. Dưới đây là bài làm của mình:
![image](https://user-images.githubusercontent.com/53972592/139859749-cd0182c0-9ff9-407d-adb9-28360eda9539.png)

Đầu tiên, cho nhập vào biến `x`. Tiếp theo, mình gán giá trị bình phương của `x` vào một biến mới `x2`. Tương tự, mình lại tiếp tục gán trị bình phương của `x2` vào biến `x4` để được **x mũ 4**. Cuối cùng, để có giá trị của **x mũ 11**, mình tạo biến `x11` và gán cho nó giá trị từ biểu thức `x4*x4*x2*x`. Như vậy, sử dụng phép nhân số mũ có cùng cơ số đã giúp mình tìm được giá trị của **x mũ 11** sau **5** phép nhân.

**English translation:**

First, a variable `x` is inputted. Next, I assign the value of the square of `x` to a new variable `x2`. Similarly, I continue to assign the value of the square of `x2` to the variable `x4` so as to have **x to the power of 4**. Finally, I create a variable named `x11` and assign to it the value of `x4*x4*x2*x`. So, by multiplying exponents with the same base, I am able to find the value of **x to the power of 11** after **5** multiplications.

## BÀI 2.
![image](https://user-images.githubusercontent.com/53972592/139879061-c0e5f4e9-38b1-4c75-a32a-89b6e662fbb7.png)

Dạng bài này khi đọc vô thì thứ đầu tiên mình nghĩ tới là dùng vòng lặp và cứ thế, mình triển khai theo ý tưởng đó ra lưu đồ sau đây:
![image](https://user-images.githubusercontent.com/53972592/139971341-0ba8f60d-8c2a-46e7-85e9-bd65ee92159c.png)

Đầu tiên, cho nhập vào biến `n`. Tiếp theo, mình tạo một biến `sum` với giá trị bằng 0 để chứa giá trị của cái tổng mà mình đang tìm. Sau đó, mình tạo một vòng lặp với điều kiện lặp là `n/10 > 0`, mình sẽ giải thích điều kiện này trong lát nữa. Nếu điều kiện được thỏa mãn, mình thực hiện tiếp 2 câu lệnh là `sum += n%10` và `n /= 10`. Khi **chia lấy dư** một số nguyên bất kì có ít nhất 2 chữ số cho 10 trong C++, ta được thương là chữ số cuối cùng của số nguyên đó. Vậy với câu lệnh thứ nhất, chữ số cuối cùng trong `n` được cộng dồn vào `sum` với mỗi lần lặp. Khi **chia** một số nguyên bất kì có ít nhất 2 chữ số cho 10 trong C++, thương là số nguyên đó nhưng mất đi 1 chữ số ở hàng đơn vị. Vậy với câu lệnh thứ hai, `n` sẽ mất đi 1 chữ số ngoài cùng để trong các lần lặp tiếp theo, những chữ số còn lại của `n` sẽ được cộng vào `sum`. Vòng lặp sẽ được thực hiện tới khi `n` còn 1 chữ số, khi đó, nếu lấy `n` chia cho 10 sẽ thu được kết quả là 0. Do đó, điều kiện lặp không còn được thỏa mãn nữa và ta chuyển sang cộng chữ số còn sót lại của `n` vào `sum`. Từ đó, mình thu được `sum` là tổng của các chữ số trong `n`.

**English translation:**

First, a variable `n` is inputted. Next, I create a variable named `sum` with the value of 0 so as to store the value of the sum I'm looking for. After that, I create a loop with the condition of `n/10 > 0`, I will explain this condition later on. If the condition is satisfied, I continue to execute 2 commands which are `sum += n%10` and `n /= 10`. When **using modulus** of any integer with at least 2 digits and 10 in C++, we get a quotient that is the last digit of said integer. Therefore, with the first command, the last digit in `n` is added to `sum` after each loop. When **dividing** any integer with at least 2 digits by 10 in C++, quotient is said integer but without the digit in the unit position. Thereby, with the second command, `n` will lose 1 digit in the outermost position so that in the following loops, the remaining digits of `n` will be added to `sum`. From that, I receive `sum` as the sum of all the digits in `n`.

## BÀI 3.
![image](https://user-images.githubusercontent.com/53972592/139970194-f06aa799-c01a-4e5f-91f3-93c622a9943e.png)

Với bài này, mình tiếp tục sử dụng vòng lặp trong đó có sự tăng dần của nhiều biến:
![image](https://user-images.githubusercontent.com/53972592/139971394-8270092a-0408-480d-b3a6-bec398d4c55c.png)

Đầu tiên, cho nhập vào 2 biến `x` và `n`. Tiếp theo, mình thực hiện các công việc sau:
  1. Khởi tạo biến `i` với giá trị bằng 1.
  2. Khởi tạo biến `temp` với giá trị bằng `x`, đây là biến dùng để lưu trữ giá trị gốc của `x`.
  3. Khởi tạo biến `s`với giá trị bằng 0, đây là biến để chứa tổng mình đang tìm.

Sau đó, mình tạo một vòng lặp với điều kiện là `i <= n`. Bên trong vòng lặp, `s += x/i` được thực hiện để tính tổng, `x *= temp` được thực hiện để tăng số mũ của `x` lên 1 đơn vị và `i++` được thực hiện để tăng giá trị của mẫu số cũng như để phá vòng lặp. Sau khi `i` đã tăng tới giá trị của `n`, vòng lặp dừng lại và mình thu được `s` là tổng cần tìm.

**English translation:**

First, 2 variables `x` and `n` are inputted. Next, I perform the followings:
  1. Create a variable `i` with the value of 1.
  2. Create a variable `temp` with the value of `x`, this is to store the original value of `x`.
  3. Create a variable `s` with the value of 0, this is to store the sum I'm looking for.

After that, I create a loop with the condition of `i <= n`. Inside the loop, `s += x/i` is executed to calculate the sum, `x *= temp` is executed to increase the exponent by 1 and `i++` is executed to increase the value of the denominator as well as break the loop. After `i` reached the value of `n`, the loop is stopped and I receive `s` as the sum needed to find.

## BÀI 4.
![image](https://user-images.githubusercontent.com/53972592/139993843-c773b896-5f02-40b2-8e38-5c8bdb70c43d.png)

Tiếp tục sử dụng vòng lặp, lần nầy mình cần một biến để liên tục thay đổi dấu của các phần tử:
![image](https://user-images.githubusercontent.com/53972592/139995247-220e6c78-9185-4e4b-a55a-7a012e4830c1.png)

Đầu tiên, cho nhập vào 2 biến `x` và `n`.  Tiếp theo, mình thực hiện các công việc sau:
  1. Khởi tạo biến `i` với giá trị bằng 0.
  2. Khởi tạo biến `temp1` với giá trị bằng `1` và `neg` với giá trị bằng -1, đây là 2 biến dùng để thay đổi dấu.
  3. Khởi tạo biến `temp2` với giá trị bằng `x*x`, đây là biến để chứa các lũy thừa của `x`.
  4. Khởi tạo biến `s`với giá trị bằng 0, đây là biến để chứa tổng mình đang tìm.

Sau đó, mình tạo một vòng lặp với điều kiện là `i < n`. Bên trong vòng lặp, `temp1 *= neg` được thực hiện để thay đổi dấu, `s += temp1*temp2` được thực hiện để tính tổng, `temp2 *= x*x` được thực hiện để tăng số mũ của nó lên 2 đơn vị và `i++` được thực hiện để tăng dần `i` đến khi phá vòng lặp. Khi vòng lặp kết thúc, mình thu được `s` là tổng cần tìm.

## BÀI 5.
![image](https://user-images.githubusercontent.com/53972592/139999530-2455e618-e1b4-4c25-9130-dfa5e9d1518a.png)

Để làm bài này, mình đã sử dụng tới hàm sqrt():

![image](https://user-images.githubusercontent.com/53972592/139999636-4584ee55-5038-471f-9696-62a5da561237.png)

Đầu tiên, cho nhập vào 2 biến `x` và `n`. Tiếp theo, lần lượt khởi tạo `s = 0`, `temp = 1` và `i = 0`. Sau đó, mình tạo một vòng lặp với điều kiện `i < n`. Bên trong vòng lặp, `temp *= x` được thực hiện để tăng số mũ của `x` lên 1 đơn vị, `s = sqrt(temp+s)` được thực hiện để tính căn bậc 2 tổng của `temp` với `s` và `i++` được thực hiện để tăng dần `i` đến khi phá vòng lặp. Khi vòng lặp kết thúc, mình thu được `s` là tổng cần tìm.

## BÀI 6.
![image](https://user-images.githubusercontent.com/53972592/140000155-ca6727bd-7904-4015-ac9b-93769fcb5fd9.png)

Bài này lúc đầu mình bị lừa, sau mới nhận ra là không cần nhập biến:
![image](https://user-images.githubusercontent.com/53972592/140003053-0ae1968a-2880-48db-ac98-058c1f53f322.png)

Đầu tiên, khởi tạo cho các biến `s = 0`, `temp = 1` và `i = 1`. Tiếp theo, mình tạo một vòng lặp với điều kiện là `temp >= 10^-6`. Bên trong vòng lặp, mình cho `s += temp` với `temp = 1/i` và `i` tăng lên 1 đơn vị sau mỗi vòng lặp. Như vậy, `i` càng tăng thì `temp` càng nhỏ và đến một lúc nào đó thì `temp` sẽ nhỏ hơn 10 mũ trừ 6 để phá vòng lặp. Khi đó, biến `s` sẽ là tổng với độ chính xác 10 mũ trừ 6.

## BÀI 7.
![image](https://user-images.githubusercontent.com/53972592/140004071-90d2ed0a-dd32-42f2-b227-f9487f21b193.png)

Mình tự viết thêm hàm pow() để có thể sử dụng và giải quyết bài này:
![image](https://user-images.githubusercontent.com/53972592/140004220-cc3ff301-b974-437e-8ec2-caed8b85673b.png)

Trước tiên, mình tạo một hàm pow() nhận hai giá trị lần lượt là cơ số `a` và số mũ `b`. Bên trong hàm, mình khởi tạo hai biến `i = 1` và `temp = a` để sử dụng cho vòng lặp với điều kiện là `i < b`. Với mỗi lần lặp, `a *= temp` được thực hiện và `i` tăng lên một đơn vị cho đến khi bằng `b`. Như vậy, `a *= temp` sẽ được thực hiện `b` lần hay nói cách khác, ta có được `a` mũ `b`. Cuối cùng, khi vòng lặp bị phá, hàm trả về `a`.

Khi đã có hàm pow(), mình bát đầu lưu đồ như bình thường. Đầu tiên, cho nhập vào `n`. Kế tiếp, khởi tạo các biến `num = 0`, `i = 1` và `temp = -2`(giá trị của số hạng đầu tiên). Sau đó, mình tạo một vòng lặp với điều kiện `i <= n`. Bên trong vòng lặp, mình cho `num = temp` ngay từ đầu để phòng trường hợp `n` bằng 1 rồi mới tiếp tục cho `temp = temp*5 + 2*pow(3,i+1) - 6*pow(7,i+1) + 12` như công thức của đề bài. Tương tự các bài tập trên, `i++` được thực hiện để tăng giá trị `i` đến khi hết thỏa điều kiện. Cuối cùng, ta thu được `num` là số hạng thứ `n` cần tìm.

## BÀI 8.
![image](https://user-images.githubusercontent.com/53972592/140005295-c35f98c7-6c7e-44b2-b0f1-5a341465fc15.png)

Bài 8 có lẽ là bài gây khó chịu cho mình nhất vì nó rất là dài và lúc sửa bài, mình phát hiện bài làm còn thiếu 2 trường hợp khác. 2 trường hợp đó mình sẽ nói đến khi code lại lưu đồ nên tạm thời bài làm dưới đây còn thiếu sót:

![image](https://user-images.githubusercontent.com/53972592/140005571-f1244496-72fe-4e6f-b614-ff136ca718f6.png)
![image](https://user-images.githubusercontent.com/53972592/140005601-3dbae8df-b554-4baa-b0b8-eea5cf685c0b.png)
![image](https://user-images.githubusercontent.com/53972592/140005626-aa08d11c-b1f0-49bc-9092-36b824eab95e.png)


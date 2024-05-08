import java.io.*;
import java.util.*;

public class Main {
    static Scanner in = new Scanner(System.in);
    static PrintWriter out;

    public static void main(String[] args) throws IOException {
        int t = in.nextInt();

        HashMap<Integer, Integer> map = new HashMap<>();

        map.put(1, 24);
        map.put(2, 105);
        map.put(3, 935);
        map.put(4, 935);
        map.put(5, 1729);
        map.put(6, 1729);
        map.put(7, 6061);
        map.put(8, 6061);
        map.put(9, 9361);
        map.put(10, 9361);
        map.put(11, 15457);
        map.put(12, 15457);
        map.put(13, 24769);
        map.put(14, 24769);
        map.put(15, 33337);
        map.put(16, 33337);
        map.put(17, 41477);
        map.put(18, 41477);
        map.put(19, 66263);
        map.put(20, 66263);
        map.put(21, 76751);
        map.put(22, 76751);
        map.put(23, 121423);
        map.put(24, 121423);
        map.put(25, 152279);
        map.put(26, 152279);
        map.put(27, 152279);
        map.put(28, 152279);
        map.put(29, 183427);
        map.put(30, 183427);
        map.put(31, 270581);
        map.put(32, 270581);
        map.put(33, 281089);
        map.put(34, 281089);
        map.put(35, 294409);
        map.put(36, 294409);
        map.put(37, 411353);
        map.put(38, 411353);
        map.put(39, 432181);
        map.put(40, 432181);
        map.put(41, 501337);
        map.put(42, 501337);
        map.put(43, 679291);
        map.put(44, 679291);
        map.put(45, 679291);
        map.put(46, 679291);
        map.put(47, 797597);
        map.put(48, 797597);
        map.put(49, 857063);
        map.put(50, 857063);
        map.put(51, 924373);
        map.put(52, 924373);
        map.put(53, 1113389);
        map.put(54, 1113389);
        map.put(55, 1431163);
        map.put(56, 1431163);
        map.put(57, 1431163);
        map.put(58, 1431163);
        map.put(59, 1479677);
        map.put(60, 1479677);
        map.put(61, 1693961);
        map.put(62, 1693961);
        map.put(63, 1729069);
        map.put(64, 1729069);
        map.put(65, 1936769);
        map.put(66, 1936769);
        map.put(67, 2082359);
        map.put(68, 2082359);
        map.put(69, 2359117);
        map.put(70, 2359117);
        map.put(71, 2425571);
        map.put(72, 2425571);
        map.put(73, 2889899);
        map.put(74, 2889899);
        map.put(75, 2889899);
        map.put(76, 2889899);
        map.put(77, 2964317);
        map.put(78, 2964317);
        map.put(79, 3395779);
        map.put(80, 3395779);
        map.put(81, 3479111);
        map.put(82, 3479111);
        map.put(83, 3957029);
        map.put(84, 3957029);
        map.put(85, 4285439);
        map.put(86, 4285439);
        map.put(87, 4285439);
        map.put(88, 4285439);
        map.put(89, 5206087);
        map.put(90, 5206087);
        map.put(91, 5243141);
        map.put(92, 5243141);
        map.put(93, 5428411);
        map.put(94, 5428411);
        map.put(95, 5485253);
        map.put(96, 5485253);
        map.put(97, 6170393);
        map.put(98, 6170393);
        map.put(99, 6627721);
        map.put(100, 6627721);


// 因为 n 的范围是 1-100 ，所以打表，就是暴力打印结果，这个暴力的结果可以优化一下，跑的时间就短一些
//        
//        int i = 24;
//        for (int n = 1; n <= 100; n++) { // n 从 1 - 100
//            int max = 0;
//            for (; ; i++) {
//                ArrayList<Integer> temp = new ArrayList<>();
//                for (int j = 1; j <= i / j; j++) { // 求因子
//                    if (i % j == 0) {
//                        temp.add(j);
//                        if (j != i / j) temp.add(i / j);
//                    }
//                }
//
//                if (temp.size() < 8) continue; // 判断因子个数是否大于等于 8
//                boolean flag = true;
//                for (Integer x : temp) {
//                    for (Integer y : temp) {
//                        if (x - y != 0 && Math.abs(x - y) < n) { // 判断任意两个因子相减是否满足
//                            flag = false;
//                            break;
//                        }
//                    }
//                }
//
//                if (flag) {
//                    max = i;
//                    break;
//                }
//            }
//            map.put(n, max);
//        }
//        for (Map.Entry<Integer, Integer> e : map.entrySet()) {
//            System.out.println("map.put(" + e.getKey() + "," + e.getValue() + ");"); // 该内容就是以上 map.put() 的操作，把打印内容复制粘贴到上面就好了
//        }

        while (t-- > 0) {
            int n = in.nextInt();
            while (map.getOrDefault(n, -1) == -1) {
                n++;
            }
            System.out.println(map.get(n));
        }
    }
}

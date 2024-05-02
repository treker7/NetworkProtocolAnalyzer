# NetworkProtocolAnalyzer
Various Linux command line tools for proof of concept packet sniffing and spoofing over local area networks. These programs make use of the libpcap library. See - https://www.tcpdump.org/manpages/pcap.3pcap.html.

# Example
In this example, the NIC is placed in promiscuous mode, and packets are captured and dumped to the command line.

```
networking> ./cap_dump

IP Packet From: 192.168.1.5 To: 216.58.217.142
TCP Protocol. Source port: 58539	Dest port: 443
488 bytes of data:
17 03 03 01 E3 00 00 00 00 00 00 00 FF 6C F5 D0 | .............l..
64 BE C8 E8 B2 DE 06 A9 54 83 36 3C BD 70 13 C2 | d.......T.6<.p..
50 F8 0D B4 18 F5 A9 A0 D3 09 A2 82 0F B4 0B D8 | P...............
D7 B7 A3 98 CA A3 05 B6 63 A5 3E 74 7B 8E 39 F1 | ........c.>t{.9.
16 AA 7C EE FE AC 0D C9 94 E5 73 07 E3 AD 0B 49 | ..|.......s....I
C0 44 D6 E7 BD 5E FD D6 EE 95 AD C0 8A 3F 84 10 | .D...^.......?..
35 21 67 76 A2 DF 11 67 EF 70 FC FA 5A 4D EC 2A | 5!gv...g.p..ZM.*
85 27 4C 77 52 2B 8B 59 D7 E9 AC 48 91 B0 60 23 | .'LwR+.Y...H..`#
9E A9 D0 A0 CC 2E FF 67 09 53 8B 28 27 1B 49 EC | .......g.S.('.I.
CB 16 F5 8D DE B5 3E 40 42 82 17 9E 49 33 88 24 | ......>@B...I3.$
17 3F 18 E1 CD 0F 1E 73 F6 45 AE AC D0 DC F4 3B | .?.....s.E.....;
DF 43 FB 92 2E BC 45 3E 6E E0 58 C0 EF E5 30 FE | .C....E>n.X...0.
8A FE 09 75 8E D4 DC 85 56 09 EE 26 EC 93 B5 90 | ...u....V..&....
CF 99 0B D2 D1 A7 1B 4E A6 F4 59 84 C0 24 18 96 | .......N..Y..$..
ED EC C6 4B 08 7C 90 A0 DB 6B 8B 6A 03 A6 AF F6 | ...K.|...k.j....
6F EF C7 78 B2 86 D0 DB AB 46 31 41 5A 85 A8 B1 | o..x.....F1AZ...
DF 15 45 68 1D 54 62 7C 3E 30 16 DD 21 88 E4 22 | ..Eh.Tb|>0..!.."
00 C5 23 21 B4 57 8E 7D 9D 2A 03 CE 47 74 27 5C | ..#!.W.}.*..Gt'\
A6 42 2E 57 7D A0 B2 78 F9 D7 AD AE E0 7A 94 AF | .B.W}..x.....z..
2B E0 77 A8 39 0F 21 48 24 74 B3 0F 24 E7 DE 35 | +.w.9.!H$t..$..5
A9 47 31 CB ED 28 86 1C 3F 62 18 B1 D1 0E D7 7A | .G1..(..?b.....z
7F 1C 18 F1 BE FB 2E 9A 6D 46 B3 AE 08 C7 FD 33 | ........mF.....3
C4 9E 39 09 84 2B 33 2C 5E D7 09 72 32 1C 6A 99 | ..9..+3,^..r2.j.
46 A7 60 91 06 65 70 E8 07 42 4F A8 B4 25 23 DB | F.`..ep..BO..%#.
E1 27 89 E6 32 CA 67 E5 F3 09 EC 82 62 9E 4C E1 | .'..2.g.....b.L.
F2 3C 0D BE 0D 7A 7C 53 3E CF 98 5B 57 51 09 9E | .<...z|S>..[WQ..
23 EC 6E 93 00 24 FB B4 16 AE F4 33 99 98 52 51 | #.n..$.....3..RQ
8F 74 D8 3E 61 9F 32 1D E8 B7 E9 31 19 89 3A 2D | .t.>a.2....1..:-
FF 9C 4A 45 AA 93 6A 61 F2 B2 E5 AE 89 DD A4 5C | ..JE..ja.......\
5D 58 E4 53 AD 56 DE B7 03 98 78 5A 49 03 90 89 | ]X.S.V....xZI...
CD 0B B6 14 AD F2 1F 60 | .......`

IP Packet From: 192.168.1.5 To: 216.58.217.142
TCP Protocol. Source port: 58539	Dest port: 443
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 01 00 59 F2 A3 | ....)........Y..
5E A6 49 8E 94 2E BE 6B C8 A5 96 7D 9D B6 1D C0 | ^.I....k...}....
38 88 E5 40 AE 5E 15 1F E1 1A ED EF 45 C3 | 8..@.^......E.

IP Packet From: 216.58.217.142 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 58539
0 bytes of data:

IP Packet From: 216.58.217.142 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 58539
0 bytes of data:

IP Packet From: 216.58.217.142 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 58539
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 01 62 BC 97 36 | ....).......b..6
59 DC 54 AA B5 CB B9 8F 5E 2C 12 BD 9F 94 8A E9 | Y.T.....^,......
46 0C 8A ED BD 8D 72 5B 11 C1 50 75 7C 48 | F.....r[..Pu|H

IP Packet From: 216.58.217.142 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 58539
73 bytes of data:
17 03 03 00 44 00 00 00 00 00 00 01 63 3A F9 FA | ....D.......c:..
5C 9C 09 A1 07 22 1A 62 77 8B EE 96 A3 E7 5F 68 | \....".bw....._h
3A 43 38 A4 7F 7A E4 DC 1C 1E 98 F1 1B 5D 37 81 | :C8..z.......]7.
0F 76 3F 47 9C 64 C0 21 EB ED 1B 23 0C E7 E5 9A | .v?G.d.!...#....
52 1E 02 3E D1 32 15 0B 6D | R..>.2..m

IP Packet From: 192.168.1.5 To: 216.58.217.142
TCP Protocol. Source port: 58539	Dest port: 443
0 bytes of data:

IP Packet From: 216.58.217.142 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 58539
38 bytes of data:
17 03 03 00 21 00 00 00 00 00 00 01 64 55 5F F4 | ....!.......dU_.
B2 59 04 55 25 DF C5 16 1B 61 D5 C9 35 63 4F 17 | .Y.U%....a..5cO.
A8 2B F1 53 A8 53 | .+.S.S

IP Packet From: 216.58.217.142 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 58539
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 01 65 95 8A 03 | ....).......e...
8C 76 9C F0 A9 B7 B8 57 41 31 7A C0 02 9C 95 69 | .v.....WA1z....i
4B CF 4A 4A 34 D5 B9 1F A4 65 F7 31 78 BA | K.JJ4....e.1x.

IP Packet From: 192.168.1.5 To: 216.58.217.142
TCP Protocol. Source port: 58539	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.217.142
TCP Protocol. Source port: 58539	Dest port: 443
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 01 01 96 EF B4 | ....)...........
EB 14 66 25 6F 64 32 0C 1F 6E B0 66 38 12 9F 96 | ..f%od2..n.f8...
36 70 5A 83 43 8B 13 00 5E A7 B9 FB B9 C5 | 6pZ.C...^.....

IP Packet From: 216.58.217.142 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 58539
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.185
TCP Protocol. Source port: 56494	Dest port: 443
0 bytes of data:

IP Packet From: 209.107.217.185 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 56494
0 bytes of data:

IP Packet From: 192.168.1.5 To: 192.168.1.1
UDP Protocol. Source port: 42791	Dest port: 53
33 bytes of data:
BF 69 01 00 00 01 00 00 00 00 00 00 03 77 77 77 | .i...........www
07 74 63 70 64 75 6D 70 03 6F 72 67 00 00 01 00 | .tcpdump.org....
01 | .

IP Packet From: 192.168.1.1 To: 192.168.1.5
UDP Protocol. Source port: 53	Dest port: 42791
81 bytes of data:
BF 69 81 80 00 01 00 03 00 00 00 00 03 77 77 77 | .i...........www
07 74 63 70 64 75 6D 70 03 6F 72 67 00 00 01 00 | .tcpdump.org....
01 C0 0C 00 01 00 01 00 00 00 3C 00 04 84 D5 EE | ..........<.....
06 C0 0C 00 01 00 01 00 00 00 3C 00 04 C0 8B 2E | ..........<.....
42 C0 0C 00 01 00 01 00 00 00 3C 00 04 2D 37 B9 | B.........<..-7.
7E | ~

IP Packet From: 74.125.21.105 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 55446
63 bytes of data:
17 03 03 00 3A 00 00 00 00 00 00 00 3D 28 A0 3B | ....:.......=(.;
F4 1B 6F 87 81 FD DD 04 4D DE 78 2C 46 E4 1E 47 | ..o.....M.x,F..G
B4 2F 8F F0 13 ED E9 69 AD 09 3E 83 2C 50 D3 1F | ./.....i..>.,P..
00 32 38 36 80 51 23 C5 B7 43 13 09 42 4E 25 | .286.Q#..C..BN%

IP Packet From: 192.168.1.5 To: 74.125.21.105
TCP Protocol. Source port: 55446	Dest port: 443
0 bytes of data:

IP Packet From: 74.125.21.105 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 55446
0 bytes of data:

IP Packet From: 192.168.1.5 To: 74.125.21.105
TCP Protocol. Source port: 55446	Dest port: 443
0 bytes of data:

IP Packet From: 74.125.21.105 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 55446
0 bytes of data:

IP Packet From: 192.168.1.5 To: 192.168.1.1
UDP Protocol. Source port: 64742	Dest port: 53
43 bytes of data:
AA E7 01 00 00 01 00 00 00 00 00 00 07 61 64 63 | .............adc
6C 69 63 6B 01 67 0B 64 6F 75 62 6C 65 63 6C 69 | lick.g.doublecli
63 6B 03 6E 65 74 00 00 01 00 01 | ck.net.....

IP Packet From: 192.168.1.1 To: 192.168.1.5
UDP Protocol. Source port: 53	Dest port: 64742
82 bytes of data:
AA E7 81 80 00 01 00 02 00 00 00 00 07 61 64 63 | .............adc
6C 69 63 6B 01 67 0B 64 6F 75 62 6C 65 63 6C 69 | lick.g.doublecli
63 6B 03 6E 65 74 00 00 01 00 01 C0 0C 00 05 00 | ck.net..........
01 00 00 18 7B 00 0B 06 70 61 67 65 61 64 01 6C | ....{...pagead.l
C0 16 C0 37 00 01 00 01 00 00 00 C3 00 04 D8 3A | ...7...........:
DB C2 | ..

IP Packet From: 192.168.1.5 To: 192.168.1.1
UDP Protocol. Source port: 57583	Dest port: 53
31 bytes of data:
26 AF 01 00 00 01 00 00 00 00 00 00 01 73 07 79 | &............s.y
6F 75 74 75 62 65 03 63 6F 6D 00 00 01 00 01 | outube.com.....

IP Packet From: 192.168.1.1 To: 192.168.1.5
UDP Protocol. Source port: 53	Dest port: 57583
82 bytes of data:
26 AF 81 80 00 01 00 02 00 00 00 00 01 73 07 79 | &............s.y
6F 75 74 75 62 65 03 63 6F 6D 00 00 01 00 01 C0 | outube.com......
0C 00 05 00 01 00 00 04 77 00 17 0B 76 69 64 65 | ........w...vide
6F 2D 73 74 61 74 73 01 6C 06 67 6F 6F 67 6C 65 | o-stats.l.google
C0 16 C0 2B 00 01 00 01 00 00 01 1C 00 04 D8 3A | ...+...........:
DB CE | ..

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
517 bytes of data:
16 03 01 02 00 01 00 01 FC 03 03 60 28 4E E9 E8 | ...........`(N..
68 3E 09 87 4E 95 60 AB B2 97 A2 2D 30 8A F5 6D | h>..N.`....-0..m
A7 99 27 2D DD A5 FE 42 58 00 C9 20 6A 4B C8 39 | ..'-...BX.. jK.9
7C 69 59 6B 8A C6 4D 87 54 88 19 55 29 78 B2 DB | |iYk..M.T..U)x..
8C F5 AF 33 0E 67 8A 5C D1 91 7A 3A 00 24 C0 2B | ...3.g.\..z:.$.+
C0 2F 00 9E C0 0A C0 09 C0 13 C0 14 C0 07 C0 11 | ./..............
00 33 00 32 00 39 00 9C 00 2F 00 35 00 0A 00 05 | .3.2.9.../.5....
00 04 01 00 01 8F 00 00 00 12 00 10 00 00 0D 73 | ...............s
2E 79 6F 75 74 75 62 65 2E 63 6F 6D FF 01 00 01 | .youtube.com....
00 00 0A 00 08 00 06 00 17 00 18 00 19 00 0B 00 | ................
02 01 00 00 23 00 D4 E0 F0 F4 E6 04 F3 26 9C F0 | ....#........&..
67 90 87 F3 65 71 BE 92 07 55 2A CE 49 1E A9 DB | g...eq...U*.I...
77 A5 D1 54 AB 0B EB D5 A0 99 63 15 2A 14 B2 39 | w..T......c.*..9
BC 52 17 EE AD 8F 57 B7 B4 14 43 E7 9B E3 89 AC | .R....W...C.....
1F A8 36 7F 5B 08 BF F5 24 B7 B8 F4 86 E7 E1 8F | ..6.[...$.......
4F 66 8B D6 A6 A4 83 0A 73 2D 8C E1 6D B3 37 7D | Of......s-..m.7}
E8 4D 2F 29 5C CA 55 DA B8 E5 58 94 F3 22 0D 9E | .M/)\.U...X.."..
80 B5 0D 42 AA A2 B7 E3 99 08 89 72 6D DD 3A CD | ...B.......rm.:.
4F EF 50 5A BC AD 2F 1A BE 05 3F 53 CB 58 4D D6 | O.PZ../...?S.XM.
0C EA 85 78 80 26 F0 16 D3 77 A5 46 51 41 D1 A6 | ...x.&...w.FQA..
87 9C B2 B2 83 03 2C F6 50 43 B0 38 6A 43 55 95 | ......,.PC.8jCU.
99 76 02 CC 72 EF 15 3D F3 BB 4D 5C AD 45 82 FA | .v..r..=..M\.E..
BA 52 CF F3 56 14 58 F1 4C 61 39 93 29 D0 EE A6 | .R..V.X.La9.)...
89 1E 1E AA 0B C1 A8 4B 8D 05 C3 33 74 00 00 00 | .......K...3t...
10 00 1A 00 18 08 73 70 64 79 2F 33 2E 31 05 68 | ......spdy/3.1.h
32 2D 31 34 08 68 74 74 70 2F 31 2E 31 75 50 00 | 2-14.http/1.1uP.
00 00 05 00 05 01 00 00 00 00 00 12 00 00 00 0D | ................
00 12 00 10 04 01 05 01 02 01 04 03 05 03 02 03 | ................
04 02 02 02 00 15 00 3D 00 00 00 00 00 00 00 00 | .......=........
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 | ................
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 | ................
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 | ................
00 00 00 00 00 | .....

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
153 bytes of data:
16 03 03 00 61 02 00 00 5D 03 03 55 23 50 16 E5 | ....a...]..U#P..
B0 9C 31 24 D5 99 62 35 F7 C3 77 9D 55 8D 4C B0 | ..1$..b5..w.U.L.
1A 59 7E CB F6 EB 88 DA EF 02 2E 20 6A 4B C8 39 | .Y~........ jK.9
7C 69 59 6B 8A C6 4D 87 54 88 19 55 29 78 B2 DB | |iYk..M.T..U)x..
8C F5 AF 33 0E 67 8A 5C D1 91 7A 3A C0 2B 00 00 | ...3.g.\..z:.+..
15 FF 01 00 01 00 75 50 00 00 00 10 00 08 00 06 | ......uP........
05 68 32 2D 31 34 14 03 03 00 01 01 16 03 03 00 | .h2-14..........
28 00 00 00 00 00 00 00 00 7A DB 4B 08 FA 61 5F | (........z.K..a_
FB 9A 72 79 3D 23 53 E0 A2 68 CA FB 80 26 5E 0B | ..ry=#S..h...&^.
0B 6E 3D D4 CF 6A AC 7D A0 | .n=..j.}.

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
187 bytes of data:
14 03 03 00 01 01 16 03 03 00 B0 00 00 00 00 00 | ................
00 00 00 E1 04 1A 63 40 0C 7C 46 AB 00 16 BD 7A | ......c@.|F....z
B0 54 C7 67 6A 97 AF 88 C2 94 5B 5E 0A 35 14 A4 | .T.gj.....[^.5..
40 CA B2 F3 44 D5 DD 8D E0 C8 FC 7E A5 33 BB 4C | @...D......~.3.L
A8 BA 4D EF 2C 5E 10 B6 CF 0D AA F6 52 EA E8 90 | ..M.,^......R...
06 47 05 87 F4 94 36 28 E0 D2 85 E7 E7 95 C2 73 | .G....6(.......s
1E 4B FD 91 A4 9E 95 33 D6 50 87 1B 78 DA 4F 22 | .K.....3.P..x.O"
9E 88 F1 43 96 9A F4 42 D6 54 A2 A3 43 39 23 7C | ...C...B.T..C9#|
C3 FF 37 D2 08 0B 0F EC 48 66 F5 BB D0 3F 23 35 | ..7.....Hf...?#5
73 7B 80 8D A8 75 F5 0E 3B C3 25 47 DA 84 19 47 | s{...u..;.%G...G
82 28 46 6D B9 68 0D E5 34 E9 47 35 5C 99 16 FC | .(Fm.h..4.G5\...
1C 94 4E D8 06 0A 2C D5 45 19 15 | ..N...,.E..

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
53 bytes of data:
17 03 03 00 30 00 00 00 00 00 00 00 01 D6 D5 BB | ....0...........
6E 80 8A C6 46 BF 29 7A 28 75 CD 61 88 67 3B 64 | n...F.)z(u.a.g;d
27 1F 4A 52 77 A0 28 B5 9E 1E 2E 4A BA F1 19 F5 | '.JRw.(....J....
44 11 2F F2 A2 | D./..

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
50 bytes of data:
17 03 03 00 2D 00 00 00 00 00 00 00 02 DC CB DA | ....-...........
33 C0 3F 7C D5 F6 11 0F A8 43 E6 45 5B 0E B9 2D | 3.?|.....C.E[..-
E6 27 6E F3 FC C2 0A 50 AE E7 65 66 AD DE 95 32 | .'n....P..ef...2
66 CF | f.

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
42 bytes of data:
17 03 03 00 25 00 00 00 00 00 00 00 03 B9 7E E7 | ....%.........~.
F1 85 29 6E 68 B1 CF F0 30 CE FF 6F F3 32 53 86 | ..)nh...0..o.2S.
23 63 15 C8 A9 E1 F2 F8 30 5E | #c......0^

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
923 bytes of data:
17 03 03 03 96 00 00 00 00 00 00 00 04 95 C2 A7 | ................
D6 0D 6F 51 C2 6C 41 98 F1 9A 8B 57 39 E3 37 4E | ..oQ.lA....W9.7N
4B 65 4E 93 9A 47 7B 47 5C 61 5A 49 FB D4 E2 7B | KeN..G{G\aZI...{
2F 88 3D 6B D4 D0 7C E0 7A 86 40 0F E7 4C 5B 42 | /.=k..|.z.@..L[B
0C A0 A4 E7 94 C9 4B F0 28 13 C6 52 93 91 87 F0 | ......K.(..R....
D3 77 C1 20 AB BF BB 5B C9 E1 82 5E 32 C6 35 FC | .w. ...[...^2.5.
C2 61 D8 79 B0 51 4B D5 40 B8 00 0B 88 77 EC B9 | .a.y.QK.@....w..
99 B8 1F 1D F3 85 FC 67 62 10 B1 04 37 ED EE 4F | .......gb...7..O
19 D3 BE A3 EF C3 73 5D 1E 17 B1 EF FF 9B CB 01 | ......s]........
B9 71 F1 DA CF 5E 18 76 9C 27 A4 4E E4 61 5A 4F | .q...^.v.'.N.aZO
A0 FE F4 7D 19 7A 2C B4 C9 8F 06 00 CC 79 2F 10 | ...}.z,......y/.
F3 24 69 F6 6C 5A C1 35 27 7D 4C 8D 32 32 68 B2 | .$i.lZ.5'}L.22h.
25 3A 83 3C AB 84 AD F0 83 D8 43 F0 CF 92 08 0C | %:.<......C.....
29 D9 4F 50 11 16 AD 36 C8 AA E7 4B 91 F2 8B BE | ).OP...6...K....
F4 C0 25 FB BC 77 4F A0 86 4C 80 7E 51 A3 1D 9C | ..%..wO..L.~Q...
3F 26 50 24 46 96 FA 0B 14 01 F2 43 FB A7 D0 95 | ?&P$F......C....
70 6A 85 0B 61 64 94 A2 FF 83 92 36 CF 07 19 FE | pj..ad.....6....
3A 34 CB 5C D5 20 39 FF 6B A7 51 02 8A 1F D4 EE | :4.\. 9.k.Q.....
4A 8B 3A 7D CB B4 69 D7 18 30 76 FF 8F 75 4C 1B | J.:}..i..0v..uL.
67 BC C0 88 ED EF B5 F5 D9 B1 5A 29 82 0F C4 7D | g.........Z)...}
49 D7 F9 1C 60 A7 AF 71 43 69 32 0F AB 15 FC 2F | I...`..qCi2..../
B4 D6 2B CF B9 8E 5D A0 AF 71 6B C4 D5 35 AF 84 | ..+...]..qk..5..
62 FC 30 CA C5 DC 9E DA 3A 2E A8 7D F5 6B B3 3C | b.0.....:..}.k.<
F1 D7 60 87 06 7E B0 89 A1 79 B0 B9 CA 79 14 E1 | ..`..~...y...y..
FD BB F4 F4 7E 92 86 0A 4F D3 29 94 54 36 3A 2A | ....~...O.).T6:*
F7 0E 4F CD FF FC 53 52 47 F5 53 1A 8F DE 07 A8 | ..O...SRG.S.....
44 62 64 A3 24 15 53 2B F7 62 83 7B A6 F1 1C 88 | Dbd.$.S+.b.{....
48 C3 FC CC 03 26 29 61 8B F2 7E 1D 8A F3 1E 54 | H....&)a..~....T
63 8F C7 A6 CA 33 5A BE 5B 05 B8 6C E2 B6 A6 53 | c....3Z.[..l...S
77 53 CA E0 08 C8 12 85 A8 24 E3 78 08 A3 3D 30 | wS.......$.x..=0
19 76 15 99 C3 E6 45 9B 1B 51 42 A3 BC 7D CC 16 | .v....E..QB..}..
87 9A 5D 07 2F 05 D2 DE 67 6C C2 16 3B 40 EE 90 | ..]./...gl..;@..
D6 C2 DF 95 D6 B1 33 F6 86 4C 99 AD 83 33 C3 4B | ......3..L...3.K
93 C4 25 C4 A6 4B 6F 5A C2 84 7F 30 F8 10 8E 24 | ..%..KoZ...0...$
D7 ED 2B 62 91 4B DD AD B4 94 38 3F E7 2E 6D 56 | ..+b.K....8?..mV
1F 89 0C 5F A3 4C 19 21 19 B1 0D 17 94 8C 08 74 | ..._.L.!.......t
64 3F 02 A1 B3 E8 D9 2C 94 2D A1 8A D4 43 6A 6B | d?.....,.-...Cjk
50 A2 54 56 F5 AC 29 72 BF 35 3D 7D 44 0A 91 07 | P.TV..)r.5=}D...
8B B3 D9 E8 71 FB 22 79 82 DD A3 10 96 83 12 2E | ....q."y........
B9 3C 75 5E 02 2C BC 85 F3 5A 3D F3 BE 91 75 81 | .<u^.,...Z=...u.
5A AE A1 85 94 C1 13 0D 9D 5F AE E0 08 8C 75 66 | Z........_....uf
CB 75 98 E2 89 14 A2 4D A7 20 66 A8 A5 A0 C5 A1 | .u.....M. f.....
87 68 38 53 DF 67 C8 4B 5D 4B C6 16 28 DC 40 91 | .h8S.g.K]K..(.@.
23 07 8E 4D 4B 8D 66 6B A0 65 DB E5 34 16 C2 AE | #..MK.fk.e..4...
21 BE C7 34 59 7F E6 69 05 95 7F 7D E6 E7 46 E4 | !..4Y..i...}..F.
FD D3 61 32 2C FE 3A 77 52 11 C0 C6 9B AB 30 76 | ..a2,.:wR.....0v
44 06 41 D8 1F DA C3 59 D8 6C 0A 92 6D C0 47 C1 | D.A....Y.l..m.G.
40 62 79 11 E1 F3 AF 5B A8 F7 CE A2 21 11 FC 1A | @by....[....!...
05 12 3A 1D 69 0B 54 03 1F A6 31 8E DF 83 E0 B4 | ..:.i.T...1.....
99 97 DF E6 1F D1 44 AA 62 AB 7E DB BF D7 D3 59 | ......D.b.~....Y
06 94 38 E8 A4 91 6D AC CE 6C 98 FA 15 37 CD 02 | ..8...m..l...7..
0D 60 01 8D 5E 1D 05 88 85 75 A1 7D 58 61 F7 38 | .`..^....u.}Xa.8
7A AE EF 62 AF 73 B7 89 7B FD D6 AE 30 EF 82 1B | z..b.s..{...0...
D3 AE BC 7D 82 06 1F D3 6A F6 34 E2 59 78 54 65 | ...}....j.4.YxTe
97 E9 19 8A 7E BC 23 F9 23 88 D3 CB A5 6A 26 50 | ....~.#.#....j&P
F6 DE E3 92 0A 8D 44 DF E7 FF A2 06 1F B4 07 A5 | ......D.........
A0 B7 1C 4F 40 16 5C C8 86 42 5E 47 2B FD C5 D5 | ...O@.\..B^G+...
7E 2B C6 B5 0F 64 9E C2 FD 10 BB | ~+...d.....

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
56 bytes of data:
17 03 03 00 33 00 00 00 00 00 00 00 01 30 D9 3E | ....3........0.>
29 9E 4D 31 DB 9C D1 FC 24 B0 80 19 2D C3 F5 EF | ).M1....$...-...
B1 86 91 47 BC CB CA 64 CC 68 2E C4 13 36 32 BC | ...G...d.h...62.
A7 32 A6 4C 94 50 E3 12 | .2.L.P..

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
38 bytes of data:
17 03 03 00 21 00 00 00 00 00 00 00 05 1D B0 0F | ....!...........
E8 61 51 C6 E5 45 80 48 4C CF CF B2 B3 2A 1D DE | .aQ..E.HL....*..
3A A3 B8 87 65 3B | :...e;

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
42 bytes of data:
17 03 03 00 25 00 00 00 00 00 00 00 02 02 25 0F | ....%.........%.
03 B5 04 09 C7 55 83 25 61 6F 32 6E FA 74 D2 F5 | .....U.%ao2n.t..
A0 09 81 22 B9 B5 0A 87 E9 72 | ...".....r

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
38 bytes of data:
17 03 03 00 21 00 00 00 00 00 00 00 03 52 AD F3 | ....!........R..
4C D9 26 A8 18 FD BD 8A DB 37 FD BA 23 D1 78 82 | L.&......7..#.x.
A2 42 64 12 77 A5 | .Bd.w.

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
258 bytes of data:
17 03 03 00 FD 00 00 00 00 00 00 00 04 B0 5F EE | .............._.
7F 69 A3 EE 02 BC CD 58 FD 06 4F 1F 5A 9A D8 D5 | .i.....X..O.Z...
67 22 E2 70 70 AE 86 69 47 94 53 E1 9C 9E 77 14 | g".pp..iG.S...w.
72 53 9A 13 06 02 FA 64 54 81 EF BA CF CC E6 0A | rS.....dT.......
1B 11 20 F8 C5 D0 AB 43 17 2E 35 69 95 67 8D F8 | .. ....C..5i.g..
CF 3B 2F A5 A6 21 4D 34 29 25 96 99 3F D4 F0 E2 | .;/..!M4)%..?...
C8 B9 68 00 15 E7 3B 97 49 75 CE D7 A8 50 84 99 | ..h...;.Iu...P..
09 05 10 C4 C5 5E B8 95 5C 60 80 0A FE 07 77 C8 | .....^..\`....w.
89 82 15 48 C0 26 04 6C 74 83 EE 55 C2 B3 F6 23 | ...H.&.lt..U...#
66 26 7F 28 78 8C BD C3 6C 64 E4 B5 D6 61 71 A3 | f&.(x...ld...aq.
C1 96 E6 70 B1 56 99 A1 79 0A 66 D7 9D 95 75 93 | ...p.V..y.f...u.
03 7A 32 CB 2C 74 21 62 23 D9 08 8B 1C 86 70 3C | .z2.,t!b#.....p<
8F D6 35 37 18 FB EF 64 DB C0 20 0F 53 D5 18 89 | ..57...d.. .S...
BA B3 C8 18 27 8F 18 E7 AC 8E B1 DA 8F 79 0F DE | ....'........y..
FE 70 EA 07 D6 AB 5A 3B 1C C1 77 A8 A5 71 6B 54 | .p....Z;..w..qkT
3F FB 0E C8 F4 54 CD 5B C6 21 43 4E 46 8B B3 D5 | ?....T.[.!CNF...
8F 1D | ..

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
38 bytes of data:
17 03 03 00 21 00 00 00 00 00 00 00 05 62 37 C1 | ....!........b7.
8F 2F 81 D6 DA CD DD C9 09 F8 F8 47 C3 65 00 D7 | ./.........G.e..
85 1A 5E 0B 91 5E | ..^..^

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 06 44 CA 6F | ....)........D.o
81 13 3A 85 A3 21 44 15 A5 24 E7 BB 1C 49 81 C1 | ..:..!D..$...I..
98 D7 3D B7 EB 69 B0 CE 3E 34 4D FB 56 95 | ..=..i..>4M.V.

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 06 64 C4 5F | ....)........d._
14 DA 54 0E 02 C5 CD F7 32 A3 D9 C8 CC 5F 43 29 | ..T.....2...._C)
13 36 C8 8C 72 94 A3 E4 3E 10 2C B8 8B 17 | .6..r...>.,...

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.198
TCP Protocol. Source port: 46248	Dest port: 443
0 bytes of data:

IP Packet From: 216.58.219.198 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 46248
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44209	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44202	Dest port: 443
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44209
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44202
0 bytes of data:

IP Packet From: 192.168.1.5 To: 224.0.0.251
UDP Protocol. Source port: 5353	Dest port: 5353
45 bytes of data:
00 00 00 00 00 02 00 00 00 00 00 00 05 5F 69 70 | ............._ip
70 73 04 5F 74 63 70 05 6C 6F 63 61 6C 00 00 0C | ps._tcp.local...
00 01 04 5F 69 70 70 C0 12 00 0C 00 01 | ..._ipp......

Unkown packet type: 34525

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44211	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.19
TCP Protocol. Source port: 57170	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.19
TCP Protocol. Source port: 57171	Dest port: 443
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44211
0 bytes of data:

IP Packet From: 65.124.174.19 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57170
0 bytes of data:

IP Packet From: 65.124.174.19 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57171
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39932	Dest port: 443
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39932
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44210	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39931	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39906	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39899	Dest port: 443
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39931
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44210
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39906
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39899
0 bytes of data:

IP Packet From: 192.168.1.5 To: 204.93.33.25
TCP Protocol. Source port: 35238	Dest port: 443
0 bytes of data:

IP Packet From: 204.93.33.25 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 35238
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.185
TCP Protocol. Source port: 56494	Dest port: 443
0 bytes of data:

IP Packet From: 209.107.217.185 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 56494
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
418 bytes of data:
17 03 03 01 9D 00 00 00 00 00 00 00 07 5C E4 E6 | .............\..
37 E2 99 A7 3D 79 14 0D 84 BD 1C 37 1C 61 2C 1A | 7...=y.....7.a,.
F3 38 A1 C0 2F 92 EE 2E FC 64 C9 1F 6C DD A2 85 | .8../....d..l...
12 25 51 C1 A9 0F FD 64 FB 5D BB DB 96 59 9A 30 | .%Q....d.]...Y.0
9E 33 35 15 CE 47 0D 84 5B 3C 14 89 1D F6 B5 7F | .35..G..[<......
7A DD 85 E4 9B A4 55 47 80 1B 15 AD C2 9F AD EF | z.....UG........
B4 20 9A 63 42 A8 0E DA 4E 67 3F FF 26 CA 89 B4 | . .cB...Ng?.&...
41 C7 BB D9 07 C0 54 EC D1 74 FC 22 CD FA 05 48 | A.....T..t."...H
18 07 40 07 94 F5 3A 80 AA A3 39 8E 85 6E 4C 83 | ..@...:...9..nL.
96 5B DC B1 C1 97 7D 94 D5 87 FD DF B8 70 AC F2 | .[....}......p..
55 6B E6 C5 AD 54 42 E1 F2 0F CB E3 C3 42 D9 1C | Uk...TB......B..
73 8D 8C A0 BE B5 83 C9 78 4E DB 8D 90 72 04 BA | s.......xN...r..
BD 11 E6 0C E5 3B 25 7F DA 7A 7B 22 E8 3C 6E 44 | .....;%..z{".<nD
2B 3F 9E 84 75 DC 5D ED 0E 09 8F 02 9A 87 5B 81 | +?..u.].......[.
7A EB DA B0 69 E9 9D 4A 90 A5 93 D0 64 29 5B 82 | z...i..J....d)[.
88 A8 DF 49 D9 2F 59 2F 9E D1 C1 05 FF 0C AD AB | ...I./Y/........
D8 49 28 59 48 13 18 C9 A2 9F D9 DE F4 16 C8 73 | .I(YH..........s
DC 03 3E 71 CE D1 02 2E D4 C7 F7 64 87 AD 7B 9D | ..>q.......d..{.
05 5C CE 85 73 1E 29 FD 28 66 A7 F6 BC DC B4 B7 | .\..s.).(f......
C3 AE F6 91 A0 E9 4E 2B D1 A6 86 6F BD 00 28 AE | ......N+...o..(.
FE 70 B3 D9 18 79 4C 3A 45 06 39 2D 62 36 27 89 | .p...yL:E.9-b6'.
92 83 B9 31 F5 29 4B 68 42 29 56 4F 99 50 D3 A1 | ...1.)KhB)VO.P..
07 E0 83 20 62 EA FF 8A 88 AF BF D8 2B A5 4E 96 | ... b.......+.N.
9E A6 31 0A AF 8A 2D B1 EE 4A 09 FA F8 95 B6 EB | ..1...-..J......
60 C5 8F 47 FE A4 D4 CB 05 AC 9D 25 12 9F E0 77 | `..G.......%...w
FF 5E 14 25 F8 E0 05 94 CB AB A0 EC 18 47 1C 35 | .^.%.........G.5
66 6A | fj

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 08 AC 6C 64 | ....).........ld
A8 97 CD 7C 75 07 7B 7A 4F 57 E6 31 A4 C0 C9 1A | ...|u.{zOW.1....
BB 3D 38 5F AE 03 17 9F 77 1C DA 6F 4F 08 | .=8_....w..oO.

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 07 29 8A F4 | ....)........)..
5C 85 37 23 54 55 5E E3 1B 06 94 59 EE F9 B6 24 | \.7#TU^....Y...$
02 18 6C B4 9D 1F 50 EF 14 4D 1B 60 23 14 | ..l...P..M.`#.

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
115 bytes of data:
17 03 03 00 6E 00 00 00 00 00 00 00 08 B3 DD BC | ....n...........
90 C0 C6 CD 7A A9 84 C7 3A CC F7 2B 0A 52 E9 CB | ....z...:..+.R..
9B 42 32 7B BB 01 77 C2 C0 64 61 13 7A 0A 86 E5 | .B2{..w..da.z...
A5 31 D9 E7 41 94 F7 C5 09 C7 A0 69 C5 B7 4E E5 | .1..A......i..N.
37 7B 8F 11 47 FE C1 58 3C F9 7C 07 3A EF 24 95 | 7{..G..X<.|.:.$.
5A 97 B7 F2 DD FE 06 DD 4D EF 09 A1 88 69 E0 06 | Z.......M....i..
36 9A EA 2E 45 D5 F1 61 81 D1 00 77 44 99 7F 55 | 6...E..a...wD..U
6E 8F 41 | n.A

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
38 bytes of data:
17 03 03 00 21 00 00 00 00 00 00 00 09 6A DC 3B | ....!........j.;
70 13 32 40 4F BE 98 8C C9 F7 95 D5 39 96 CC 76 | p.2@O.......9..v
E3 ED D8 C1 6E BD | ....n.

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 0A 68 25 6A | ....)........h%j
5D DC 39 D3 E5 54 57 B9 95 8E CC E4 47 0F 7A E2 | ].9..TW.....G.z.
41 2E FF A1 35 E8 BC 3B 8E 35 6D C4 2A 44 | A...5..;.5m.*D

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 09 CF 79 F8 | ....).........y.
E1 8D DF F2 E1 DB 61 5E 60 3A D9 A8 CB 3B 38 FE | ......a^`:...;8.
7F 4B 5B C6 97 54 BF 6A EF C3 3D B7 83 DF | .K[..T.j..=...

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 192.168.1.1 To: 224.0.0.1
Unknown protocol: 2

IP Packet From: 192.168.1.5 To: 224.0.0.22
Unknown protocol: 2

IP Packet From: 192.168.1.5 To: 216.58.219.198
TCP Protocol. Source port: 46248	Dest port: 443
0 bytes of data:

IP Packet From: 216.58.219.198 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 46248
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44209	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44202	Dest port: 443
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44209
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44202
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.19
TCP Protocol. Source port: 57170	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44211	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.19
TCP Protocol. Source port: 57171	Dest port: 443
0 bytes of data:

IP Packet From: 65.124.174.19 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57170
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44211
0 bytes of data:

IP Packet From: 65.124.174.19 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57171
0 bytes of data:

IP Packet From: 192.168.1.5 To: 204.93.33.25
TCP Protocol. Source port: 35238	Dest port: 443
0 bytes of data:

IP Packet From: 204.93.33.25 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 35238
27 bytes of data:
15 03 03 00 16 58 CC 75 34 F2 49 84 97 C7 11 E6 | .....X.u4.I.....
7E 46 C2 1C CE C9 22 78 5D 2E 47 | ~F...."x].G

IP Packet From: 192.168.1.5 To: 204.93.33.25
TCP Protocol. Source port: 35238	Dest port: 443
0 bytes of data:

IP Packet From: 204.93.33.25 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 35238
0 bytes of data:

IP Packet From: 192.168.1.5 To: 204.93.33.25
TCP Protocol. Source port: 35238	Dest port: 443
0 bytes of data:

ARP Packet From: 192.168.1.1 To: 192.168.1.5
REQUEST

ARP Packet From: 192.168.1.5 To: 192.168.1.1
REPLY

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39932	Dest port: 443
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39932
0 bytes of data:

IP Packet From: 192.168.1.5 To: 65.124.174.99
TCP Protocol. Source port: 44210	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39931	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39906	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.155
TCP Protocol. Source port: 39899	Dest port: 443
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39931
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39906
0 bytes of data:

IP Packet From: 65.124.174.99 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 44210
0 bytes of data:

IP Packet From: 209.107.217.155 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 39899
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
418 bytes of data:
17 03 03 01 9D 00 00 00 00 00 00 00 0A EC 68 FF | ..............h.
4F D4 DC 84 36 69 68 23 6F 6F 4F 9B 85 26 BB AC | O...6ih#ooO..&..
3B 32 5E C0 22 9E 91 20 01 BB 20 36 30 70 98 1A | ;2^.".. .. 60p..
1D 8A D9 10 4A B8 E6 79 38 EB 4F DB 51 5E FB 12 | ....J..y8.O.Q^..
8C 83 9C 27 AB 08 0A A5 07 BD F2 92 22 EB 02 F7 | ...'........"...
52 AF BF 86 43 4C EB B7 E3 6F E4 58 CF E8 45 DE | R...CL...o.X..E.
84 65 CD 58 26 D6 0C 7F 91 67 B4 22 08 33 C5 00 | .e.X&....g.".3..
79 E7 EE AC 17 12 A1 BE 0A EB D6 B7 FE FC E7 4F | y..............O
29 C7 1A 5B B2 87 22 AE F5 22 07 45 0B 3D 57 F4 | )..[.."..".E.=W.
C3 F0 70 17 FA A2 2C 7D 52 83 6B F5 BC A3 B2 9F | ..p...,}R.k.....
35 5E B9 9A 97 F7 71 AF B0 7D B9 F1 AD 57 37 AF | 5^....q..}...W7.
D7 99 D4 E1 19 C6 04 74 8F E7 2E 69 63 9A E3 76 | .......t...ic..v
FA 59 D4 B0 6A F1 B5 D9 C7 64 4D D9 06 4C 97 A1 | .Y..j....dM..L..
EC 41 65 6D 30 26 82 5B 2C C5 F0 13 1F EE 2A 57 | .Aem0&.[,.....*W
CE CA 4E DD 6A 3D F8 DA 17 0C E1 4F 34 91 13 36 | ..N.j=.....O4..6
67 5E 7D D3 9D 72 CB F8 49 7F 12 90 B8 9F E5 AD | g^}..r..I.......
BB 52 01 B9 C5 4D 7F D6 36 3A B2 4E DF 4F 38 EC | .R...M..6:.N.O8.
76 2B CD B5 FB 23 0E E6 62 DF C4 B2 21 19 E5 4B | v+...#..b...!..K
79 CD 57 6F 10 67 33 A0 E8 BC CE AC 82 A9 F4 BC | y.Wo.g3.........
B6 4D 66 61 FD 7B 43 7C 32 5C 14 F0 9D 24 B9 EB | .Mfa.{C|2\...$..
D1 74 2A 30 A4 61 EF 79 D2 A1 53 61 0C EE F2 68 | .t*0.a.y..Sa...h
78 33 48 11 48 54 5A 70 65 99 01 F5 29 5E 0E C0 | x3H.HTZpe...)^..
2D 00 CF D7 B0 77 52 F6 5D C9 4A FD F6 5B 36 74 | -....wR.].J..[6t
7F 41 3E D1 28 88 AA 7B C7 6D 14 2F 2C F9 11 3F | .A>.(..{.m./,..?
C3 04 67 A0 69 DB F6 FD A4 D2 49 88 D6 04 09 88 | ..g.i.....I.....
65 28 D7 42 FD 78 32 61 EC FF 48 3A 6E 48 D9 10 | e(.B.x2a..H:nH..
1D 94 | ..

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 0B B6 81 EC | ....)...........
69 9D 50 D4 56 B6 A0 05 D4 8F CC 50 26 6B 34 19 | i.P.V......P&k4.
FB 54 7C 93 55 AD B6 1A 29 D6 5A C2 97 2F | .T|.U...).Z../

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 0B A0 27 0B | ....).........'.
01 91 A4 FC 9E B2 A7 FA 72 28 E9 7B 94 67 C2 52 | ........r(.{.g.R
82 6D B4 32 A8 97 19 C3 33 96 02 2F 2F 43 | .m.2....3..//C

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
74 bytes of data:
17 03 03 00 45 00 00 00 00 00 00 00 0C 95 8E C1 | ....E...........
46 3D 36 E8 A6 E4 20 96 67 50 B0 BE 49 78 A9 8B | F=6... .gP..Ix..
1F 75 3A FB 34 72 A5 1B 76 3E 67 6B 1E 97 DF 39 | .u:.4r..v>gk...9
0D F1 12 34 B6 8F 79 30 AD 91 87 1C 6E 86 97 02 | ...4..y0....n...
8D E5 23 5E 16 58 8C 13 36 85 | ..#^.X..6.

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
38 bytes of data:
17 03 03 00 21 00 00 00 00 00 00 00 0D F5 83 64 | ....!..........d
A8 22 78 1B 85 63 A3 3C 5E FE 38 27 4C 8D C5 2E | ."x..c.<^.8'L...
79 E1 F7 50 84 E2 | y..P..

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 0E 27 F3 D5 | ....)........'..
80 B7 02 C7 26 1F 0D 68 78 C7 92 74 85 96 8E 2C | ....&..hx..t...,
81 9C 5C 1E 47 32 EA F7 9F 6F D7 57 4B C4 | ..\.G2...o.WK.

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 216.58.219.206
TCP Protocol. Source port: 37244	Dest port: 443
46 bytes of data:
17 03 03 00 29 00 00 00 00 00 00 00 0C 9A 53 1B | ....).........S.
4F 62 71 54 27 B6 1A EA D7 3B D7 8E 43 4C B3 FF | ObqT'....;..CL..
F2 49 4D B8 74 0A 7C D3 41 7C 9F 86 45 16 | .IM.t.|.A|..E.

IP Packet From: 216.58.219.206 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 37244
0 bytes of data:

IP Packet From: 192.168.1.5 To: 209.107.217.185
TCP Protocol. Source port: 56494	Dest port: 443
0 bytes of data:

IP Packet From: 209.107.217.185 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 56494
0 bytes of data:

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 56962	Dest port: 443
69 bytes of data:
15 03 03 00 40 EE 10 C5 FE 6C 83 1D 5A 63 1A 99 | ....@....l..Zc..
AE 7B D4 32 A2 41 F0 DF 8C 71 1D 29 AC 83 0F 20 | .{.2.A...q.)... 
F8 F5 D0 14 0B C0 7F 82 1F 0A 2A 87 FC 8D FE 3C | ..........*....<
6A C9 59 34 4D 50 2F C8 20 7E B5 42 34 23 47 94 | j.Y4MP/. ~.B4#G.
B0 2B CE CF C2 | .+...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 56962	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 192.168.1.1
UDP Protocol. Source port: 37702	Dest port: 53
42 bytes of data:
AC 87 01 00 00 01 00 00 00 00 00 00 0D 70 72 6F | .............pro
64 75 63 74 73 65 61 72 63 68 06 75 62 75 6E 74 | ductsearch.ubunt
75 03 63 6F 6D 00 00 01 00 01 | u.com.....

IP Packet From: 192.168.1.5 To: 192.168.1.1
UDP Protocol. Source port: 13064	Dest port: 53
42 bytes of data:
DC 78 01 00 00 01 00 00 00 00 00 00 0D 70 72 6F | .x...........pro
64 75 63 74 73 65 61 72 63 68 06 75 62 75 6E 74 | ductsearch.ubunt
75 03 63 6F 6D 00 00 1C 00 01 | u.com.....

IP Packet From: 192.168.1.1 To: 192.168.1.5
UDP Protocol. Source port: 53	Dest port: 37702
74 bytes of data:
AC 87 81 80 00 01 00 02 00 00 00 00 0D 70 72 6F | .............pro
64 75 63 74 73 65 61 72 63 68 06 75 62 75 6E 74 | ductsearch.ubunt
75 03 63 6F 6D 00 00 01 00 01 C0 0C 00 01 00 01 | u.com...........
00 00 00 4D 00 04 5B BD 5C 0A C0 0C 00 01 00 01 | ...M..[.\.......
00 00 00 4D 00 04 5B BD 5C 0B | ...M..[.\.

IP Packet From: 192.168.1.1 To: 192.168.1.5
UDP Protocol. Source port: 53	Dest port: 13064
103 bytes of data:
DC 78 81 80 00 01 00 00 00 01 00 00 0D 70 72 6F | .x...........pro
64 75 63 74 73 65 61 72 63 68 06 75 62 75 6E 74 | ductsearch.ubunt
75 03 63 6F 6D 00 00 1C 00 01 C0 1A 00 06 00 01 | u.com...........
00 00 07 8D 00 31 03 6E 73 31 09 63 61 6E 6F 6E | .....1.ns1.canon
69 63 61 6C C0 21 0A 68 6F 73 74 6D 61 73 74 65 | ical.!.hostmaste
72 C0 3A 78 1A F7 0D 00 00 2A 30 00 00 0E 10 00 | r.:x.....*0.....
09 3A 80 00 00 0E 10 | .:.....

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
0 bytes of data:

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
182 bytes of data:
16 03 00 00 B1 01 00 00 AD 03 03 55 23 50 66 59 | ...........U#PfY
44 C0 5F 7C 09 25 AA 29 76 3B 5B 03 43 31 18 A3 | D._|.%.)v;[.C1..
BF F6 C8 20 5C EF 6A 91 7C 2E 7A 20 82 F9 68 39 | ... \.j.|.z ..h9
98 D0 FE C5 07 61 FA EB 53 45 01 5A C3 4F 83 B4 | .....a..SE.Z.O..
2D E1 A9 83 5F B8 8B 8E 6C B9 13 5F 00 30 00 33 | -..._...l.._.0.3
00 67 00 45 00 39 00 6B 00 88 00 16 00 32 00 40 | .g.E.9.k.....2.@
00 44 00 38 00 6A 00 87 00 13 00 66 00 2F 00 3C | .D.8.j.....f./.<
00 41 00 35 00 3D 00 84 00 0A 00 05 00 04 01 00 | .A.5.=..........
00 34 00 00 00 1D 00 1B 00 00 18 70 72 6F 64 75 | .4.........produ
63 74 73 65 61 72 63 68 2E 75 62 75 6E 74 75 2E | ctsearch.ubuntu.
63 6F 6D FF 01 00 01 00 00 0D 00 0A 00 08 04 02 | com.............
04 01 02 01 02 02 | ......

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
15 03 03 00 02 01 70 16 03 03 00 55 02 00 00 51 | ......p....U...Q
03 03 55 23 50 66 DA 4F 04 FD 41 36 D8 7A 18 0F | ..U#Pf.O..A6.z..
F1 12 35 8B E9 07 78 38 C8 A5 33 BF 3F 7E F2 5B | ..5...x8..3.?~.[
D3 7C 20 A4 84 64 5D 0F 18 4E FD A3 7E 8C 01 6C | .| ..d]..N..~..l
2F 3D 9D E5 C6 F8 1D 4E C1 07 5A A4 9D 89 7F 69 | /=.....N..Z....i
2A AA 2D 00 67 00 00 09 00 00 00 00 FF 01 00 01 | *.-.g...........
00 16 03 03 0E B0 0B 00 0E AC 00 0E A9 00 05 4B | ...............K
30 82 05 47 30 82 04 2F A0 03 02 01 02 02 07 04 | 0..G0../........
7F 11 C2 7D C6 70 30 0D 06 09 2A 86 48 86 F7 0D | ...}.p0...*.H...
01 01 0B 05 00 30 81 B4 31 0B 30 09 06 03 55 04 | .....0..1.0...U.
06 13 02 55 53 31 10 30 0E 06 03 55 04 08 13 07 | ...US1.0...U....
41 72 69 7A 6F 6E 61 31 13 30 11 06 03 55 04 07 | Arizona1.0...U..
13 0A 53 63 6F 74 74 73 64 61 6C 65 31 1A 30 18 | ..Scottsdale1.0.
06 03 55 04 0A 13 11 47 6F 44 61 64 64 79 2E 63 | ..U....GoDaddy.c
6F 6D 2C 20 49 6E 63 2E 31 2D 30 2B 06 03 55 04 | om, Inc.1-0+..U.
0B 13 24 68 74 74 70 3A 2F 2F 63 65 72 74 73 2E | ..$http://certs.
67 6F 64 61 64 64 79 2E 63 6F 6D 2F 72 65 70 6F | godaddy.com/repo
73 69 74 6F 72 79 2F 31 33 30 31 06 03 55 04 03 | sitory/1301..U..
13 2A 47 6F 20 44 61 64 64 79 20 53 65 63 75 72 | .*Go Daddy Secur
65 20 43 65 72 74 69 66 69 63 61 74 65 20 41 75 | e Certificate Au
74 68 6F 72 69 74 79 20 2D 20 47 32 30 1E 17 0D | thority - G20...
31 34 31 30 30 39 30 35 33 34 32 37 5A 17 0D 31 | 141009053427Z..1
35 31 30 31 36 31 31 34 39 30 33 5A 30 46 31 21 | 51016114903Z0F1!
30 1F 06 03 55 04 0B 13 18 44 6F 6D 61 69 6E 20 | 0...U....Domain 
43 6F 6E 74 72 6F 6C 20 56 61 6C 69 64 61 74 65 | Control Validate
64 31 21 30 1F 06 03 55 04 03 13 18 70 72 6F 64 | d1!0...U....prod
75 63 74 73 65 61 72 63 68 2E 75 62 75 6E 74 75 | uctsearch.ubuntu
2E 63 6F 6D 30 82 01 22 30 0D 06 09 2A 86 48 86 | .com0.."0...*.H.
F7 0D 01 01 01 05 00 03 82 01 0F 00 30 82 01 0A | ............0...
02 82 01 01 00 E3 CB 63 99 CE 59 40 2E CF F7 D6 | .......c..Y@....
F6 6C ED 35 AA C1 B3 D2 E9 A7 4C 84 06 94 F2 5D | .l.5......L....]
C2 59 4E E5 62 F3 24 78 54 AF ED AC 12 15 71 FD | .YN.b.$xT.....q.
71 1F 46 0B CC 34 EA 3A FC 5E A5 E3 B2 FF 3B B0 | q.F..4.:.^....;.
86 8A 79 20 C4 D0 DC 80 71 9D 22 D9 F6 AE 69 61 | ..y ....q."...ia
A1 18 A2 EC 5B E7 15 28 F3 1C 67 D0 23 AB C4 2B | ....[..(..g.#..+
4A 15 B3 5D 89 4D 23 04 55 C6 16 B4 96 E1 B4 38 | J..].M#.U......8
56 CF 67 37 01 59 71 5C 7E 33 0F F4 47 E0 77 5C | V.g7.Yq\~3..G.w\
7B 0C 07 D7 6D 65 1C 65 FA B6 82 4D CD 29 C9 B3 | {...me.e...M.)..
53 FF 94 F9 23 04 0D 0F 97 8F DF 65 8A BD 89 CE | S...#......e....
6A BB 31 8B BF 30 0D 7E BF 0B 09 E5 89 47 28 91 | j.1..0.~.....G(.
A7 FD F6 B5 06 A5 22 7A FD 6F DF 16 A0 A1 69 57 | ......"z.o....iW
FF 29 42 CF 59 6F E0 7A 92 1A 9F 0D EB 85 E3 8D | .)B.Yo.z........
63 47 FD 23 82 BE 34 AF 34 FD 33 A6 57 03 A3 5E | cG.#..4.4.3.W..^
16 B9 D7 DE DB 4E 06 4F 72 17 6F A8 2D 25 8C 92 | .....N.Or.o.-%..
84 F9 99 98 24 72 A1 28 18 F5 58 C4 2A B8 DA 50 | ....$r.(..X.*..P
0E 4F D0 D1 CB 02 03 01 00 01 A3 82 01 C9 30 82 | .O............0.
01 C5 30 0C 06 03 55 1D 13 01 01 FF 04 02 30 00 | ..0...U.......0.
30 1D 06 03 55 1D 25 04 16 30 14 06 08 2B 06 01 | 0...U.%..0...+..
05 05 07 03 01 06 08 2B 06 01 05 05 07 03 02 30 | .......+.......0
0E 06 03 55 1D 0F 01 01 FF 04 04 03 02 05 A0 30 | ...U...........0
36 06 03 55 1D 1F 04 2F 30 2D 30 2B A0 29 A0 27 | 6..U.../0-0+.).'
86 25 68 74 74 70 3A 2F 2F 63 72 6C 2E 67 6F 64 | .%http://crl.god
61 64 64 79 2E 63 6F 6D 2F 67 64 69 67 32 73 31 | addy.com/gdig2s1
2D 38 37 2E 63 72 6C 30 53 06 03 55 1D 20 04 4C | -87.crl0S..U. .L
30 4A 30 48 06 0B 60 86 48 01 86 FD 6D 01 07 17 | 0J0H..`.H...m...
01 30 39 30 37 06 08 2B 06 01 05 05 07 02 01 16 | .0907..+........
2B 68 74 74 70 3A 2F 2F 63 65 72 74 69 66 69 63 | +http://certific
61 74 65 73 2E 67 6F 64 61 64 64 79 2E 63 6F 6D | ates.godaddy.com
2F 72 65 70 6F 73 69 74 6F 72 79 2F 30 76 06 08 | /repository/0v..
2B 06 01 05 05 07 01 01 04 6A 30 68 30 24 06 08 | +........j0h0$..
2B 06 01 05 05 07 30 01 86 18 68 74 74 70 3A 2F | +.....0...http:/
2F 6F 63 73 70 2E 67 6F 64 61 64 64 79 2E 63 6F | /ocsp.godaddy.co
6D 2F 30 40 06 08 2B 06 01 05 05 07 30 02 86 34 | m/0@..+.....0..4
68 74 74 70 3A 2F 2F 63 65 72 74 69 66 69 63 61 | http://certifica
74 65 73 2E 67 6F 64 61 64 64 79 2E 63 6F 6D 2F | tes.godaddy.com/
72 65 70 6F 73 69 74 6F 72 79 2F 67 64 69 67 32 | repository/gdig2
2E 63 72 74 30 1F 06 03 55 1D 23 04 18 30 16 80 | .crt0...U.#..0..
14 40 C2 BD 27 8E CC 34 83 30 A2 33 D7 FB 6C B3 | .@..'..4.0.3..l.
F0 B4 2C 80 CE 30 41 06 03 55 1D 11 04 3A 30 38 | ..,..0A..U...:08
82 18 70 72 6F 64 75 63 74 73 65 61 72 63 68 2E | ..productsearch.
75 62 75 6E 74 75 2E 63 6F 6D 82 1C 77 77 77 2E | ubuntu.com..www.
70 72 6F 64 75 63 74 73 65 61 72 63 68 2E 75 62 | productsearch.ub
75 6E 74 75 2E 63 6F 6D 30 1D 06 03 55 1D 0E 04 | untu.com0...U...
16 04 14 CC CD 17 7F A5 C4 A9 88 35 14 4B 8D A4 | ...........5.K..
E1 00 82 15 39 25 EE 30 0D 06 09 2A 86 48 86 F7 | ....9%.0...*.H..
0D 01 01 0B 05 00 03 82 01 01 00 99 CD 26 C3 F6 | .............&..
47 6E 1C 1D BB BA 00 78 3E 13 71 98 60 54 7B E3 | Gn.....x>.q.`T{.
24 19 35 21 4B FA ED 45 E0 1F 4A A6 3C D1 05 DB | $.5!K..E..J.<...
5A 74 4A 76 BC A8 2A D2 27 54 4D E8 5E 7C 8C 4E | ZtJv..*.'TM.^|.N
21 24 E1 3C 82 7C 5F 72 44 5D 67 8E 72 6A 2B 35 | !$.<.|_rD]g.rj+5
66 F8 FB 8C B9 61 C0 0C A6 E7 F6 62 D9 4A 96 D7 | f....a.....b.J..
66 FA 99 1D B8 27 17 B2 90 39 A4 DA E3 AA 45 71 | f....'...9....Eq
DF 10 65 24 5A 1A CD 15 BF D1 42 70 73 EE 6E A1 | ..e$Z.....Bps.n.
DE 03 97 57 22 52 4A 3A 61 34 BD 1C 57 E5 E0 67 | ...W"RJ:a4..W..g
F9 90 F5 5D 5D 26 B4 C3 D1 E2 34 CC 58 D1 60 95 | ...]]&....4.X.`.
7A 82 0B 40 04 54 FE 7D 8B 75 38 57 B5 8F E5 A5 | z..@.T.}.u8W....
70 04 46 E6 36 29 3E D0 3F 94 B6 7A 5D 55 01 76 | p.F.6)>.?..z]U.v
EF 95 58 03 FA 85 C0 13 AD B2 7C CC B6 69 41 E0 | ..X.......|..iA.
E0 A1 D0 50 E1 32 D7 C5 9D A3 6B 6B 63 49 DA 01 | ...P.2....kkcI..
0B 28 55 F8 F7 86 1F DC 39 84 9E 2B 41 9C 43 5C | .(U.....9..+A.C\

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
3F 27 74 6C D9 12 4B AF BF 73 F6 84 3C 9E 2C A9 | ?'tl..K..s..<.,.
6F 0A 20 01 84 66 9C FC 92 B2 54 00 04 D4 30 82 | o. ..f....T...0.
04 D0 30 82 03 B8 A0 03 02 01 02 02 01 07 30 0D | ..0...........0.
06 09 2A 86 48 86 F7 0D 01 01 0B 05 00 30 81 83 | ..*.H........0..
31 0B 30 09 06 03 55 04 06 13 02 55 53 31 10 30 | 1.0...U....US1.0
0E 06 03 55 04 08 13 07 41 72 69 7A 6F 6E 61 31 | ...U....Arizona1
13 30 11 06 03 55 04 07 13 0A 53 63 6F 74 74 73 | .0...U....Scotts
64 61 6C 65 31 1A 30 18 06 03 55 04 0A 13 11 47 | dale1.0...U....G
6F 44 61 64 64 79 2E 63 6F 6D 2C 20 49 6E 63 2E | oDaddy.com, Inc.
31 31 30 2F 06 03 55 04 03 13 28 47 6F 20 44 61 | 110/..U...(Go Da
64 64 79 20 52 6F 6F 74 20 43 65 72 74 69 66 69 | ddy Root Certifi
63 61 74 65 20 41 75 74 68 6F 72 69 74 79 20 2D | cate Authority -
20 47 32 30 1E 17 0D 31 31 30 35 30 33 30 37 30 |  G20...110503070
30 30 30 5A 17 0D 33 31 30 35 30 33 30 37 30 30 | 000Z..3105030700
30 30 5A 30 81 B4 31 0B 30 09 06 03 55 04 06 13 | 00Z0..1.0...U...
02 55 53 31 10 30 0E 06 03 55 04 08 13 07 41 72 | .US1.0...U....Ar
69 7A 6F 6E 61 31 13 30 11 06 03 55 04 07 13 0A | izona1.0...U....
53 63 6F 74 74 73 64 61 6C 65 31 1A 30 18 06 03 | Scottsdale1.0...
55 04 0A 13 11 47 6F 44 61 64 64 79 2E 63 6F 6D | U....GoDaddy.com
2C 20 49 6E 63 2E 31 2D 30 2B 06 03 55 04 0B 13 | , Inc.1-0+..U...
24 68 74 74 70 3A 2F 2F 63 65 72 74 73 2E 67 6F | $http://certs.go
64 61 64 64 79 2E 63 6F 6D 2F 72 65 70 6F 73 69 | daddy.com/reposi
74 6F 72 79 2F 31 33 30 31 06 03 55 04 03 13 2A | tory/1301..U...*
47 6F 20 44 61 64 64 79 20 53 65 63 75 72 65 20 | Go Daddy Secure 
43 65 72 74 69 66 69 63 61 74 65 20 41 75 74 68 | Certificate Auth
6F 72 69 74 79 20 2D 20 47 32 30 82 01 22 30 0D | ority - G20.."0.
06 09 2A 86 48 86 F7 0D 01 01 01 05 00 03 82 01 | ..*.H...........
0F 00 30 82 01 0A 02 82 01 01 00 B9 E0 CB 10 D4 | ..0.............
AF 76 BD D4 93 62 EB 30 64 B8 81 08 6C C3 04 D9 | .v...b.0d...l...
62 17 8E 2F FF 3E 65 CF 8F CE 62 E6 3C 52 1C DA | b../.>e...b.<R..
16 45 4B 55 AB 78 6B 63 83 62 90 CE 0F 69 6C 99 | .EKU.xkc.b...il.
C8 1A 14 8B 4C CC 45 33 EA 88 DC 9E A3 AF 2B FE | ....L.E3......+.
80 61 9D 79 57 C4 CF 2E F4 3F 30 3C 5D 47 FC 9A | .a.yW....?0<]G..
16 BC C3 37 96 41 51 8E 11 4B 54 F8 28 BE D0 8C | ...7.AQ..KT.(...
BE F0 30 38 1E F3 B0 26 F8 66 47 63 6D DE 71 26 | ..08...&.fGcm.q&
47 8F 38 47 53 D1 46 1D B4 E3 DC 00 EA 45 AC BD | G.8GS.F......E..
BC 71 D9 AA 6F 00 DB DB CD 30 3A 79 4F 5F 4C 47 | .q..o....0:yO_LG
F8 1D EF 5B C2 C4 9D 60 3B B1 B2 43 91 D8 A4 33 | ...[...`;..C...3
4E EA B3 D6 27 4F AD 25 8A A5 C6 F4 D5 D0 A6 AE | N...'O.%........
74 05 64 57 88 B5 44 55 D4 2D 2A 3A 3E F8 B8 BD | t.dW..DU.-*:>...
E9 32 0A 02 94 64 C4 16 3A 50 F1 4A AE E7 79 33 | .2...d..:P.J..y3
AF 0C 20 07 7F E8 DF 04 39 C2 69 02 6C 63 52 FA | .. .....9.i.lcR.
77 C1 1B C8 74 87 C8 B9 93 18 50 54 35 4B 69 4E | w...t.....PT5KiN
BC 3B D3 49 2E 1F DC C1 D2 52 FB 02 03 01 00 01 | .;.I.....R......
A3 82 01 1A 30 82 01 16 30 0F 06 03 55 1D 13 01 | ....0...0...U...
01 FF 04 05 30 03 01 01 FF 30 0E 06 03 55 1D 0F | ....0....0...U..
01 01 FF 04 04 03 02 01 06 30 1D 06 03 55 1D 0E | .........0...U..
04 16 04 14 40 C2 BD 27 8E CC 34 83 30 A2 33 D7 | ....@..'..4.0.3.
FB 6C B3 F0 B4 2C 80 CE 30 1F 06 03 55 1D 23 04 | .l...,..0...U.#.
18 30 16 80 14 3A 9A 85 07 10 67 28 B6 EF F6 BD | .0...:....g(....
05 41 6E 20 C1 94 DA 0F DE 30 34 06 08 2B 06 01 | .An .....04..+..
05 05 07 01 01 04 28 30 26 30 24 06 08 2B 06 01 | ......(0&0$..+..
05 05 07 30 01 86 18 68 74 74 70 3A 2F 2F 6F 63 | ...0...http://oc
73 70 2E 67 6F 64 61 64 64 79 2E 63 6F 6D 2F 30 | sp.godaddy.com/0
35 06 03 55 1D 1F 04 2E 30 2C 30 2A A0 28 A0 26 | 5..U....0,0*.(.&
86 24 68 74 74 70 3A 2F 2F 63 72 6C 2E 67 6F 64 | .$http://crl.god
61 64 64 79 2E 63 6F 6D 2F 67 64 72 6F 6F 74 2D | addy.com/gdroot-
67 32 2E 63 72 6C 30 46 06 03 55 1D 20 04 3F 30 | g2.crl0F..U. .?0
3D 30 3B 06 04 55 1D 20 00 30 33 30 31 06 08 2B | =0;..U. .0301..+
06 01 05 05 07 02 01 16 25 68 74 74 70 73 3A 2F | ........%https:/
2F 63 65 72 74 73 2E 67 6F 64 61 64 64 79 2E 63 | /certs.godaddy.c
6F 6D 2F 72 65 70 6F 73 69 74 6F 72 79 2F 30 0D | om/repository/0.
06 09 2A 86 48 86 F7 0D 01 01 0B 05 00 03 82 01 | ..*.H...........
01 00 08 7E 6C 93 10 C8 38 B8 96 A9 90 4B FF A1 | ...~l...8....K..
5F 4F 04 EF 6C 3E 9C 88 06 C9 50 8F A6 73 F7 57 | _O..l>....P..s.W
31 1B BE BC E4 2F DB F8 BA D3 5B E0 B4 E7 E6 79 | 1..../....[....y
62 0E 0C A2 D7 6A 63 73 31 B5 F5 A8 48 A4 3B 08 | b....jcs1...H.;.
2D A2 5D 90 D7 B4 7C 25 4F 11 56 30 C4 B6 44 9D | -.]...|%O.V0..D.
7B 2C 9D E5 5E E6 EF 0C 61 AA BF E4 2A 1B EE 84 | {,..^...a...*...
9E B8 83 7D C1 43 CE 44 A7 13 70 0D 91 1F F4 C8 | ...}.C.D..p.....
13 AD 83 60 D9 D8 72 A8 73 24 1E B5 AC 22 0E CA | ...`..r.s$..."..
17 89 62 58 44 1B AB 89 25 01 00 0F CD C4 1B 62 | ..bXD...%......b
DB 51 B4 D3 0F 51 2A 9B F4 BC 73 FC 76 CE 36 A4 | .Q...Q*...s.v.6.
CD D9 D8 2C EA AE 9B F5 2A B2 90 D1 4D 75 18 8A | ...,....*...Mu..
3F 8A 41 90 23 7D 5B 4B FE A4 03 58 9B 46 B2 C3 | ?.A.#}[K...X.F..
60 60 83 F8 7D 50 41 CE C2 A1 90 C3 BB EF 02 2F | ``..}PA......../
D2 15 54 EE 44 15 D9 0A AE A7 8A 33 ED B1 2D 76 | ..T.D......3..-v
36 26 DC 04 EB 9F F7 61 1F 15 DC 87 6F EE 46 96 | 6&.....a....o.F.
28 AD A1 26 7D 0A 09 A7 2E 04 A3 8D BC F8 BC 04 | (..&}...........
30 01 00 04 81 30 82 04 7D 30 82 03 65 A0 03 02 | 0....0..}0..e...
01 02 02 03 1B E7 15 30 0D 06 09 2A 86 48 86 F7 | .......0...*.H..
0D 01 01 0B 05 00 30 63 31 0B 30 09 06 03 55 04 | ......0c1.0...U.
06 13 02 55 53 31 21 30 1F 06 03 55 04 0A 13 18 | ...US1!0...U....
54 68 65 20 47 6F 20 44 61 64 64 79 20 47 72 6F | The Go Daddy Gro
75 70 2C 20 49 6E 63 2E 31 31 30 2F 06 03 55 04 | up, Inc.110/..U.
0B 13 28 47 6F 20 44 61 64 64 79 20 43 6C 61 73 | ..(Go Daddy Clas
73 20 32 20 43 65 72 74 69 66 69 63 61 74 69 6F | s 2 Certificatio
6E 20 41 75 74 68 6F 72 69 74 79 30 1E 17 0D 31 | n Authority0...1
34 30 31 30 31 30 37 30 30 30 30 5A 17 0D 33 31 | 40101070000Z..31
30 35 33 30 30 37 30 30 30 30 5A 30 81 83 31 0B | 0530070000Z0..1.

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
30 09 06 03 55 04 06 13 02 55 53 31 10 30 0E 06 | 0...U....US1.0..
03 55 04 08 13 07 41 72 69 7A 6F 6E 61 31 13 30 | .U....Arizona1.0
11 06 03 55 04 07 13 0A 53 63 6F 74 74 73 64 61 | ...U....Scottsda
6C 65 31 1A 30 18 06 03 55 04 0A 13 11 47 6F 44 | le1.0...U....GoD
61 64 64 79 2E 63 6F 6D 2C 20 49 6E 63 2E 31 31 | addy.com, Inc.11
30 2F 06 03 55 04 03 13 28 47 6F 20 44 61 64 64 | 0/..U...(Go Dadd
79 20 52 6F 6F 74 20 43 65 72 74 69 66 69 63 61 | y Root Certifica
74 65 20 41 75 74 68 6F 72 69 74 79 20 2D 20 47 | te Authority - G
32 30 82 01 22 30 0D 06 09 2A 86 48 86 F7 0D 01 | 20.."0...*.H....
01 01 05 00 03 82 01 0F 00 30 82 01 0A 02 82 01 | .........0......
01 00 BF 71 62 08 F1 FA 59 34 F7 1B C9 18 A3 F7 | ...qb...Y4......
80 49 58 E9 22 83 13 A6 C5 20 43 01 3B 84 F1 E6 | .IX.".... C.;...
85 49 9F 27 EA F6 84 1B 4E A0 B4 DB 70 98 C7 32 | .I.'....N...p..2
01 B1 05 3E 07 4E EE F4 FA 4F 2F 59 30 22 E7 AB | ...>.N...O/Y0"..
19 56 6B E2 80 07 FC F3 16 75 80 39 51 7B E5 F9 | .Vk......u.9Q{..
35 B6 74 4E A9 8D 82 13 E4 B6 3F A9 03 83 FA A2 | 5.tN......?.....
BE 8A 15 6A 7F DE 0B C3 B6 19 14 05 CA EA C3 A8 | ...j............
04 94 3B 46 7C 32 0D F3 00 66 22 C8 8D 69 6D 36 | ..;F|2...f"..im6
8C 11 18 B7 D3 B2 1C 60 B4 38 FA 02 8C CE D3 DD | .......`.8......
46 07 DE 0A 3E EB 5D 7C C8 7C FB B0 2B 53 A4 92 | F...>.]|.|..+S..
62 69 51 25 05 61 1A 44 81 8C 2C A9 43 96 23 DF | biQ%.a.D..,.C.#.
AC 3A 81 9A 0E 29 C5 1C A9 E9 5D 1E B6 9E 9E 30 | .:...)....]....0
0A 39 CE F1 88 80 FB 4B 5D CC 32 EC 85 62 43 25 | .9.....K].2..bC%
34 02 56 27 01 91 B4 3B 70 2A 3F 6E B1 E8 9C 88 | 4.V'...;p*?n....
01 7D 9F D4 F9 DB 53 6D 60 9D BF 2C E7 58 AB B8 | .}....Sm`..,.X..
5F 46 FC CE C4 1B 03 3C 09 EB 49 31 5C 69 46 B3 | _F.....<..I1\iF.
E0 47 02 03 01 00 01 A3 82 01 17 30 82 01 13 30 | .G.........0...0
0F 06 03 55 1D 13 01 01 FF 04 05 30 03 01 01 FF | ...U.......0....
30 0E 06 03 55 1D 0F 01 01 FF 04 04 03 02 01 06 | 0...U...........
30 1D 06 03 55 1D 0E 04 16 04 14 3A 9A 85 07 10 | 0...U......:....
67 28 B6 EF F6 BD 05 41 6E 20 C1 94 DA 0F DE 30 | g(.....An .....0
1F 06 03 55 1D 23 04 18 30 16 80 14 D2 C4 B0 D2 | ...U.#..0.......
91 D4 4C 11 71 B3 61 CB 3D A1 FE DD A8 6A D4 E3 | ..L.q.a.=....j..
30 34 06 08 2B 06 01 05 05 07 01 01 04 28 30 26 | 04..+........(0&
30 24 06 08 2B 06 01 05 05 07 30 01 86 18 68 74 | 0$..+.....0...ht
74 70 3A 2F 2F 6F 63 73 70 2E 67 6F 64 61 64 64 | tp://ocsp.godadd
79 2E 63 6F 6D 2F 30 32 06 03 55 1D 1F 04 2B 30 | y.com/02..U...+0
29 30 27 A0 25 A0 23 86 21 68 74 74 70 3A 2F 2F | )0'.%.#.!http://
63 72 6C 2E 67 6F 64 61 64 64 79 2E 63 6F 6D 2F | crl.godaddy.com/
67 64 72 6F 6F 74 2E 63 72 6C 30 46 06 03 55 1D | gdroot.crl0F..U.
20 04 3F 30 3D 30 3B 06 04 55 1D 20 00 30 33 30 |  .?0=0;..U. .030
31 06 08 2B 06 01 05 05 07 02 01 16 25 68 74 74 | 1..+........%htt
70 73 3A 2F 2F 63 65 72 74 73 2E 67 6F 64 61 64 | ps://certs.godad
64 79 2E 63 6F 6D 2F 72 65 70 6F 73 69 74 6F 72 | dy.com/repositor
79 2F 30 0D 06 09 2A 86 48 86 F7 0D 01 01 0B 05 | y/0...*.H.......
00 03 82 01 01 00 59 0B 53 BD 92 86 11 A7 24 7B | ......Y.S.....${
ED 5B 31 CF 1D 1F 6C 70 C5 B8 6E BE 4E BB F6 BE | .[1...lp..n.N...
97 50 E1 30 7F BA 28 5C 62 94 C2 E3 7E 33 F7 FB | .P.0..(\b...~3..
42 76 85 DB 95 1C 8C 22 58 75 09 0C 88 65 67 39 | Bv....."Xu...eg9
0A 16 09 C5 A0 38 97 A4 C5 23 93 3F B4 18 A6 01 | .....8...#.?....
06 44 91 E3 A7 69 27 B4 5A 25 7F 3A B7 32 CD DD | .D...i'.Z%.:.2..
84 FF 2A 38 29 33 A4 DD 67 B2 85 FE A1 88 20 1C | ..*8)3..g..... .
50 89 C8 DC 2A F6 42 03 37 4C E6 88 DF D5 AF 24 | P...*.B.7L.....$
F2 B1 C3 DF CC B5 EC E0 99 5E B7 49 54 20 3C 94 | .........^.IT <.
18 0C C7 1C 52 18 49 A4 6D E1 B3 58 0B C9 D8 EC | ....R.I.m..X....
D9 AE 1C 32 8E 28 70 0D E2 FE A6 17 9E 84 0F BD | ...2.(p.........
57 70 B3 5A E9 1F A0 86 53 BB EF 7C FF 69 0B E0 | Wp.Z....S..|.i..
48 C3 B7 93 0B C8 0A 54 C4 AC 5D 14 67 37 6C CA | H......T..].g7l.
A5 2F 31 08 37 AA 6E 6F 8C BC 9B E2 57 5D 24 81 | ./1.7.no....W]$.
AF 97 97 9C 84 AD 6C AC 37 4C 66 F3 61 91 11 20 | ......l.7Lf.a.. 
E4 BE 30 9F 7A A4 29 09 B0 E1 34 5F 64 77 18 40 | ..0.z.)...4_dw.@
51 DF 8C 30 A6 AF 16 03 03 02 0F 0C 00 02 0B 00 | Q..0............
80 D6 7D E4 40 CB BB DC 19 36 D6 93 D3 4A FD 0A | ..}.@....6...J..
D5 0C 84 D2 39 A4 5F 52 0B B8 81 74 CB 98 BC E9 | ....9._R...t....
51 84 9F 91 2E 63 9C 72 FB 13 B4 B4 D7 17 7E 16 | Q....c.r......~.
D5 5A C1 79 BA 42 0B 2A 29 FE 32 4A 46 7A 63 5E | .Z.y.B.*).2JFzc^
81 FF 59 01 37 7B ED DC FD 33 16 8A 46 1A AD 3B | ..Y.7{...3..F..;
72 DA E8 86 00 78 04 5B 07 A7 DB CA 78 74 08 7D | r....x.[....xt.}
15 10 EA 9F CC 9D DD 33 05 07 DD 62 DB 88 AE AA | .......3...b....
74 7D E0 F4 D6 E2 BD 68 B0 E7 39 3E 0F 24 21 8E | t}.....h..9>.$!.
B3 00 01 02 00 80 34 5C 50 8D 3F AB 58 B5 BA 25 | ......4\P.?.X..%
82 BA 1A 41 DE 1A 52 D6 6D B3 0B F8 7C 30 00 16 | ...A..R.m...|0..
A6 D2 D5 0C 66 09 67 7B 54 02 CC E3 96 D4 C6 02 | ....f.g{T.......
8B 36 2E 20 4A 98 F9 B5 63 1A DA 8A 24 9D 9B 98 | .6. J...c...$...
E3 5B 5F 7D 67 EB AE 15 4D AC 53 34 AE C5 4A 8A | .[_}g...M.S4..J.
B0 0B 19 27 E7 FF 77 1E 58 D3 A7 E8 59 44 06 D9 | ...'..w.X...YD..
5C CD 5E C6 0B 59 B7 CC 6C 54 76 57 4C 86 F9 40 | \.^..Y..lTvWL..@
5F 21 B5 F4 3E 6D BD 09 7D E0 7F 65 F2 6E 15 AD | _!..>m..}..e.n..
E0 16 21 5D CB 34 04 01 01 00 1F 52 FF B9 DC B5 | ..!].4.....R....
B2 3F 91 B4 AE B2 66 F4 97 33 FB A4 BE 05 54 DA | .?....f..3....T.
50 A2 42 5D BD 04 75 C4 7E 35 20 BD 1F 77 2B 10 | P.B]..u.~5 ..w+.
1E FE 51 81 31 E7 9B B4 7B A7 4E 54 50 1A E8 A6 | ..Q.1...{.NTP...
5A 56 08 D1 90 3C D9 AE 3F 1C E8 B8 C7 2B 9F B9 | ZV...<..?....+..
58 9F F4 D3 35 7B C7 6D 9A CE 32 D0 F6 A1 0F E5 | X...5{.m..2.....
8D 81 EC 1E D3 20 AE 05 F3 2C 47 4D 49 7C AB BE | ..... ...,GMI|..
E1 0B 52 8F 85 9F 97 47 D9 AF 47 F0 41 33 43 FE | ..R....G..G.A3C.
5C 46 0B 23 ED 83 F6 56 68 BA 48 2F 41 5E 37 C7 | \F.#...Vh.H/A^7.
4D 40 A3 8C 48 13 05 89 D2 70 AC EE 02 C6 B3 DF | M@..H....p......
88 3C 47 8E AB F1 9F 1B B2 55 85 A7 87 96 46 61 | .<G......U....Fa
34 37 1A 53 24 EF C4 D5 F7 48 3D C8 D7 7F A9 5C | 47.S$....H=....\

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
83 bytes of data:
77 6A 73 D8 72 1B 2C 64 D7 A7 89 92 D5 ED 88 9A | wjs.r.,d........
95 BF 64 44 4F 32 9D 5D 2F A4 65 5F 6C B6 B0 53 | ..dDO2.]/.e_l..S
FF C3 2D BE 88 96 49 31 5A 9E D4 1A 96 C6 D0 99 | ..-...I1Z.......
BA 9A 57 4C E7 1F E4 23 73 CE D7 93 C0 2D 8A 2C | ..WL...#s....-.,
64 5D 1E CA A9 94 30 89 49 2B 16 03 03 00 04 0E | d]....0.I+......
00 00 00 | ...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
139 bytes of data:
16 03 03 00 86 10 00 00 82 00 80 A3 10 39 2D E9 | .............9-.
FD A0 82 9F 46 3C B1 E6 86 B4 D6 41 A2 87 3A 58 | ....F<.....A..:X
F7 49 05 A5 87 06 ED 13 29 45 92 2A 05 CE 2A F0 | .I......)E.*..*.
BF CB B4 99 D4 50 4D 42 F5 45 5A 7F D0 59 3B 1E | .....PMB.EZ..Y;.
5D 9F 59 97 90 AE A0 29 49 35 42 D2 77 41 D2 23 | ].Y....)I5B.wA.#
99 1F 7F 17 DF 21 49 59 82 C1 23 B5 CC FA C6 AB | .....!IY..#.....
54 9A DB 5E F0 F2 59 BE A7 99 2A D2 79 45 2A 86 | T..^..Y...*.yE*.
A8 51 95 73 40 F0 28 DA 10 E7 99 86 E5 BD 3F 96 | .Q.s@.(.......?.
63 6F B5 7C 38 21 C8 4D 90 0D BB | co.|8!.M...

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
0 bytes of data:

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
91 bytes of data:
14 03 03 00 01 01 16 03 03 00 50 90 F2 9B BA A7 | ..........P.....
43 F7 5F FF 10 7D D9 16 AB 2F 19 0E 81 EC 5A FC | C._..}.../....Z.
E8 F7 EF CD 11 CA BE 22 EA C4 6A 85 97 FF E8 71 | ......."..j....q
28 19 B3 B5 18 1C B9 58 73 24 68 B5 73 09 47 EB | (......Xs$h.s.G.
BA 27 82 4A B9 D2 92 9C 16 B2 25 5A C0 2D 7A 60 | .'.J......%Z.-z`
D1 C5 74 83 86 3E E4 E6 CD 1F 70 | ..t..>....p

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
91 bytes of data:
14 03 03 00 01 01 16 03 03 00 50 E5 51 D3 0C 2B | ..........P.Q..+
72 D4 0A 70 0F E2 A0 7C 00 96 A4 AD 8A 0A 13 82 | r..p...|........
6E D9 16 3D 2C DD A7 D4 5E C2 C6 8B C6 28 58 1A | n..=,...^....(X.
36 F6 D8 ED F0 C3 9C 03 47 BD 23 E8 4E 91 76 D3 | 6.......G.#.N.v.
3E BA 2F A3 9F 66 AF 10 7A 98 3B 8E 72 77 95 71 | >./..f..z.;.rw.q
F4 1E 7D 40 67 81 09 BF 8C E8 05 | ..}@g......

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
661 bytes of data:
17 03 03 02 90 19 83 5A 38 8B 84 2E F0 EA FE FD | .......Z8.......
FB BD 0E E2 2E D5 2A 1C 6A AA 51 6B AF 22 72 BC | ......*.j.Qk."r.
E3 9E 49 44 2D 49 48 D7 8D 79 CE A7 2B 11 7E 5C | ..ID-IH..y..+.~\
2F 28 F3 49 EF EB 2E 3A A1 DC B6 D1 93 A5 D9 22 | /(.I...:......."
F3 E9 F1 77 42 AB 2D 65 7C 7F A3 CF CA 1F 94 88 | ...wB.-e|.......
31 4F FE E3 AB 99 9C A6 CC 6F 54 CD E2 89 0E 9A | 1O.......oT.....
57 ED 79 48 B6 E9 E2 02 7F F0 23 4C A1 FD 7C 5D | W.yH......#L..|]
BC 54 25 E3 0F 3F 58 61 6C A6 AD 7C DE A5 3D 16 | .T%..?Xal..|..=.
04 B4 19 4D FE 03 05 C5 CF 3F B7 E6 F5 91 85 3F | ...M.....?.....?
15 64 7A 7D 4D F9 82 D4 28 4B 49 B2 04 3F EC 4C | .dz}M...(KI..?.L
25 28 7B BC 93 91 89 81 94 53 4E DD 31 F3 F8 29 | %({......SN.1..)
A2 89 0E 1F B1 A8 D4 79 38 69 9E 9C B4 14 B4 39 | .......y8i.....9
79 C4 4A 2D 69 FB 00 F3 A6 17 1B 34 E7 50 DE 12 | y.J-i......4.P..
62 79 55 3B 30 3E 71 EA F0 5B C4 71 39 02 D5 60 | byU;0>q..[.q9..`
5D 4C 4D 88 85 BC 46 0D C0 7E 2E 9D 6A 45 1C 4E | ]LM...F..~..jE.N
67 C2 06 8A 60 DB 7B 68 63 32 04 25 22 B4 E5 F8 | g...`.{hc2.%"...
B1 4A B1 3F 19 5B B4 6E 66 D3 3A 49 FE 6D 2F 95 | .J.?.[.nf.:I.m/.
04 F5 05 AB 0B 55 04 A5 82 50 2D 5A A8 E2 82 03 | .....U...P-Z....
EB 88 37 C1 E9 3A AC 80 67 55 FB AC 5C F5 F5 A0 | ..7..:..gU..\...
3A 7D D0 74 BA EA 69 37 B4 6C B3 8C 67 85 A5 BF | :}.t..i7.l..g...
7E BE 2A 5A E3 7F 93 FD C6 90 28 97 AD 49 1D 89 | ~.*Z......(..I..
69 0D 2A C0 9A 15 CB A4 7B 0D 4F 4C DD 7A DA DB | i.*.....{.OL.z..
8C 5D 3D E3 5E 90 E4 5E BF 07 3E 5C 03 D7 FC BE | .]=.^..^..>\....
46 A1 2D 3F 62 C3 DB 41 0F 9C C1 BE 52 A8 58 39 | F.-?b..A....R.X9
A3 61 19 E5 24 61 2B 21 6B 57 EA 0C A7 0D 99 20 | .a..$a+!kW..... 
BA 39 55 54 17 44 EF CB 70 03 5E 8D E5 98 6E 4B | .9UT.D..p.^...nK
2C 01 39 D4 0F 54 7E B6 24 B0 73 68 11 5E B9 46 | ,.9..T~.$.sh.^.F
92 04 B5 70 BA AB AF B2 6F E0 0C 0C DE EF 10 2A | ...p....o......*
82 30 23 EB 9D AC 99 8A 12 66 E1 E0 2A 73 77 D2 | .0#......f..*sw.
0F E3 09 8E CA ED 90 05 75 E7 B0 82 F5 4E EF AC | ........u....N..
56 0B 15 C5 DE B5 ED 54 BC 1C 4B C7 27 41 98 78 | V......T..K.'A.x
04 FD AC 86 62 EA 58 A9 5D E8 21 E7 92 BA 6A 4D | ....b.X.].!...jM
5C EA D6 BB DC 20 1B 4F 21 2E D8 B7 6A F0 07 BB | \.... .O!...j...
DF 01 CE 4A C0 AE 8F CD 7B 7F 91 DE 66 C3 CC 47 | ...J....{...f..G
86 82 16 21 17 E8 6F DC 15 C8 02 B5 08 03 F8 6F | ...!..o........o
5A BF 92 43 8D 06 F2 6D CE 36 51 3E FB DA 57 2D | Z..C...m.6Q>..W-
3B 7A 6D 9E E7 0E C1 07 09 28 61 DE 65 CF 6C EA | ;zm......(a.e.l.
88 6A 6F 57 E4 FC 94 18 15 C9 CB 6C 0C F5 3B 3D | .joW.......l..;=
1A 97 6F 7E 15 79 8B AB 95 0A 55 2C D2 2A 66 2A | ..o~.y....U,.*f*
60 AE 0C 4E 96 85 87 36 34 87 80 C2 B0 24 D7 96 | `..N...64....$..
48 0B 96 F3 A3 AA C0 4E 0C C7 EF DC 48 79 E5 F9 | H......N....Hy..
56 84 6E 0C 1D | V.n..

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
17 03 03 01 B0 81 09 96 AA F2 D5 02 7F EA 9A B1 | ................
34 B1 D9 AD C0 DE E0 5B 66 E4 85 4C CE B5 65 21 | 4......[f..L..e!
AF D2 D9 22 2D 1C 28 0C FC 05 A7 8B 2B EB 4A BF | ..."-.(.....+.J.
B0 D0 48 79 AC D7 01 0E E2 61 4F DC 57 A9 E0 8D | ..Hy.....aO.W...
AA F9 A7 85 1A A1 4A 8F AE 0C FB 56 99 86 7F 7D | ......J....V...}
13 3B 97 DD 4A 7D 84 2E 68 F8 BC 02 35 90 56 8A | .;..J}..h...5.V.
42 DC 76 8A AA 38 61 83 B3 21 EC 79 95 D1 D8 D4 | B.v..8a..!.y....
81 35 4C 0C DA C7 4B 6F C1 4B 29 67 B9 5C 8D 04 | .5L...Ko.K)g.\..
08 8B 3F 29 32 C6 76 8E 94 D7 14 9A B7 2D F1 BA | ..?)2.v......-..
FF E8 F1 26 09 1D 79 EB 68 75 2E 1C B0 B3 2F 0A | ...&..y.hu..../.
8F DF 00 1E 59 ED 0C FB 61 A5 5D 47 C0 8F DC 58 | ....Y...a.]G...X
74 DC B8 55 41 6D D5 DB 88 FD C1 55 17 C3 03 99 | t..UAm.....U....
90 F7 CC 8F 5F 5E 3F EA 21 A5 24 76 06 BA 28 76 | ...._^?.!.$v..(v
3F 2A BD F3 BD C0 87 84 31 35 33 1C D1 46 95 59 | ?*......153..F.Y
2A 86 B5 6B 91 B4 30 D8 72 82 30 84 43 BF 01 A0 | *..k..0.r.0.C...
1F EE 73 EB 47 D3 76 E4 10 AB 40 6E 5E DC 01 5D | ..s.G.v...@n^..]
47 FF 6C 31 D9 4A 45 0A BF 46 30 65 FE 38 1D 58 | G.l1.JE..F0e.8.X
C5 6F 35 7E C1 61 51 B7 CC B7 FE E2 38 38 88 9D | .o5~.aQ.....88..
96 3E DD 03 E2 64 1E 87 DB 99 27 09 CF 43 17 10 | .>...d....'..C..
D4 CC 11 EA DA FC B4 AD 04 08 C6 DC C9 88 55 82 | ..............U.
3D A5 E4 0A 70 1B C7 F4 D4 14 09 9E 5E C4 3B F0 | =...p.......^.;.
BA 37 F8 29 35 F0 4F 4A A0 0F F2 64 3E D1 47 75 | .7.)5.OJ...d>.Gu
1A C9 E1 DE 09 03 6E C9 80 04 B3 2A 4F EC B0 48 | ......n....*O..H
95 56 E5 65 36 B4 02 1A 92 59 0E 83 13 79 B9 0F | .V.e6....Y...y..
A1 0F 9E EB F2 E2 9F 0C 8D 17 37 C1 43 7F 88 C8 | ..........7.C...
9B AE 18 7D D9 4A 32 33 1F 3E 78 AB A1 B1 BE AD | ...}.J23.>x.....
3C 1B 3F 09 65 DC 4F 61 07 47 C8 2C 51 5C FD 23 | <.?.e.Oa.G.,Q\.#
AD 0D 8E DA ED 17 03 03 00 40 67 03 78 83 7C 1D | .........@g.x.|.
72 FB A0 61 22 A5 5C 7D BC C7 4A 18 6E 1E 31 E0 | r..a".\}..J.n.1.
8F FF 76 E1 49 A7 DD 72 A5 A6 7D 37 D4 E0 3C A0 | ..v.I..r..}7..<.
D1 FC 3B 70 E2 8C 1B 43 9B 95 27 61 82 B0 5F F0 | ..;p...C..'a.._.
EE 63 64 25 D7 43 F7 F9 A7 0F 17 03 03 06 80 66 | .cd%.C.........f
3A 48 3D 4F F5 F8 EF B8 33 15 00 E5 DA EA AF C4 | :H=O....3.......
10 6B EC DA 70 BA 8B 89 ED 81 00 E8 C7 89 8C 6C | .k..p..........l
34 99 E1 F2 35 9C 14 41 43 F0 D7 18 0F 01 03 42 | 4...5..AC......B
02 0D C9 8C 4A A8 5C 11 34 97 F5 57 D9 02 2D 8B | ....J.\.4..W..-.
B6 97 E5 CC 41 40 40 87 B8 0D 2D 01 E6 5C 6E C0 | ....A@@...-..\n.
7C A5 02 09 18 65 2C 92 C7 CB 75 36 86 D5 CC 7A | |....e,...u6...z
C9 A6 B4 7B 4B EF EF B7 25 D4 6C A0 50 87 E1 39 | ...{K...%.l.P..9
71 A7 4E 3C D0 50 FB D9 33 9B BF FE 11 85 B2 7E | q.N<.P..3......~
4C ED 93 FA 57 06 D1 7B B3 20 91 EA 17 08 C1 AD | L...W..{. ......
B0 D7 0B C0 3C 16 83 E5 05 53 9F 0C BB 7B 98 1E | ....<....S...{..
5C 62 71 A8 27 F6 03 27 BC 87 84 C7 19 43 5C F4 | \bq.'..'.....C\.
C8 79 21 EB 68 89 E0 9A 30 87 73 7A EF DB 4F EF | .y!.h...0.sz..O.
C3 EC 2A D0 46 C0 1A 4D F4 83 ED 69 8B 29 57 E8 | ..*.F..M...i.)W.
6A D2 71 66 37 F9 4C 41 FE 06 A2 10 DF CF 0B 94 | j.qf7.LA........
F4 36 5A 4C 9D 3E CD D8 B2 87 35 BB AE C1 67 E8 | .6ZL.>....5...g.
BD 96 38 C2 F4 E6 01 95 60 75 E0 0B F3 9C BE F7 | ..8.....`u......
23 23 0A A2 00 B9 FA 98 AB 8A 91 1B 51 00 F9 1D | ##..........Q...
1B 63 48 3F 95 37 2E 71 23 DA E7 9F 93 2E CD 2D | .cH?.7.q#......-
69 C2 7D 34 71 63 34 8A 9E 55 24 A0 B7 C2 93 5C | i.}4qc4..U$....\
7E F8 D4 85 0A 66 09 74 2F 2B 70 54 1A A1 93 D4 | ~....f.t/+pT....
F9 28 AF C8 F4 A5 F4 F5 FB 21 F9 A3 4C 99 4E 22 | .(.......!..L.N"
ED 03 42 2F CA D6 CF 81 41 C2 E4 7A FE 79 B3 AD | ..B/....A..z.y..
76 B8 0D A9 D0 08 74 6E AD 45 3E 2D 58 4D 43 14 | v.....tn.E>-XMC.
4C 3D 36 57 F7 8A 17 CB 25 5F F9 7F 57 8D 50 3E | L=6W....%_..W.P>
11 7A 03 37 0B 89 C3 A5 8C C6 30 B0 C4 6A 02 2A | .z.7......0..j.*
81 61 D3 07 0E 7E 2C 39 C9 0C 85 6F 59 D4 0A 6C | .a...~,9...oY..l
A2 46 45 A5 E6 BD DE FF A6 47 93 F4 65 BC 75 7C | .FE......G..e.u|
55 4B 9A 7F DA 6C 2C 38 76 21 04 FC EC F4 BD 4F | UK...l,8v!.....O
5A AA 00 7E E5 6E 4C EC 27 5B 8E 0A C3 DF BE 04 | Z..~.nL.'[......
13 DB 76 7A DE 2A 03 56 0C F5 17 5D 8F A0 4B B1 | ..vz.*.V...]..K.
C1 CA 2A 98 C4 22 63 B3 D7 AA 51 0B 8B CA C2 2C | ..*.."c...Q....,
8D 01 76 B5 F4 56 13 71 95 42 1F 77 C1 9E 92 D4 | ..v..V.q.B.w....
70 E5 F8 EB C3 E9 5C 7C 11 B7 AD D7 B4 07 F2 44 | p.....\|.......D
35 EA 36 9F 47 09 03 E0 17 DF 02 CD A9 14 E5 80 | 5.6.G...........
D0 D3 27 33 59 92 77 55 3A 2A 4C 4F 9F 83 9E E8 | ..'3Y.wU:*LO....
D9 6D AC 5D E5 C2 F1 78 32 E0 A9 82 16 0E 54 8C | .m.]...x2.....T.
B9 15 53 60 A6 DB 0D 7C CD BD BE 82 76 CA D5 B4 | ..S`...|....v...
19 B4 FA 17 57 EC 9B 30 17 07 FE C1 FF 24 B7 08 | ....W..0.....$..
9D 1C EA B1 E6 8A 7D 65 1F DE AE 62 13 DA 18 2F | ......}e...b.../
F1 0C 91 3E 85 35 7F 1A 76 25 10 8A E0 48 A5 77 | ...>.5..v%...H.w
07 C6 14 63 41 CD 07 91 BA 34 C5 AF A2 05 0C 21 | ...cA....4.....!
7F CC 5E 82 70 B8 76 FB 15 48 8D C2 75 78 BE F2 | ..^.p.v..H..ux..
9C D7 99 C4 93 71 26 9A 98 AE F3 CE FC 04 DD 05 | .....q&.........
03 1E E8 6F 97 EA 01 6B 24 18 29 DF E6 11 42 5D | ...o...k$.)...B]
F3 A1 DC 69 67 15 DF FF 99 8E 75 77 FE 61 CD D7 | ...ig.....uw.a..
51 72 12 E0 D8 C3 88 66 24 25 6A A3 42 5A A0 A7 | Qr.....f$%j.BZ..
E4 79 9F DC EE 5C 83 DA 58 8B 44 3B EA 91 6C 93 | .y...\..X.D;..l.
30 1F C2 C2 BA 7B 16 7E 29 74 CB 9B B3 C2 C9 44 | 0....{.~)t.....D
26 10 41 DC E4 0C 6F B4 A2 EA 86 00 A4 3E FE 7A | &.A...o......>.z
8B 10 5C C7 8B 95 63 CB 84 CA 87 C2 D7 E5 E8 2B | ..\...c........+
37 4A 07 8F 96 4E 59 3F 08 8B 16 56 AB 03 16 37 | 7J...NY?...V...7
8D 95 CD F1 DC 6F 47 FD 06 42 C7 28 9C 9E 10 54 | .....oG..B.(...T
2D 51 9C AE 20 A7 C7 9B 62 F7 88 21 A8 D0 22 48 | -Q.. ...b..!.."H
F0 3F FE A5 AA 63 E6 84 8D EE 3A CA 94 BB 8C 6F | .?...c....:....o
A4 0E 6B 88 03 90 BE AD 65 49 7C 5C E7 BB 4C BD | ..k.....eI|\..L.
D0 64 55 C4 B3 CC 9E 98 2F A7 E7 D1 30 7F 70 4B | .dU...../...0.pK
18 37 13 F2 EB 63 4C 16 DD D3 77 DD D0 03 57 D3 | .7...cL...w...W.
6D 6D C2 96 53 A0 12 19 B5 56 32 7E 10 36 37 59 | mm..S....V2~.67Y

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
804 bytes of data:
F3 4D 70 9C 00 A0 63 94 A7 E6 2D D2 69 2D 86 8A | .Mp...c...-.i-..
6F B2 0F AA 50 5D 3D A4 2E DB C5 B1 8A 29 F1 DF | o...P]=......)..
F9 86 E2 FE A8 5C 72 41 3C 0C D9 8C 6A 81 56 29 | .....\rA<...j.V)
D5 DC 32 4F 5E A8 84 A9 F2 DA B6 81 D4 66 90 74 | ..2O^........f.t
BE 4E 54 EB A5 EA B3 96 D8 80 45 BA D6 DC 5D 4D | .NT.......E...]M
89 6C AF 65 4D 22 57 3C 69 D4 9B 1B 69 90 CC F9 | .l.eM"W<i...i...
E1 A6 44 DC 20 D4 89 6B E1 96 F2 A5 BF A1 21 95 | ..D. ..k......!.
0B 37 43 33 FE A5 E1 7D A4 F9 7D 11 F5 BE 03 1D | .7C3...}..}.....
6D B4 5B C8 87 AC 5D 46 14 91 C4 D4 AB 57 91 2F | m.[...]F.....W./
46 4B F0 40 AC E1 C9 61 EE 16 8B 47 A4 DA 81 EB | FK.@...a...G....
3F 74 46 41 70 13 69 C8 D2 D9 37 7B BA ED 7C C4 | ?tFAp.i...7{..|.
FD CC 22 82 1E 2A 6A A8 BB 59 16 44 37 F4 EF 5F | .."..*j..Y.D7.._
22 5D 51 16 D4 3C CF DD 56 45 65 51 58 16 3A 97 | "]Q..<..VEeQX.:.
30 2A EF C3 63 28 3E 8A 7F 0B 44 8B FC 82 F7 C9 | 0*..c(>...D.....
B2 71 68 6F 00 C6 C5 4F 17 D6 D6 1C C0 E9 72 96 | .qho...O......r.
A4 FE 04 0E C7 89 EB 66 BA 23 85 2D 70 B0 B0 95 | .......f.#.-p...
FB 23 09 49 9D C7 B5 46 CF 2D 69 DD A9 F0 3A A8 | .#.I...F.-i...:.
06 72 00 1A 31 2F 50 B5 D3 E2 41 9C 3B 10 76 F5 | .r..1/P...A.;.v.
DE AF F9 49 B0 E8 84 24 DF 22 A0 F6 42 B4 0D BF | ...I...$."..B...
8C F3 38 73 C2 59 A9 7F 1F FF E7 62 5D C3 4D 83 | ..8s.Y.....b].M.
10 BF 33 AA 86 C4 F0 FA 79 5D FB 8B 1F 30 73 38 | ..3.....y]...0s8
B7 DA E0 53 2D 94 41 20 9C 69 33 7E BA D4 7C FE | ...S-.A .i3~..|.
A1 35 B6 40 EB 45 71 65 24 67 EA 6B 68 45 12 1E | .5.@.Eqe$g.khE..
72 85 D6 EC 55 57 B6 DB 93 88 6C E9 8C 52 01 2A | r...UW....l..R.*
E0 56 D6 D0 76 BD E8 8C DB 57 9F E6 24 43 E1 A7 | .V..v....W..$C..
A3 04 49 49 A0 AF 4D 4F 6F 2F 92 A8 E0 A2 B0 52 | ..II..MOo/.....R
B8 0F C7 64 5E 7D E8 DE 35 CD 08 83 22 11 95 C5 | ...d^}..5..."...
94 02 64 9A F6 AB FD 45 60 10 70 0A 97 F2 3C 1D | ..d....E`.p...<.
BD DD 61 B4 42 C2 33 37 07 62 97 52 27 51 E3 84 | ..a.B.37.b.R'Q..
C7 E6 75 C7 AC E4 76 31 CA F7 F1 CF 24 E1 8E 74 | ..u...v1....$..t
8F 1C 51 3F DA BE 3D 55 B5 DD EC B6 26 D3 A6 60 | ..Q?..=U....&..`
21 3A 39 A1 D1 25 66 A3 C7 FE 3A 31 40 B6 01 87 | !:9..%f...:1@...
47 97 8B D7 89 23 32 F9 68 69 6A EE 5D D9 89 06 | G....#2.hij.]...
48 A8 FB 87 16 07 3E 93 A0 A0 53 E8 2F BB EC AE | H.....>...S./...
C7 EC E5 93 5E AC 19 CA E6 A0 CF 21 6A A0 EB D5 | ....^......!j...
40 89 D5 BB 6C 9F 28 52 B5 A3 22 62 34 85 92 6F | @...l.(R.."b4..o
5B 86 7F E2 5F 7E DA E4 68 1A C9 E0 85 3B F1 DE | [..._~..h....;..
42 D3 14 BC 8D 5D ED 26 33 C7 48 87 99 F3 93 DB | B....].&3.H.....
E6 49 B6 DC 4D 33 37 F4 30 AC 4E D2 9A 26 7E 2E | .I..M37.0.N..&~.
EA 1E 95 A2 4F 32 D1 1A 25 E9 F9 61 D8 BD 7E 53 | ....O2..%..a..~S
A9 FA 22 D3 81 F0 4D 95 7C 3A CA D6 42 A6 7B 70 | .."...M.|:..B.{p
BD 14 25 B2 AC 76 06 11 9F D1 62 B0 83 40 AB 2A | ..%..v....b..@.*
6A 23 3B FD 0D 76 40 06 41 15 25 DE 68 26 DC 60 | j#;..v@.A.%.h&.`
18 D9 5A 62 6F 87 AC EA BF A2 23 FF ED BE E4 92 | ..Zbo.....#.....
7A 05 55 55 F5 56 33 25 76 A2 45 41 3B ED B8 7A | z.UU.V3%v.EA;..z
74 CD E8 31 5D 85 44 DB 31 36 7A AC 80 3F A4 17 | t..1].D.16z..?..
03 03 00 40 F1 4E 96 BF B2 BE 1B 52 C4 6D 4B 2C | ...@.N.....R.mK,
25 53 62 2A D1 88 1A B6 2B AF EE 13 A8 A1 FA D2 | %Sb*....+.......
FA E5 4E B8 CB D3 C7 DB 33 3B B7 AF C3 23 59 04 | ..N.....3;...#Y.
7F B4 91 2F 10 34 C7 01 0F A5 8F 3D 92 B5 5C 78 | .../.4.....=..\x
B5 2F 8D 19 | ./..

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
335 bytes of data:
17 03 03 00 40 12 79 0D FE 65 3C 69 D9 05 65 84 | ....@.y..e<i..e.
88 7D 63 1B 7D B7 AD 39 62 96 D5 28 19 1B 0A A6 | .}c.}..9b..(....
96 56 D3 84 15 BA 64 0A 9E CC 34 4B 3D 40 1D 1D | .V....d...4K=@..
F1 96 E7 E3 3E 04 D4 EC 45 D0 3E 74 68 45 FD C2 | ....>...E.>thE..
6A 40 34 F6 FA 17 03 03 00 C0 1F 0F 34 5B 0A 23 | j@4.........4[.#
35 FC EC 7E E8 32 82 43 2C CE C1 C7 3C B8 79 F5 | 5..~.2.C,...<.y.
DB 02 32 56 2F 07 D8 F9 EA 73 2E 19 5A 07 B1 4C | ..2V/....s..Z..L
6C D2 D0 FB F3 2A 35 5D D9 7E 00 59 3E 7B 86 BF | l....*5].~.Y>{..
C0 16 F6 A6 B0 CB 37 5D 1D 69 6E 95 44 46 43 6C | ......7].in.DFCl
99 2F FC FE B9 EF 15 D6 0F FC 4B 67 1E 9D 1F 97 | ./........Kg....
76 17 F7 FE AB 86 F8 C9 1F C8 93 34 5E E1 44 7E | v..........4^.D~
8E 6C 33 07 05 41 A7 93 CC 8F 99 42 ED 43 36 51 | .l3..A.....B.C6Q
8E 4C 57 33 5C D2 AA 17 E1 8A 3F 9D A5 BC CD 20 | .LW3\.....?.... 
05 DB 32 10 0C 57 EE 10 DF D7 0C 48 43 0B 0D E2 | ..2..W.....HC...
0A 3C CE A2 96 9B 88 42 58 5B E5 EA D2 6B 9B 78 | .<.....BX[...k.x
BD 04 AD E9 CE 2C FA 48 91 61 C4 8B F6 10 D4 7A | .....,.H.a.....z
4E 4D 96 D5 AA 1D 28 46 B9 B6 17 03 03 00 40 C5 | NM....(F......@.
FE B7 9C 9E 78 D2 9E 36 37 2B FE 4C C1 99 F3 BB | ....x..67+.L....
58 F7 A0 66 04 71 CD FD 49 55 0B 47 11 37 BD 44 | X..f.q..IU.G.7.D
69 86 EA B0 B0 31 E1 FB 44 D4 16 7E C1 78 54 67 | i....1..D..~.xTg
F2 5A DC AD 93 E3 44 AD FD 3C 77 9B 97 AB 0B | .Z....D..<w....

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
335 bytes of data:
17 03 03 00 40 50 33 64 A0 FF 69 F3 19 46 95 3F | ....@P3d..i..F.?
12 47 B8 24 2F C0 A4 92 C9 43 1B A1 DF D0 99 7A | .G.$/....C.....z
22 56 88 1F 2F 95 BD 9A 5E 50 42 A4 D3 44 93 BD | "V../...^PB..D..
52 18 8C 1B 66 1E C9 7C 93 D5 EC 93 69 B9 64 B6 | R...f..|....i.d.
59 6A 48 6B 64 17 03 03 00 C0 CE E9 65 9E 69 FC | YjHkd.......e.i.
88 4C 16 5A 72 03 0D 93 D1 F2 BF 96 75 94 72 BA | .L.Zr.......u.r.
1F 23 67 CA 9B 7B 78 B6 64 CD 6B 14 C4 CA F0 09 | .#g..{x.d.k.....
F7 27 19 0D 4F F2 D2 E4 2C DD 20 45 D0 59 BC 95 | .'..O...,. E.Y..
05 ED D0 D3 DB F9 98 59 D3 9F C2 24 A9 5D DE E5 | .......Y...$.]..
C1 E0 94 DF 0F 3D B8 02 5B BF 24 AD D8 3C 32 69 | .....=..[.$..<2i
DD 45 88 66 51 BB 2B 6E 39 BA AA 6B 2E 5F 7E 76 | .E.fQ.+n9..k._~v
31 94 48 48 53 29 14 E8 68 4C C2 AB 52 EF 20 A5 | 1.HHS)..hL..R. .
00 CF 16 B3 10 BD 77 9E DF 46 A3 29 9D 28 59 15 | ......w..F.).(Y.
38 AD 19 2A 03 C3 B2 EF 6A 73 A9 0D 88 3A 11 DD | 8..*....js...:..
99 CA 45 3D DB A2 D5 8E 9E F5 6B BC 74 40 ED 88 | ..E=......k.t@..
7E E6 51 CE 9F A8 83 15 FD 71 F5 81 2F A1 B3 2A | ~.Q......q../..*
32 18 26 EC B8 E1 77 8E D1 FD 17 03 03 00 40 8E | 2.&...w.......@.
0E E8 E0 D6 C8 8E 78 03 EB 20 FA 35 8A 86 9F 9B | ......x.. .5....
55 D1 03 D9 99 49 C2 FB CA 3B 04 29 49 6B A7 EF | U....I...;.)Ik..
BB D7 5F F1 9E E1 25 17 24 E4 01 4D 29 F2 E0 15 | .._...%.$..M)...
F5 2E B7 05 7F CC 0D D0 31 D0 26 D0 9C 7B FB | ........1.&..{.

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
17 03 03 00 40 00 2E C3 44 BD B7 33 15 48 AD 3D | ....@...D..3.H.=
A7 51 A9 64 D1 9A 6A DD 45 53 F5 CE E2 DE A6 D7 | .Q.d..j.ES......
FA F8 4B 08 7A DE 63 E1 00 C6 BB 4C 52 DC 61 05 | ..K.z.c....LR.a.
A8 45 EA D4 11 33 26 7B 2A 68 48 AE 34 C0 39 74 | .E...3&{*hH.4.9t
80 55 B5 C7 55 17 03 03 1F 80 01 5B AB 87 5F E1 | .U..U......[.._.
0A B9 82 51 0A 82 0E 86 89 3A 62 6C 40 2A DF A1 | ...Q.....:bl@*..
DB 29 13 7B 2E 97 4B 08 18 EA 34 01 33 AE 91 E8 | .).{..K...4.3...
DB CF FB 7D 3F 74 95 B7 F0 7C FE C7 31 D7 AC 3F | ...}?t...|..1..?
1B C4 72 D9 67 D8 C8 23 BA 81 C8 B3 44 9E DC 99 | ..r.g..#....D...
D7 75 93 FA 9D 1C 4B 8E F9 A7 DE 3A 54 93 54 D9 | .u....K....:T.T.
11 38 A8 D6 CB 80 E4 21 8B C1 8A FC 4E 0E 9E 1C | .8.....!....N...
DB 1E 91 C2 4C 3C 73 72 42 E9 63 85 A7 F2 65 B2 | ....L<srB.c...e.
EE 55 4A CF 8C 99 F1 14 11 2F C9 61 35 B2 87 70 | .UJ....../.a5..p
A5 C9 BE CE 53 BB 5A 96 FE F5 14 12 0F BE 98 99 | ....S.Z.........
89 7F E1 68 97 9A D0 47 D9 2B 38 88 80 EB 03 F0 | ...h...G.+8.....
3C 41 2E 00 94 2E 01 8B 28 1D AF 21 01 3C 0F 1C | <A......(..!.<..
75 8A CC F5 AB AE 69 D4 DF B4 F8 6E B4 89 69 C9 | u.....i....n..i.
96 04 2E 5F EB D7 4D D2 24 6F D1 60 0C 3D 10 20 | ..._..M.$o.`.=. 
F2 CA 8B D3 7A 0E 69 BA C1 29 AF 25 E9 BE 22 9E | ....z.i..).%..".
96 BC F2 B5 76 8E 50 9E 20 66 7B 2A D8 36 FF 73 | ....v.P. f{*.6.s
A5 AD 99 EE 03 20 36 9B FA 80 87 41 0B C3 20 A1 | ..... 6....A.. .
9B E5 FA 21 C8 4D 6A 3E AC 50 FB 16 7A E7 CB 6F | ...!.Mj>.P..z..o
C0 2A 32 FB 85 29 1F FD 57 35 58 E3 A1 16 5A 93 | .*2..)..W5X...Z.
D6 F6 6F 4E 17 3F D3 62 5F FD 32 30 1C 77 06 2F | ..oN.?.b_.20.w./
51 5A 9C 8A 36 3A 22 3F 15 3D E9 0A FD 80 34 38 | QZ..6:"?.=....48
08 4F 7D 51 0F 12 AC AC 7F 2A F7 E4 E6 24 A0 3A | .O}Q.....*...$.:
6B A4 9E 8F 96 AA 63 7F B7 32 55 16 D8 56 6F 27 | k.....c..2U..Vo'
0D CC AE 88 E7 92 9E B5 C9 6A 73 FA B3 5D 1F 81 | .........js..]..
96 4C 49 69 46 EF A0 15 00 83 62 17 9A 36 47 F1 | .LIiF.....b..6G.
E3 02 88 D6 5D 22 05 AC C2 9E 3A DA E5 80 76 17 | ....]"....:...v.
A2 F4 FE 16 AB FC 86 FD B4 BC BC C6 8D F0 74 26 | ..............t&
88 C9 51 DA 8D 91 04 F4 61 1F B8 CD 7C 99 66 A4 | ..Q.....a...|.f.
56 CD 57 08 47 BC 4E DE D3 B5 89 91 A2 36 60 8E | V.W.G.N......6`.
00 97 52 34 76 ED B5 1C 44 13 71 42 FA AD 9B F4 | ..R4v...D.qB....
DA C4 82 FC 29 9E 31 32 5E C9 AB 0E 37 83 EF BF | ....).12^...7...
7E B3 3B 68 A3 A0 B1 C1 9B 91 68 8B 1F 7A 11 F7 | ~.;h......h..z..
EA 5F 28 AA 34 17 96 55 B3 C9 4E 61 3A AE B6 B6 | ._(.4..U..Na:...
F7 19 70 6E D9 AD 47 A7 3D 45 26 85 FC A2 6D 51 | ..pn..G.=E&...mQ
ED FC F9 82 A7 A9 42 97 C2 27 4C 17 C7 05 C4 DE | ......B..'L.....
EC C5 8A FB 73 A8 CA AF 7D CF A4 81 96 3F C4 C5 | ....s...}....?..
E8 0E 64 17 AA 05 7E AB 9C 55 B8 32 8E 0B 37 65 | ..d...~..U.2..7e
CA 04 1D AF 1C 18 12 56 73 CB F5 2F 00 8A FE 31 | .......Vs../...1
B3 DC EC 5E FC 8C B1 CA 71 3E 16 7E 2A 61 5E 6E | ...^....q>.~*a^n
F0 AC 53 7F 10 5E F2 EB DD 67 3D 4E 96 23 16 0B | ..S..^...g=N.#..
72 9A 96 13 B8 7F 70 DA 04 5E C6 5D D6 87 49 FE | r.....p..^.]..I.
A2 B4 4A 15 9C 5B 55 7F 57 8E D8 F4 C7 64 3B 51 | ..J..[U.W....d;Q
03 16 F5 68 B2 79 43 4B 9C F8 36 FC 69 E7 19 0E | ...h.yCK..6.i...
90 E5 B1 80 52 65 B9 2C C3 7D 4F CD 4B E1 09 B4 | ....Re.,.}O.K...
06 3F 46 1F CC 05 BB E3 E6 24 E5 47 96 2E 31 1D | .?F......$.G..1.
23 C8 B6 54 C5 23 85 9E A8 B7 49 C1 32 F3 19 74 | #..T.#....I.2..t
1F 9A A4 9C 4C 1C 9F 98 49 28 84 E1 FF C6 5B CA | ....L...I(....[.
70 BA BA E4 CC CA 60 20 F5 89 42 BA 66 94 7F A7 | p.....` ..B.f...
82 3C 54 A9 13 99 BD BD F4 F5 27 87 E2 66 CB 73 | .<T.......'..f.s
EE E2 A0 76 9B CD D0 54 BB E9 33 41 81 09 C5 DA | ...v...T..3A....
97 E0 F7 CC 17 1D D2 DE BB D7 F8 BC 94 F0 A2 6D | ...............m
74 B4 F8 5D 85 B9 BF 19 89 4C 30 19 10 29 CB EA | t..].....L0..)..
55 28 72 23 67 71 B5 A0 CB BA E1 8E 83 4E CC 70 | U(r#gq.......N.p
90 62 0B 5E 3C 78 A7 14 0D 7E 13 A7 09 86 ED 39 | .b.^<x...~.....9
B7 AB 50 22 93 77 30 4D E3 AF EA 12 6D E5 F4 4C | ..P".w0M....m..L
A1 7E B6 B3 F3 CA 63 D9 0C 88 9B 86 F8 1E 3D 29 | .~....c.......=)
FA 32 25 7B 4F 91 4A CB F6 88 6E A5 36 83 E8 F8 | .2%{O.J...n.6...
53 7C 8F 31 10 1C 33 A4 05 3F D5 CC 9C 51 37 63 | S|.1..3..?...Q7c
79 D5 6A 2E 8E DA EB 38 60 BC 49 2E E2 C6 EE 1F | y.j....8`.I.....
A6 8C D5 E6 29 10 CD C3 D2 B0 C9 D2 E1 76 15 08 | ....)........v..
7D E3 7F 2C 81 C4 F8 3C 3D 53 2C 6E 5F 26 72 A4 | }..,...<=S,n_&r.
C7 66 22 48 6B 4A BE 9E F7 82 49 3F D4 A7 F6 8F | .f"HkJ....I?....
1D 05 B0 79 0B 08 B1 F9 17 A1 FA 2D EE 2E 6C 3E | ...y.......-..l>
60 34 DD D1 7D F3 38 4B C1 D5 14 09 EC A5 98 66 | `4..}.8K.......f
98 9A 27 94 C9 E4 41 34 03 C3 BE 36 5C 40 BF 1D | ..'...A4...6\@..
F7 8C 0F 52 EC 4B 0C 56 28 EE 1E C6 3C 5A C7 A0 | ...R.K.V(...<Z..
33 3E 61 56 12 AF C9 E1 84 CB 14 57 F3 69 40 49 | 3>aV.......W.i@I
AB 65 9A 5B 45 32 61 12 E6 D2 CA C3 3C 86 9A FD | .e.[E2a.....<...
C1 39 79 AA AA 16 72 AA F5 FC 3B BC 48 98 40 7C | .9y...r...;.H.@|
D7 27 92 FC A6 C3 7A AA 4B F7 87 8D 01 59 01 A8 | .'....z.K....Y..
F1 E5 A2 D6 34 A4 D3 72 B3 66 3D AF AD D8 F1 C0 | ....4..r.f=.....
BE 3E E6 D2 14 5A D6 0D 2B 49 D1 95 0B 72 1B 76 | .>...Z..+I...r.v
A3 73 07 82 90 45 AB 8B 73 EE 57 6A F0 96 5F 34 | .s...E..s.Wj.._4
43 5E B9 8C 17 C2 9F CE F5 53 C4 3C 6F EB 07 9D | C^.......S.<o...
A8 47 51 DE A0 6D 05 4A 69 D1 A2 73 E9 28 76 E5 | .GQ..m.Ji..s.(v.
9B 41 99 B5 7F 28 AB 9E E8 86 07 FF 2A 5D A7 ED | .A...(......*]..
ED BE D1 77 9F 60 AB E1 B9 09 53 26 BE AA 83 8A | ...w.`....S&....
47 0C 07 CC 95 7D A6 E9 2C C4 2D 4C 90 E9 DC 5D | G....}..,.-L...]
16 6F 1C BE DE 50 F7 97 D5 2B D0 3E 4E FE E6 DA | .o...P...+.>N...
83 B9 F8 09 67 6E 56 3E 08 47 D9 6F D8 12 26 32 | ....gnV>.G.o..&2
DE FD FE F9 76 6D 10 0F CB 46 B6 EB DB 28 FE CA | ....vm...F...(..
80 93 6E 5C 1A 73 67 6E DD 16 F9 E2 45 01 17 24 | ..n\.sgn....E..$
20 D7 78 9C C9 25 00 36 B2 53 DA 27 80 09 C8 E2 |  .x..%.6.S.'....
A1 0E 3A C6 77 B2 27 1F B0 2A 39 79 08 00 D3 8B | ..:.w.'..*9y....
4A 69 EB F6 FA 9A 4A 7C 65 8F A5 FB 9C 80 2A F7 | Ji....J|e.....*.
92 B4 DC 07 45 49 68 93 70 1D CE 36 E5 F1 BF 3B | ....EIh.p..6...;

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
4B BE C4 3A 02 8C 52 9B EC DE 67 12 35 5C 00 21 | K..:..R...g.5\.!
C1 A6 61 99 B8 3C 9A 4B 58 B5 82 26 56 37 9F 7F | ..a..<.KX..&V7..
80 75 48 08 2F 9F 5E 3E 5F 36 4A E9 7E 85 7E 47 | .uH./.^>_6J.~.~G
FE FE 63 82 FD 22 2D D4 F3 64 6F ED 40 59 40 7E | ..c.."-..do.@Y@~
6C 5E 0B 12 5D 9E 9C 90 65 06 6B BE AB 2D 48 BD | l^..]...e.k..-H.
F1 08 95 C9 E0 59 0F 94 6C 4D 31 B7 D1 97 3B F6 | .....Y..lM1...;.
09 F5 12 A5 0B F5 E6 B3 2E 7F 89 95 44 17 BE F6 | ............D...
8E 95 9C F2 9A 12 8B DC 6D AC A5 D9 18 D7 38 05 | ........m.....8.
B3 3F 08 C5 09 4F 12 53 71 A3 F7 38 D3 E4 20 E4 | .?...O.Sq..8.. .
0D F1 7A FB E6 0B 55 40 E7 27 DE 99 B7 47 EF 1C | ..z...U@.'...G..
84 8E CB 13 33 84 5F 36 6D 20 AD 22 97 34 29 FC | ....3._6m .".4).
CC EE 6F 22 47 B3 D8 8B 21 6E 69 15 17 1B 79 51 | ..o"G...!ni...yQ
3B 00 79 28 AA 1D B6 51 43 B7 04 E8 FE CE A0 2A | ;.y(...QC......*
58 65 A3 64 A1 D3 ED F0 4C FF 7D 72 50 77 9D AE | Xe.d....L.}rPw..
65 89 90 A8 92 CC F4 AB 3A A5 57 2C 24 9D 09 96 | e.......:.W,$...
F9 89 B4 58 53 DA E5 36 EB C8 21 20 DA A8 A1 A5 | ...XS..6..! ....
89 18 FA C3 0C CF DA 15 43 5C BC 44 17 2B 48 5F | ........C\.D.+H_
A2 51 DA BC 7A 41 20 17 77 14 C9 F7 F2 93 F1 EB | .Q..zA .w.......
F7 4E 14 EA CC E7 B2 FD 1E E2 A6 8B 64 F0 3D 2B | .N..........d.=+
8D 92 27 C5 9F 91 C5 9E AB 48 69 70 07 78 C4 D4 | ..'......Hip.x..
4F 8F BD 8A 04 E6 40 D1 BE E5 63 64 87 EF AD FF | O.....@...cd....
FD A9 B6 E4 A8 61 5F 9C 14 00 FE 07 8C B9 81 9A | .....a_.........
11 C6 AA 00 2E C9 FC 55 34 9F A6 05 97 B4 4B BF | .......U4.....K.
EC FF 32 B5 4A 23 03 71 35 39 84 B4 72 2D 5B 7A | ..2.J#.q59..r-[z
77 05 3F 2C ED EF 71 BE CC AF C9 3A 38 D2 1E 77 | w.?,..q....:8..w
A2 11 36 C1 D8 8F 11 8B 12 E7 01 C9 87 37 CE 1A | ..6..........7..
73 A8 F8 49 EE 66 DC B9 60 1A DC 83 6E 13 B1 B0 | s..I.f..`...n...
1F E8 8A 7E 4D 0F 9A C5 0B 72 7E C2 F4 50 37 61 | ...~M....r~..P7a
12 66 78 2E 5B 1C C8 AE 67 CD 44 93 F5 17 1C D2 | .fx.[...g.D.....
B1 B2 2B C7 5C 6C 99 BD A2 1B 34 22 4D 4F 1E 8C | ..+.\l....4"MO..
FE 65 D8 38 D9 29 50 E0 6C 63 D5 E3 8A B8 37 7D | .e.8.)P.lc....7}
0A 91 B9 F1 46 EE 97 96 AF 1E 89 84 F2 A8 7F 1D | ....F...........
F7 25 36 F5 FC 5F DD 15 D4 A1 89 8E 6E 64 94 8D | .%6.._......nd..
CB 15 48 39 7E A7 8D 6F E2 49 40 C0 D4 94 D0 7C | ..H9~..o.I@....|
21 06 E4 25 4E CB D6 82 C7 5F 24 25 1B 79 81 76 | !..%N...._$%.y.v
08 BC 6D 0F BC 3F 8C 54 3C 82 8B A1 00 28 B9 0D | ..m..?.T<....(..
D9 DC F4 51 80 FB 3A 80 03 EA 94 F0 C7 81 A4 44 | ...Q..:........D
41 8B BC D2 33 95 1C 72 83 40 24 88 6A 76 EA 70 | A...3..r.@$.jv.p
E2 3C DD C7 7E 9F B1 08 3D 3D 87 05 70 16 66 39 | .<..~...==..p.f9
B3 92 38 D6 D1 A1 C9 7D 07 64 4B AD CE E4 1F 6D | ..8....}.dK....m
2C 1E 8B CF 77 F2 76 4F 4E 1F FB E0 A9 C3 C2 B7 | ,...w.vON.......
90 B7 10 9D 6B 5D 3A 1C 25 44 BF 53 9C 83 9D 74 | ....k]:.%D.S...t
F7 76 87 66 BA 83 20 CA 29 88 46 53 47 C1 6D 16 | .v.f.. .).FSG.m.
2B 9D 4C BD C9 BF 67 AE 37 4E 7A 24 03 62 B1 BD | +.L...g.7Nz$.b..
5A 0B 44 34 EC 47 C2 3B 56 F0 7F FB 91 A4 EB 75 | Z.D4.G.;V......u
4F 48 A7 73 86 60 EE B3 92 DB EF 5F 59 05 9F 7C | OH.s.`....._Y..|
99 88 17 67 9D 81 5A 71 64 1B 60 0D C4 EF C0 86 | ...g..Zqd.`.....
D0 9E 78 B9 33 77 62 C7 BF 1D 73 DD 16 8A 41 62 | ..x.3wb...s...Ab
7E 21 EA 51 AA A1 79 67 A2 88 42 0F 2B 59 2B 49 | ~!.Q..yg..B.+Y+I
4B B9 E5 73 4B 0E 21 27 34 6C 78 9D E0 74 05 06 | K..sK.!'4lx..t..
E4 12 C1 1D 07 A4 F1 39 98 01 5A 26 CF 09 A0 64 | .......9..Z&...d
A8 94 F5 61 65 6B E2 B9 05 52 E4 84 44 80 9B 88 | ...aek...R..D...
80 74 4C 8A 24 03 29 D7 97 B2 8A 8D 18 C3 67 2D | .tL.$.).......g-
0B 3D 6D E3 16 F7 0E DC E4 AF D6 B0 B0 47 7C DD | .=m..........G|.
F0 EA 60 D4 7A 96 DF 06 3A 29 B8 92 6F A2 CF 78 | ..`.z...:)..o..x
12 3A 65 80 6A A1 DC B9 06 15 87 D7 76 D3 15 70 | .:e.j.......v..p
D3 DA 54 33 B8 15 CE 30 02 2D 94 56 2F 7F 7D 36 | ..T3...0.-.V/.}6
3D A4 3C 7D F7 1A 42 04 96 15 3C A5 64 E2 F5 DF | =.<}..B...<.d...
0F C3 0F 03 F0 D0 C4 86 C5 D4 73 DE 51 E0 32 B1 | ..........s.Q.2.
56 7F FD 98 93 F4 D5 73 57 17 F7 5B EC 47 B8 3D | V......sW..[.G.=
4D 25 AF 0D 31 94 FE B5 73 BD 80 EE 07 7B 6A 79 | M%..1...s....{jy
C9 EF 2D 02 28 13 0D 86 EF E3 58 D4 14 AF A9 A7 | ..-.(.....X.....
7C 3E E8 22 85 F0 97 54 2E FA 3F 11 29 85 2F 66 | |>."...T..?.)./f
DC 75 6C A3 E3 AB 53 68 31 C2 C6 F7 20 9E 7E 6C | .ul...Sh1... .~l
49 83 8B FE 24 AF 89 6F 62 49 6E B3 18 AB EF CE | I...$..obIn.....
55 A1 35 F5 07 1E 84 B1 13 44 0B B2 20 A6 B5 28 | U.5......D.. ..(
C9 D4 FC 79 94 FA 26 73 D7 31 21 24 75 CF 5E 52 | ...y..&s.1!$u.^R
2B 9F 3C DF AA 29 AA 67 EB B3 48 2A 4E 4B D2 E4 | +.<..).g..H*NK..
57 02 20 7E A1 65 19 D0 B1 4E 58 FA B2 09 D7 36 | W. ~.e...NX....6
AC 03 A8 00 08 D4 7A B9 F0 A3 68 66 4D FC 98 39 | ......z...hfM..9
17 59 8D D1 CA 2B 2C A4 E4 87 88 BE 94 C9 60 39 | .Y...+,.......`9
21 8B 9F CB 8C F7 0C C4 28 9B FC 70 8E CE 34 89 | !.......(..p..4.
1F D6 5E 35 62 AE 9A 23 FC 05 24 E7 15 10 CA 03 | ..^5b..#..$.....
73 2F 06 23 3D 03 E3 00 8A 73 00 3A FC 63 3A 94 | s/.#=....s.:.c:.
3A 74 0D 93 A2 2D C5 BF EB 63 08 60 6E 90 CE 1D | :t...-...c.`n...
6D D5 2C 5B 8E CF 07 3A 27 E1 7D E8 41 75 AC 5B | m.,[...:'.}.Au.[
72 2F 30 2E C6 F0 4C E4 CC 5F 21 FF CD 92 49 83 | r/0...L.._!...I.
77 6C 8F A8 7C 5D 1E 2B A2 E9 F5 00 EE 60 00 21 | wl..|].+.....`.!
D5 E9 4F 7E B1 E3 3A 30 B3 A8 25 84 48 62 FC B1 | ..O~..:0..%.Hb..
23 F4 B3 31 5F D7 00 6E B5 C2 65 E6 74 7D 55 50 | #..1_..n..e.t}UP
94 7C 38 21 BE 7A AA 61 AE 20 09 CE 90 BD 32 5F | .|8!.z.a. ....2_
63 3C 63 A8 1F 23 67 A0 EE E5 42 8A 90 9B F3 B9 | c<c..#g...B.....
81 11 FE 1A 77 FC B7 D9 60 C9 F6 82 01 0B D5 3E | ....w...`......>
A0 D2 96 9E 8B CA 03 8F BA EC 2A 1F 0B 1B 4B 54 | ..........*...KT
6E 1D 64 6D 6B C7 E3 DC AB 0B 06 15 64 9B 5B C7 | n.dmk.......d.[.
BD 15 6C 1D B2 2E E9 61 A5 CF F4 EC 80 7B 9B 69 | ..l....a.....{.i
37 B8 97 7D 8C FA D8 0D 95 B3 7E EC C2 2B A5 E8 | 7..}......~..+..
3E 6C E2 18 5D B4 10 D7 26 B0 53 BC 79 16 B4 90 | >l..]...&.S.y...
63 CB 11 72 CF 71 49 6D 4C 25 07 D5 75 4F 11 C4 | c..r.qImL%..uO..
A1 6A 5F FB FD CC F6 DA CF 83 F0 97 E8 9B C2 CF | .j_.............

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
23 4D 5E B5 EC A9 8D 0C 7E 73 0B 59 BE 72 CE 7C | #M^.....~s.Y.r.|
FD B5 EC BC 9C 7C 94 97 19 49 AF 2B 1F F8 9E A3 | .....|...I.+....
E2 36 28 83 09 BC E9 89 01 D7 FA D3 37 A5 7D 5D | .6(.........7.}]
C4 DB FB 74 75 E4 7E 3B 3A 3E 2F 0D 10 E2 16 55 | ...tu.~;:>/....U
5F 45 EA CD 29 D9 9F 0A F4 4B A3 4A 62 D7 36 C3 | _E..)....K.Jb.6.
A4 88 BC 0B 0B 50 F9 27 D2 F8 56 21 7D 7F 83 5D | .....P.'..V!}..]
CD 9F 9A 3A DF 36 E9 A4 81 07 6D 96 17 C4 BE 80 | ...:.6....m.....
0B 5E 38 EC D9 9D 83 2B FA 49 E5 AA 26 EC 90 78 | .^8....+.I..&..x
0E E0 BC 02 D7 66 08 1E C8 E3 9F 51 5E D9 C5 9E | .....f.....Q^...
7C DC CE 2E 8C 66 38 C6 FA B6 86 D2 9E D2 80 52 | |....f8........R
1F DF 5C 49 FD 2D 40 E5 7A F9 08 36 9E C3 18 81 | ..\I.-@.z..6....
C3 6E D9 C4 9E 76 5C 90 61 19 4E 40 3B 80 51 D0 | .n...v\.a.N@;.Q.
C7 E9 81 82 77 D4 B1 DF B8 13 D2 68 D5 79 A0 5B | ....w......h.y.[
D5 70 8B EE 8F 72 A4 D2 92 85 AF 20 C8 3C FA 11 | .p...r..... .<..
4C FE C6 71 78 31 51 B5 BF A3 0D F9 7F B0 54 00 | L..qx1Q.......T.
77 46 86 65 95 89 EF 29 9E 07 A1 9C 15 B4 F2 05 | wF.e...)........
1F 58 48 26 1A 2A 1A 3A 9C 42 FC FE DA DA F4 31 | .XH&.*.:.B.....1
AD 6E E2 ED 10 F9 96 B3 21 98 BC 1E 8B EC 6C 4F | .n......!.....lO
9B 70 66 0A FC 95 E9 4D 05 00 BA 2D 6D AD F7 50 | .pf....M...-m..P
BA 63 4E 92 60 B4 28 A2 32 C7 FB 0D 81 60 64 0C | .cN.`.(.2....`d.
C2 82 A0 4D B6 C5 4E 20 9F 4D C5 BB 40 A2 E5 12 | ...M..N .M..@...
8B EE D2 55 94 E4 D4 91 19 69 B5 36 BC 93 02 AF | ...U.....i.6....
A3 3A A6 29 BE 6E C8 F5 91 DF 30 4A 1A 67 FB F4 | .:.).n....0J.g..
B7 9A 32 19 97 19 77 3F 51 23 CC A8 82 1C AC 7C | ..2...w?Q#.....|
03 74 C9 53 92 D9 53 7B A7 8E 92 86 1C 84 D7 3C | .t.S..S{.......<
6F 6D 0E 97 B3 DF 79 78 28 46 E3 77 56 53 FA AB | om....yx(F.wVS..
EA 85 B2 51 DC 68 8E B2 95 6B 1C 98 A1 30 AA 08 | ...Q.h...k...0..
96 8A 32 08 74 0E 85 50 EF E2 7B DD 9A F0 2C 74 | ..2.t..P..{...,t
26 3B 3E 97 83 F9 B7 F3 28 45 41 D8 94 C3 AD 0F | &;>.....(EA.....
4B FE EB 7A 24 28 3F 6A 0A FF C5 71 54 13 8C 88 | K..z$(?j...qT...
93 70 90 BC 08 71 9D 1D 72 D1 A9 DB 25 A1 05 E4 | .p...q..r...%...
FC F8 62 BC 39 33 31 CB D7 0C BC 10 92 AA EF DB | ..b.931.........
02 9B 38 D7 D6 06 5F 83 39 82 AF F6 69 FE 39 56 | ..8..._.9...i.9V
92 2A 90 C6 50 58 78 98 DD 00 61 B4 FE 66 41 42 | .*..PXx...a..fAB
9E 07 3B CC 1B F7 C7 C3 26 9C 05 11 4A 14 79 5C | ..;.....&...J.y\
E5 BF B4 66 24 42 D7 65 82 68 59 21 5C 04 50 FE | ...f$B.e.hY!\.P.
AB E1 28 DC E3 4A 3D 07 3A 4F 30 E3 FD 99 AA 27 | ..(..J=.:O0....'
53 F1 B3 ED 14 B0 9C CC A8 A2 F1 81 E9 F3 4B 12 | S.............K.
6D 76 06 68 C2 46 DE 20 12 7E 77 CF EB A4 31 67 | mv.h.F. .~w...1g
30 03 35 70 D8 CD 6A 2D 24 28 11 50 57 17 10 11 | 0.5p..j-$(.PW...
6F 5B D6 FD A8 CA 26 F9 A0 9E 4D BC A9 52 C5 76 | o[....&...M..R.v
5F 7C EA 25 E2 82 FB DC F1 3B AC B3 24 EF A6 BE | _|.%.....;..$...
46 C7 A2 B6 5B 50 77 86 26 14 73 61 12 E1 4F 95 | F...[Pw.&.sa..O.
77 59 2D 14 CD F9 01 15 D6 3D 09 43 F9 69 8C CD | wY-......=.C.i..
6F 44 15 3C 98 E9 04 B3 DD BB 14 B3 63 A8 92 EE | oD.<........c...
16 B9 FA 68 BF 25 3A F2 13 71 1B 45 75 69 2D 20 | ...h.%:..q.Eui- 
98 A7 AA B8 9A 97 53 AF 6A 57 EB 31 9F 3C BB 44 | ......S.jW.1.<.D
71 06 C1 7D BD F0 BB A6 A5 A8 4F BE D0 E2 3E B7 | q..}......O...>.
F7 FE 3B 4E 4E EB 0D 6E 3C FF 53 A9 80 07 4F E5 | ..;NN..n<.S...O.
5B 1C 6A AF 05 A4 58 13 6D 46 46 E0 A8 3B BF CB | [.j...X.mFF..;..
1D B9 10 24 80 4E 5C 9D 24 F6 2E C5 B9 85 D8 32 | ...$.N\.$......2
56 0D 5C 87 12 55 4F B0 BC 7C 7B 2E 0F B8 1A F4 | V.\..UO..|{.....
E8 EA 56 0E DB 52 6B 2C 35 26 20 C6 4E C4 98 72 | ..V..Rk,5& .N..r
02 6B 1F CF AA 84 A1 E4 11 9A 88 89 EA E5 68 0B | .k............h.
01 67 AC E6 F2 27 0F A5 DF 81 06 8D 0C FD 48 9F | .g...'........H.
31 5F 69 26 07 78 62 BA 91 5C 82 73 B4 90 68 94 | 1_i&.xb..\.s..h.
83 FE 30 99 6A DA F5 07 1B 21 F1 83 AC 5B 92 DE | ..0.j....!...[..
79 A3 09 FF BA 50 34 3E 59 E0 F2 FD 0F 6B 32 5B | y....P4>Y....k2[
CA AE 0B F5 23 45 C9 51 1B 4C FE FC 12 4D F2 9A | ....#E.Q.L...M..
F9 4D 2F CE B5 D7 C0 EC 6D 72 DD F2 B8 BB A9 15 | .M/.....mr......
04 D0 E2 D0 2C A9 53 11 5B 3F A1 13 7E 03 E1 D4 | ....,.S.[?..~...
A2 33 01 3F 77 B7 28 32 71 A9 3B 45 7A 00 B8 39 | .3.?w.(2q.;Ez..9
98 38 A1 2D CA 02 20 47 A6 4F 85 89 76 7E 93 90 | .8.-.. G.O..v~..
C9 8A F8 63 23 52 97 B2 A7 B4 07 EF 3B 66 71 49 | ...c#R......;fqI
A8 AD DF 9C 56 78 32 49 91 C5 BA 1B 71 3D 50 E9 | ....Vx2I....q=P.
5C 29 39 33 A4 30 D5 13 E7 45 62 75 1E 2D 81 31 | \)93.0...Ebu.-.1
50 22 BF 40 56 73 3B 35 18 B3 3C C6 A6 D5 1A 38 | P".@Vs;5..<....8
40 77 52 32 D0 D6 72 21 BF A8 B7 FC C8 85 17 BA | @wR2..r!........
1E 46 7E B7 18 3F 85 F6 BB 72 EC 3E 4A 7E 5A C7 | .F~..?...r.>J~Z.
5C 08 64 E0 91 CF 88 7F 35 70 6A 16 F2 01 88 92 | \.d.....5pj.....
CA F1 64 DF 70 98 67 A0 80 81 09 1C AA 30 F2 08 | ..d.p.g......0..
DD 00 83 50 B2 89 27 FA 68 65 C5 61 0F 7E 6A 34 | ...P..'.he.a.~j4
FF 08 54 CC 4E 2B 98 59 3A 48 2C C9 80 38 4D 62 | ..T.N+.Y:H,..8Mb
40 3B CC 08 BE CE 4C F2 FF 4B B8 83 43 DF 17 28 | @;....L..K..C..(
33 07 2C 80 6A 35 D2 6A 07 BC 6C B3 34 54 1E A8 | 3.,.j5.j..l.4T..
78 F2 12 B0 CC AD 20 A0 FF 92 09 A0 7F 30 18 74 | x..... ......0.t
35 56 BB 70 F1 FE CA D6 51 09 50 ED 7C 55 C3 5F | 5V.p....Q.P.|U._
75 35 A7 08 39 29 C2 7C 78 99 AB 0A CF A3 CC 24 | u5..9).|x......$
CC 36 E1 30 09 0D 77 B0 E1 05 02 FF 3F 09 9E 27 | .6.0..w.....?..'
A6 BD 4A 20 0D 2F FD D7 36 66 45 C7 96 79 17 94 | ..J ./..6fE..y..
98 1F A9 82 90 99 7D CB 5C B2 AC B1 D1 DE E6 D9 | ......}.\.......
CA 65 38 9E 0A 8D 97 10 4B 12 F2 3F 9F E8 E6 9D | .e8.....K..?....
CC 27 39 FB 2A 31 F0 8C 70 E3 65 DA 50 B2 03 FE | .'9.*1..p.e.P...
2C 8C 17 AF BB 27 7F 19 5A 47 58 1B 66 44 90 7A | ,....'..ZGX.fD.z
C7 43 1D 25 EA CD 4C 28 07 EA A3 29 94 51 38 1B | .C.%..L(...).Q8.
41 2F 63 8D C0 59 F9 F3 08 16 BF 43 88 D3 46 03 | A/c..Y.....C..F.
F9 19 C4 73 9A 08 3B 89 C1 5A 7E 88 0E 39 6A 18 | ...s..;..Z~..9j.
87 EE 5E 6F E2 48 17 AD 9C 50 65 FF E4 17 AB CE | ..^o.H...Pe.....
D2 9B 45 F5 09 C0 7E A3 42 77 A2 9E EB 11 00 58 | ..E...~.Bw.....X
A9 84 61 C9 70 48 31 65 44 4A A5 77 53 FF 9C 26 | ..a.pH1eDJ.wS..&

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
9E 4F 25 9E C0 C1 37 15 3A BE 50 FF 04 CE BF 86 | .O%...7.:.P.....
AE D0 18 9E AA 41 EB 5D 64 EE 0B 09 FC B6 3A 9C | .....A.]d.....:.
14 CD 89 D7 2B 13 85 12 BB 49 E3 AB 2C 06 66 DE | ....+....I..,.f.
CE B5 B1 BE FA ED 31 C6 88 37 74 66 62 C4 EE 01 | ......1..7tfb...
36 9F 8E 1A 3A E3 C7 B4 B0 BE 68 93 94 3F 80 EA | 6...:.....h..?..
B0 3E 55 A5 55 60 18 3F 4E 4D 20 98 51 2A 1E C5 | .>U.U`.?NM .Q*..
C7 9A 0E 69 F3 B1 74 31 4F AA EC 8F 84 EA 38 98 | ...i..t1O.....8.
87 32 A7 DB CF 58 F1 42 6C A6 9D AA 6A 3B 97 F8 | .2...X.Bl...j;..
02 1C D5 F3 62 88 21 33 50 99 D7 14 FC B8 10 31 | ....b.!3P......1
81 E7 5A FF 82 BB F2 C1 47 9E 9D 9E 11 50 13 0A | ..Z.....G....P..
1F FB 06 1D EE A4 40 29 D8 FF 7E 1E 11 E5 C4 B8 | ......@)..~.....
18 58 F1 8C 1A C8 4A CC B9 A5 B3 92 8E BB F4 11 | .X....J.........
7E 31 ED 27 59 4E 54 09 0C 48 93 F6 98 53 9D 9F | ~1.'YNT..H...S..
B9 E1 71 62 AA D5 E0 0F 87 79 67 D9 C4 00 6D DD | ..qb.....yg...m.
C6 19 40 59 DC D5 8B 44 C4 09 22 5C 2D AE 78 45 | ..@Y...D.."\-.xE
48 DC 5D B2 1F 9D 30 29 3F 6F 6D F4 D1 DF 9E F6 | H.]...0)?om.....
18 CF 38 62 68 57 A3 E9 EA 06 CE 7A 6B C6 C0 6D | ..8bhW.....zk..m
8A F7 4A 90 DC DE 07 18 AD 06 66 2F BB F1 F5 BC | ..J.......f/....
E5 3F 6D F3 51 28 0D 9B 06 F2 4C 53 46 33 55 49 | .?m.Q(....LSF3UI
ED 7C 40 77 55 47 ED 8A 33 1A 8F 44 1B 2C D3 D1 | .|@wUG..3..D.,..
31 DA 21 DC 66 28 EC D3 CF A0 E4 D2 75 D4 DE DD | 1.!.f(......u...
09 D1 C7 A2 46 DD 27 18 08 76 C1 97 5C E8 0A DF | ....F.'..v..\...
1A 62 60 17 B0 6E C4 08 BA C7 B8 8A D6 2D 36 2E | .b`..n.......-6.
AE 9D 6F B3 5E F9 8F 67 2B 3B DF 5D 3C F4 C2 B2 | ..o.^..g+;.]<...
8A D9 AB AF E5 43 8A 14 D7 D4 14 3D 1A 68 A0 59 | .....C.....=.h.Y
33 6B 2D 62 53 47 F9 45 FD CE 41 96 63 85 B0 2B | 3k-bSG.E..A.c..+
4F DC 8F 29 35 4B 49 89 24 5D 64 E9 E0 72 30 45 | O..)5KI.$]d..r0E
84 D1 87 00 42 31 0B 26 50 0E EC FC C2 D9 CB F7 | ....B1.&P.......
1F 7B 48 AA 17 78 F8 EB F2 49 C9 86 A8 E2 80 41 | .{H..x...I.....A
59 A6 E0 61 70 4E E4 B0 2F DA A9 DB 4D 81 1F 2E | Y..apN../...M...
37 94 64 98 DB 6C 6B 4C EE 54 E6 7E DD EF D3 12 | 7.d..lkL.T.~....
2C 55 69 B8 D5 20 E8 02 9C 6C 5B A8 54 78 62 23 | ,Ui.. ...l[.Txb#
64 B5 EE 6B 3A 2B CD C2 D9 2A 34 29 F3 56 54 DD | d..k:+...*4).VT.
52 07 68 AD 16 5E 1F 62 8D F8 2F 65 A2 CA 7E 41 | R.h..^.b../e..~A
76 61 98 01 3C B3 53 A5 76 FF 3F B9 52 F1 93 EE | va..<.S.v.?.R...
3F 15 C6 35 5D FC 9F D0 11 A0 B3 70 0E CF 80 06 | ?..5]......p....
75 8B D5 76 86 2A 22 4B F6 4A 21 5C E4 EC F8 6C | u..v.*"K.J!\...l
B3 C3 4F C2 0B 5E 29 7C 5B 51 97 DC 62 98 53 A7 | ..O..^)|[Q..b.S.
49 5B D7 66 4A 38 AC DF 15 34 92 65 01 68 47 AB | I[.fJ8...4.e.hG.
D6 8D 47 3D 20 6C ED 19 30 4B 99 B3 15 A3 35 3C | ..G= l..0K....5<
7C 00 85 81 69 93 0C 1F D5 CF 91 11 C7 DE 9B 54 | |...i..........T
15 92 E2 1B BC CC B9 4A 65 0D 7F F2 3B 21 C2 68 | .......Je...;!.h
A2 21 38 52 FB 0A F9 A7 E7 99 D6 A3 E6 4D 26 B8 | .!8R.........M&.
4D AD EE 2C 8D BA 87 0D 0E 5F DD 81 6F 9C BD CA | M..,....._..o...
A4 66 AD CD CC B6 2B 95 78 CE B1 3B 74 E9 6E 75 | .f....+.x..;t.nu
31 36 DB E2 E0 0B 38 C2 02 4B B6 A3 F4 8B 3C 06 | 16....8..K....<.
BE 1E 49 E0 87 5D 6D 79 26 4B 7D BE 97 EE 50 FA | ..I..]my&K}...P.
D1 7E B7 7D 83 0E 79 7F ED 0A 01 60 3A D0 79 21 | .~.}..y....`:.y!
65 4B 45 83 93 D7 FB C6 DB 40 23 51 BC EE 13 6B | eKE......@#Q...k
1D FD 59 E1 76 43 22 F0 09 31 77 09 DF DA 4A FC | ..Y.vC"..1w...J.
49 96 20 73 90 62 44 C3 BB A0 9E A7 07 94 08 F5 | I. s.bD.........
86 CD DE 5A E8 BB 17 0C 82 4A C8 01 99 CC 67 91 | ...Z.....J....g.
60 20 8A F8 9B F8 4C 21 1E 2A 4E DB D5 E9 BB DB | ` ....L!.*N.....
F5 57 23 80 CC 6E B8 DA A8 96 82 06 B6 6F 39 D2 | .W#..n.......o9.
A0 0A 08 8D 3A F9 D1 A8 82 F0 5A 7D 98 36 29 04 | ....:.....Z}.6).
AC 21 AB 8A F3 DD 73 2E CD B8 1C FD 53 7A EE 82 | .!....s.....Sz..
AB 6E E8 DD 6F F8 F7 A4 17 A4 4D CF 72 8A 7D 60 | .n..o.....M.r.}`
CC 95 FA 33 C3 5D FE 0B 06 21 F5 55 62 80 6D DF | ...3.]...!.Ub.m.
BF 74 26 7C 1B 6D 64 56 20 EE 73 EB BC 0E 6C 04 | .t&|.mdV .s...l.
A9 A6 75 48 75 44 FC 73 42 4C 98 DE 93 63 57 7E | ..uHuD.sBL...cW~
FD 16 E0 9C 1F 16 F0 D1 9E C1 BE 8E B4 2B 63 CC | .............+c.
C1 25 FD B0 F8 56 9B 22 ED A7 84 32 E8 0D CB 83 | .%...V."...2....
8E 08 D6 BB 17 74 66 08 C1 8F D1 B2 50 73 5A D0 | .....tf.....PsZ.
EF A1 69 E7 1E 49 F6 26 1F B0 C4 9D E4 7F 14 50 | ..i..I.&.......P
9A D6 F1 E7 B6 10 80 E5 46 16 C1 E7 A8 DA 93 B9 | ........F.......
2F 7F 8B 87 78 14 8E CB 06 50 C1 4F 21 28 EE 2D | /...x....P.O!(.-
F8 F1 60 4A C2 35 B2 4E 31 05 E6 39 A9 80 A0 9C | ..`J.5.N1..9....
56 37 8A A3 F4 35 79 AD CC F8 C6 F5 3D 02 4A D5 | V7...5y.....=.J.
92 B2 DD 25 03 75 3A EF C6 E7 20 B3 31 11 FD FC | ...%.u:... .1...
93 94 52 66 DA BF 99 34 7E 73 0C 2A 3C FC 62 CE | ..Rf...4~s.*<.b.
66 AF D6 9B 7A 64 80 BE C4 C7 94 DF F5 3E BA F4 | f...zd.......>..
A6 00 2B 76 07 DD 96 71 90 8F 60 C2 68 C7 50 FD | ..+v...q..`.h.P.
29 88 BF 85 FE 48 69 EF E6 96 82 87 2F 7B 06 4E | )....Hi...../{.N
6A 3D EC 6C 8A 7A 0C BE 34 76 7E 90 FD 89 56 30 | j=.l.z..4v~...V0
86 EE 0B B3 E7 BB C5 1F B7 54 87 11 EA 2F C6 6F | .........T.../.o
F9 D5 96 23 5C F9 B4 FE 9A 9F FD A8 78 0D 01 5A | ...#\.......x..Z
64 1B A1 6C F7 68 83 7E 72 A0 5C FB 3E D9 A4 B6 | d..l.h.~r.\.>...
7A 7A 90 A3 0C C5 FC E8 AF 89 CF 62 A2 BE BA 31 | zz.........b...1
46 37 07 43 10 8A 26 7A 63 81 2F 63 49 34 FB AE | F7.C..&zc./cI4..
D7 C9 71 2D 68 E1 E1 C9 0C 19 95 F1 FD 39 4E 0F | ..q-h........9N.
20 A0 56 32 FC 76 4B F3 14 7C 83 C0 4D 82 93 DB |  .V2.vK..|..M...
46 83 AB E4 D8 E0 2A 6F 71 9F 5C 78 86 B8 2D 61 | F.....*oq.\x..-a
7A 8E 23 24 5D 7E 6F 81 AD 01 0C 5F BB DE 96 20 | z.#$]~o...._... 
51 41 D8 01 2B 2A 16 9D A5 8E E4 C0 A7 2F 4A 7A | QA..+*......./Jz
24 0A 19 DF 97 F1 8B 21 B4 33 8B CA 93 81 D4 8F | $......!.3......
A0 46 69 30 D8 F2 6A 84 EE 72 CA 7D BC C1 E1 C4 | .Fi0..j..r.}....
88 21 F1 69 24 E0 8D DD F7 7F D6 33 4C 31 2E 57 | .!.i$......3L1.W
22 CF B7 70 89 A5 BE 5A 99 87 97 F9 E2 4C 2F 0C | "..p...Z.....L/.
D8 F3 EC 5D 4F 35 7A 14 AC D4 9B FB D8 DD 7F E2 | ...]O5z.........
89 D9 9A BE 35 C3 76 40 60 DE D6 BB 99 EA D1 2F | ....5.v@`....../

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
BC 51 63 A7 B6 79 CF 8F 96 E9 C6 43 E2 84 3A 30 | .Qc..y.....C..:0
84 58 DE 3F DB CF F3 33 49 09 B4 FE 1E 65 FF B8 | .X.?...3I....e..
9E 4B 0C 21 66 21 C4 81 4E 14 4B 71 71 69 B9 1A | .K.!f!..N.Kqqi..
54 29 8E 0E C4 FC DF 47 80 CF 61 77 C5 EC 76 C9 | T).....G..aw..v.
D0 FD 3C 9F 3F D1 F7 09 25 D8 62 65 E9 5F 71 EB | ..<.?...%.be._q.
7C C7 4E BC EA D3 5A 04 98 68 01 49 FF 77 01 C0 | |.N...Z..h.I.w..
A5 BF D5 58 70 B9 0A BD 79 A9 52 25 61 2D A7 EE | ...Xp...y.R%a-..
EC 89 18 60 10 78 44 59 59 1F 04 0E 4E A7 F9 19 | ...`.xDYY...N...
75 26 74 79 73 53 15 00 CB 83 E9 11 82 80 36 92 | u&tysS........6.
17 B9 8A E3 F9 40 59 4B 85 28 60 7F 16 37 12 0A | .....@YK.(`..7..
38 D7 C8 EB CB 2E 0C 7F 1D 2E D3 DF A9 19 0D C3 | 8...............
27 80 27 8E 59 1B BD C5 80 57 16 88 E1 8D 60 1D | '.'.Y....W....`.
00 0C AB F8 8A 62 70 EE EA 1D 11 C4 89 FC 23 93 | .....bp.......#.
39 F7 59 B9 D9 DE 2C A5 3D B3 A7 29 D3 B9 08 63 | 9.Y...,.=..)...c
54 E5 2C 01 A8 85 2F AC D1 58 06 8C AE 3A 80 6A | T.,.../..X...:.j
6C 1F FE 52 66 7C CC 45 8B 74 80 6E AF F3 FF 8C | l..Rf|.E.t.n....
7B 89 CC DC 8F 66 29 FB 67 68 1A 27 93 CE 72 A7 | {....f).gh.'..r.
47 F9 A9 4F 34 C1 F7 1C 3E 48 4C 23 74 34 EF 3E | G..O4...>HL#t4.>
0E 0B 35 39 28 C4 D6 CE 33 37 32 0E C8 8C 3C 49 | ..59(...372...<I
42 FA 37 4C C4 34 C3 08 B7 16 07 E5 F8 52 A5 99 | B.7L.4.......R..
85 64 13 D6 35 F9 BF 0A 7F C2 F5 FA 38 A0 40 3C | .d..5.......8.@<
4E 63 E8 EC E6 CD 4B B8 54 88 B2 81 B7 9D 4A 22 | Nc....K.T.....J"
0E 20 68 DA F9 41 F7 09 07 26 18 0E 90 C9 80 89 | . h..A...&......
69 8A 2E D2 A3 E4 F8 D9 FA 67 B1 25 E3 BD 60 8F | i........g.%..`.
4D 86 A3 14 C7 E1 D7 7A D6 03 B3 22 9C 6F 75 E5 | M......z...".ou.
FA 9B 93 63 96 07 1B 6F 33 8D B6 D7 5C 57 36 A0 | ...c...o3...\W6.
DD A2 DC C9 7F E2 EA 7A 0A 9D 01 41 37 77 E0 BD | .......z...A7w..
08 C5 2E 03 2D D0 32 BF D6 86 89 95 87 D8 D2 91 | ....-.2.........
C2 F5 03 C0 7D F8 32 6C 14 B9 32 88 10 CC AC 99 | ....}.2l..2.....
75 CA 30 82 4E 71 A9 BB 65 95 86 43 AA 33 0E 9B | u.0.Nq..e..C.3..
F2 F9 96 85 E7 6D 73 A5 CE 57 2F FE DF C6 47 4B | .....ms..W/...GK
A8 28 32 DC CF 05 E2 2C A0 67 5F 5E 8A BB E7 FC | .(2....,.g_^....
11 C0 8F CA 42 82 C1 6B E8 AD AE AF 65 18 D5 E8 | ....B..k....e...
CD E0 DC 0B 6D 61 A7 F8 1B 6B 0C C5 1E 80 73 BB | ....ma...k....s.
82 39 46 43 50 35 F8 A5 FF EF 04 1A 48 23 FA CF | .9FCP5......H#..
89 1A A1 34 07 44 80 9C E5 E9 9E 53 26 E7 78 0D | ...4.D.....S&.x.
70 54 15 99 99 9D 98 E9 B2 BC 17 B0 8C 05 6F C0 | pT............o.
4C 54 A0 F5 5B 8D 5E C9 CB D8 77 1D BF 47 51 36 | LT..[.^...w..GQ6
72 14 02 BD 18 D3 D7 31 C3 12 12 8D 94 0F F1 33 | r......1.......3
2C 7F 90 CD EE 17 77 B2 98 97 B9 88 6A 56 FD 04 | ,.....w.....jV..
98 07 90 42 03 BA 94 6D 19 C8 72 55 3B 46 EE 4D | ...B...m..rU;F.M
8B 81 01 5E 5D 56 BE A9 87 08 26 0F 12 8C D1 C0 | ...^]V....&.....
28 30 68 E4 35 88 8E FB 7E BD 14 C7 E5 D2 41 1C | (0h.5...~.....A.
C2 E4 B9 CF AC B8 23 2B 02 57 D8 9C D9 F4 31 32 | ......#+.W....12
1E 65 71 AF 14 25 B6 CE 3F 04 79 55 33 71 79 8C | .eq..%..?.yU3qy.
9C 66 2A 3C 24 14 96 60 45 9F 0F CC 6A 93 9F 50 | .f*<$..`E...j..P
9A F5 F4 1E 33 46 DB AF 5A AE DC D1 D5 68 A2 45 | ....3F..Z....h.E
70 23 8A 28 F1 9A A2 76 0D 61 14 34 02 C2 99 25 | p#.(...v.a.4...%
63 66 F5 57 82 B0 A5 8C D3 9C E2 C9 F1 A5 1F 8E | cf.W............
2D 7F 34 13 64 B5 40 24 2C 8B 99 30 5B B5 56 D3 | -.4.d.@$,..0[.V.
54 13 8F 57 35 0E 15 C9 25 DD AF F6 BB 4A 78 35 | T..W5...%....Jx5
96 9C 7E 9F D9 62 2B EC 23 D4 08 15 44 44 B5 85 | ..~..b+.#...DD..
10 24 B1 FC 3B 80 9B 3C 3C F1 C8 92 93 11 8E 3F | .$..;..<<......?
EA D7 5C 40 AE EB A3 B2 D0 51 CB 3E 50 62 FC 40 | ..\@.....Q.>Pb.@
A6 29 66 E1 B5 52 A7 DD F2 EE CA 4C BB 8B 2D 57 | .)f..R.....L..-W
94 E5 5D 1C CC 68 67 28 13 CD B0 0D 92 2E 51 B8 | ..]..hg(......Q.
92 0A 00 0A 10 C8 85 D5 FA 90 12 16 D5 7A F5 E0 | .............z..
19 8B 94 73 0D B9 94 0B 32 7E 16 1C 14 6D 6A 6E | ...s....2~...mjn
20 1D 5D 72 86 D6 38 E2 5D 49 CA E5 7E 11 07 DE |  .]r..8.]I..~...
56 1D C7 A4 CD 70 49 27 DF A8 2E DF 29 4A 0E F5 | V....pI'....)J..
F3 61 44 ED A2 7C B8 BD 20 A7 33 AB 78 FD CD 69 | .aD..|.. .3.x..i
3A 3B 32 A5 6B 50 33 60 BB 4F 01 54 37 6F EF D7 | :;2.kP3`.O.T7o..
3D 5C 18 E8 46 5B 59 9E E0 19 E8 20 63 4C 28 7E | =\..F[Y.... cL(~
F4 49 38 FC C8 93 6A 93 DE 0C C3 E7 5F EE A1 B1 | .I8...j....._...
A8 4D C5 C9 8A D6 FB 5B 5A 27 C6 6C 5E 04 F8 BB | .M.....[Z'.l^...
7E 7C 67 B5 D0 76 4E 4E 66 EC F5 64 D2 9E E9 81 | ~|g..vNNf..d....
1A 50 1F 41 35 94 64 7F F5 F0 F6 65 E8 03 44 ED | .P.A5.d....e..D.
74 E3 09 DA A0 45 71 A1 4B 1E 98 AD 3D 70 3C 7E | t....Eq.K...=p<~
BF BC 9D 6D 84 F2 AB BE 9A 10 8E 67 24 1E 8E 60 | ...m.......g$..`
03 EA 2A 38 43 14 3A DC 48 9D 55 2A 33 9E 92 7F | ..*8C.:.H.U*3...
8D A9 97 74 36 F5 7F 90 BF B5 BE 24 6D E0 D4 F8 | ...t6......$m...
48 10 84 3F 0A 58 FC 0E 8C 14 5C DE 66 CD EE D7 | H..?.X....\.f...
DC 4E 15 48 04 CB CF 82 84 25 5C AD 6B 93 63 5B | .N.H.....%\.k.c[
58 C3 AD F2 13 F7 1B 82 29 E9 6D BC C0 05 02 8E | X.......).m.....
1D 11 16 8D 47 36 19 55 AE 13 44 F5 5F 58 05 EE | ....G6.U..D._X..
59 62 FF D7 89 A6 54 C1 74 DE 2F C8 3B B6 1B 3F | Yb....T.t./.;..?
40 0C 8D C8 A3 9D B7 33 D0 D0 08 B5 19 B1 89 93 | @......3........
B9 CA 06 9A C3 50 B4 CB 63 82 06 4C F1 C1 1F 22 | .....P..c..L..."
8E 62 B4 C9 DD 16 E9 0B 55 4E A1 26 D7 2F 51 F0 | .b......UN.&./Q.
CE 1B 13 A5 04 84 B0 0C 14 F6 4B 49 FA 7D CD 9A | ..........KI.}..
73 29 62 D4 4A 08 77 9E B5 CB FF 73 14 57 3A 34 | s)b.J.w....s.W:4
40 42 08 FD 6E 10 F1 13 64 0A 74 4E 2E 6D 8E 63 | @B..n...d.tN.m.c
75 3C 6B 59 7A 8F C5 76 70 B1 09 8D E1 FE F8 66 | u<kYz..vp......f
FF 7E 18 C3 73 4F 22 01 15 1E CC 9E C3 D3 7F EA | .~..sO".........
97 50 8A AF F4 7F 2E 57 A8 6C F8 70 EE 6B D2 12 | .P.....W.l.p.k..
86 EB D9 FF BB 0D 00 28 EA 09 29 03 31 9F 92 10 | .......(..).1...
59 CC A7 5D 05 99 7F F5 BF 6C 61 41 35 23 7D 51 | Y..].....laA5#}Q
E3 A6 87 5F BE C4 67 25 5B F4 5B 21 21 C2 6F 8A | ..._..g%[.[!!.o.
9B 8F 37 A2 2B 02 28 38 5B 25 47 21 39 73 86 41 | ..7.+.(8[%G!9s.A
44 AF B1 22 96 FD 1D 6F 9C F3 01 60 BB AA 46 57 | D.."...o...`..FW

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1007 bytes of data:
A0 4E E0 58 00 09 AB 09 6B 68 5E 67 44 93 3A 9F | .N.X....kh^gD.:.
F2 A3 4F 25 A4 7A 28 1F 8F 10 5A 6F BF C3 00 5A | ..O%.z(...Zo...Z
F6 38 CA 46 D6 60 97 4F 6C 51 A8 E8 9B 91 C9 30 | .8.F.`.OlQ.....0
1D C7 D9 21 4E DC 8D 7F 93 36 9F BC 4B 52 D2 80 | ...!N....6..KR..
BA FA 49 9B 5D FE 00 3B 6C 11 79 7E 61 7D C6 BE | ..I.]..;l.y~a}..
C2 1C A6 95 26 0C A0 80 18 70 BE A3 0F DD 1F AE | ....&....p......
6C 7E BE 71 AC B7 53 BD 44 7B A1 7E 92 20 C0 59 | l~.q..S.D{.~. .Y
C6 BC DC 43 64 B5 B3 E0 11 26 07 E5 B6 A2 41 95 | ...Cd....&....A.
8E DB 4C 35 40 AD 39 C8 D6 7E 4C 27 D4 7A 7B 7D | ..L5@.9..~L'.z{}
88 80 78 85 2E 9C A3 3C A4 F1 E6 4F 83 56 25 03 | ..x....<...O.V%.
3B 5D 49 F7 F2 42 70 F8 61 AE D3 01 18 ED EB E9 | ;]I..Bp.a.......
17 BD 76 95 8C AF 85 E8 DD 95 5C 31 46 98 DC 1D | ..v.......\1F...
61 FB BD 38 89 A3 60 1D 88 2A CF 18 EA 9A 5A 6F | a..8..`..*....Zo
10 ED CA B3 B6 3B C7 C2 D0 44 31 7E 5F DB E5 38 | .....;...D1~_..8
FF CC 63 8C 0B 01 65 5E 5C 65 24 35 8C EF 86 58 | ..c...e^\e$5...X
F0 47 46 30 2F 9C 69 BB B6 44 9D A4 BD DA C5 8F | .GF0/.i..D......
02 92 2E BF 05 44 DE 31 5E DA D2 54 2A A0 E6 23 | .....D.1^..T*..#
3C 6B 4D 21 72 35 67 E8 05 0E 78 8C 52 0A 64 5F | <kM!r5g...x.R.d_
10 BC 21 4D 15 F4 F9 B0 C6 77 7C 67 25 D9 68 33 | ..!M.....w|g%.h3
BE A8 9E 0C F5 B0 D9 A0 BF 1C 0B 4B D2 FC 3E 45 | ...........K..>E
8B 23 2E B6 2D E3 E2 15 1D 5E 57 BE 17 94 E9 F9 | .#..-....^W.....
CC 59 45 2F 3D 23 17 8F 80 C1 55 22 2E DC 49 17 | .YE/=#....U"..I.
44 26 70 67 34 F7 0B 2D AD D7 76 27 54 29 C6 D8 | D&pg4..-..v'T)..
EC 88 76 23 6A 7C 9C FD 17 6A 37 07 BA 2D 6D 82 | ..v#j|...j7..-m.
45 4E E1 94 1D 1A 71 81 87 F4 FC 2E BA B0 22 F2 | EN....q.......".
15 72 D8 D9 3E AC 91 22 EF 5B B8 7E 64 0A C7 92 | .r..>..".[.~d...
D9 83 CD 40 FB 02 E5 18 0C 99 60 C4 FA C9 AA A5 | ...@......`.....
16 85 17 D9 25 C4 1F 9A 27 26 E6 2A 48 F7 B9 F2 | ....%...'&.*H...
19 54 F2 65 3F 4B 5E 10 51 5E A1 1C 63 C8 00 F2 | .T.e?K^.Q^..c...
41 D6 CD C7 0D 62 3C 1F 2E D1 91 7A 1F 2D EF 0F | A....b<....z.-..
A5 A0 52 B6 FD DE E3 D5 77 76 5E 6A 9B 48 4A 4E | ..R.....wv^j.HJN
30 75 9A 78 4A 01 6A 83 49 72 8E 27 31 68 C9 4E | 0u.xJ.j.Ir.'1h.N
31 E6 23 28 52 FD 30 78 20 F4 AE FF 5A DB F3 FB | 1.#(R.0x ...Z...
07 10 4C 30 34 7B E5 19 69 DA 2C 24 90 64 5E D5 | ..L04{..i.,$.d^.
02 64 67 85 82 82 3C 8E AF 8D 2B 3E 8D 59 BB 32 | .dg...<...+>.Y.2
5D A7 5E 7F 2B 61 38 EE 8A 52 8A 3B 62 EF 91 18 | ].^.+a8..R.;b...
15 AF F2 80 07 D7 C3 AC 1C 69 04 7B 49 28 A8 34 | .........i.{I(.4
F3 AB EE B2 7C 9B EB E3 63 5C 40 C7 1A 1B F1 8A | ....|...c\@.....
0B 00 45 E5 E3 FA 29 A3 00 5A 32 92 E2 32 6D F4 | ..E...)..Z2..2m.
AD 60 41 15 CF 60 78 74 1C F4 C6 F2 DA 6C 4F 23 | .`A..`xt.....lO#
D3 F6 B0 39 BA 01 E0 C3 85 08 05 6C 5B E9 61 C0 | ...9.......l[.a.
43 7E 6C 27 AE 40 55 FA 36 46 5B FB 39 D1 66 BA | C~l'.@U.6F[.9.f.
80 2E EF 64 F7 40 78 5F 99 0D D0 73 8C 06 D7 8E | ...d.@x_...s....
86 3F 99 E9 16 C7 83 E4 C7 7A DB 1A 58 C4 EF 99 | .?.......z..X...
1A 33 96 2E C2 A4 C6 54 A9 B0 7F 6B EC AF 81 A2 | .3.....T...k....
98 3A CA B3 3E E6 73 04 C3 15 B2 7E 24 03 56 C4 | .:..>.s....~$.V.
F5 B3 29 CD 70 D9 E2 73 E2 E3 50 94 4F 69 49 A5 | ..).p..s..P.OiI.
91 EA F3 69 19 CC 4B 50 12 81 A4 8E 39 6D D0 A1 | ...i..KP....9m..
8E 33 16 94 C4 65 8E 17 B1 F3 33 DD D6 61 89 12 | .3...e....3..a..
70 D7 09 47 7F 92 4E 1D B2 D1 4D 93 95 3B 3C 69 | p..G..N...M..;<i
42 D9 AD D2 63 95 7B 5B 93 AC BC A1 7A 58 03 EB | B...c.{[....zX..
71 32 E7 67 07 07 C2 CE 40 66 CC A8 E8 E5 C7 AC | q2.g....@f......
DC DE 59 24 7E 2B 61 4A 8C A2 1D BA A0 80 22 03 | ..Y$~+aJ......".
1D B4 FC 62 19 0A B7 54 BC 47 75 27 1B E0 AE B6 | ...b...T.Gu'....
F8 51 98 28 66 59 A9 03 C5 D4 F6 D3 FA F5 BB 09 | .Q.(fY..........
96 E8 4B AF D5 9E 63 9E 38 B4 78 7A 0E 54 49 A6 | ..K...c.8.xz.TI.
D3 AD DA 98 70 75 CD 79 65 B1 82 E2 22 F8 69 55 | ....pu.ye...".iU
B5 9D B4 09 10 B8 8B 23 AE 91 75 0D 85 80 44 02 | .......#..u...D.
8D 71 51 4D 1F D5 28 A7 04 B6 17 03 03 00 40 D9 | .qQM..(.......@.
C3 7E 78 D4 85 98 72 AE 9B 27 09 1C 10 ED 30 DD | .~x...r..'....0.
37 9D B8 D5 78 C1 AA AC 5A A5 A3 FC A1 5D CB 22 | 7...x...Z....]."
7B 7E 01 F0 E3 61 9E 6F D1 E6 43 A5 63 84 2F CD | {~...a.o..C.c./.
51 67 61 EE CE 7E 34 99 6D CB 63 CF 5A 6D 2B | Qga..~4.m.c.Zm+

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
17 03 03 00 40 38 5A 9E E6 33 D1 C5 C5 B7 3E B6 | ....@8Z..3....>.
2C AA E5 0B E6 84 B8 E5 87 AE 75 F0 B2 95 59 BD | ,.........u...Y.
DC 04 65 11 24 D1 49 DE D1 81 91 BD 02 25 25 A2 | ..e.$.I......%%.
DD DA 65 4F F5 00 4B EF C1 A7 ED 88 EA AF 5E 46 | ..eO..K.......^F
F4 0B 13 69 EA 17 03 03 0D F0 31 64 E6 71 01 DD | ...i......1d.q..
18 D5 A1 89 45 F8 24 8D 5A 11 D8 80 65 40 ED 52 | ....E.$.Z...e@.R
AB BA 87 BB C5 2E 0E A9 FD D9 D2 4F 13 42 47 45 | ...........O.BGE
33 F0 3B 6A 7E 07 0A FF 7B B8 72 5E 3E 28 38 9E | 3.;j~...{.r^>(8.
D3 8D 83 97 EE 29 32 FE 91 72 07 A4 91 E2 83 D8 | .....)2..r......
AA 24 5D 47 F7 13 7F 49 6B A9 BB 37 6F 76 AA 03 | .$]G...Ik..7ov..
F1 BB EA 22 A1 83 F3 FC 9D 16 A6 BB 44 92 B8 41 | ..."........D..A
54 19 EB 83 26 54 0A E5 8D 81 B0 7E C3 D0 9E 0A | T...&T.....~....
70 12 95 0A 11 95 75 40 D6 5F 8A 20 B1 D1 86 C9 | p.....u@._. ....
F0 85 01 1E D3 68 7C 8B 74 5E 4B 47 0B 9C C8 E0 | .....h|.t^KG....
8C A0 97 03 DA 8C 12 D8 D0 9E 71 05 FA C2 D7 42 | ..........q....B
C4 74 13 08 13 B6 DD 4E DA DC 9B 96 2B 83 AC F2 | .t.....N....+...
45 6E B7 1C 16 64 76 DE 84 20 B0 90 04 D1 37 11 | En...dv.. ....7.
27 24 EA 6A A0 11 52 F5 2E 0A 0E 07 6B 91 17 8A | '$.j..R.....k...
F6 B1 9F A6 48 CA 69 95 6F 64 A1 FC 7C 92 7E 13 | ....H.i.od..|.~.
95 0E 00 94 9B 50 84 FC 92 34 9B 99 9A E9 60 39 | .....P...4....`9
21 B3 82 8F 8E 94 38 1A 6E 16 68 73 0B 9D 7F 0A | !.....8.n.hs....
9E 0E 1B 4C 0D 66 FB 34 F6 98 CF AA CD E3 AE F9 | ...L.f.4........
93 E3 4D 90 23 91 84 09 E7 41 3C D4 2A 6E EB E1 | ..M.#....A<.*n..
2D E1 2D 8D FB E3 7A 40 26 BA 46 1B AA EA DB 63 | -.-...z@&.F....c
4A 04 6F AE 42 8C AF 98 2E E7 01 6B A7 DF 02 BB | J.o.B......k....
03 4C 0A FE 99 55 4F 75 9A AF DF 5E 96 02 4D 76 | .L...UOu...^..Mv
AF 0D 1D 71 91 41 CD 2C 03 28 CD F7 FA 26 31 F6 | ...q.A.,.(...&1.
F9 8A BE 96 22 91 A3 78 A9 16 FF EF 25 42 C5 64 | ...."..x....%B.d
6C 1C FF 59 72 82 41 3B 6A 37 6A 80 AD 31 D1 A2 | l..Yr.A;j7j..1..
F1 90 42 04 12 16 31 05 8B 7A BD 98 F1 E7 8B 9A | ..B...1..z......
B0 A8 DA 8C 24 8B 57 01 BB EB 3F CA 2C CB B0 A5 | ....$.W...?.,...
46 A9 0D 41 BE A7 86 4E A3 84 F0 90 44 4F 34 19 | F..A...N....DO4.
22 BB FB 71 A1 00 73 44 51 C8 82 00 93 71 F3 F9 | "..q..sDQ....q..
59 48 94 85 A9 D0 96 B7 EA 27 C3 86 EA 0D AA E1 | YH.......'......
A8 01 8B 5B 21 38 C7 43 85 D3 C5 85 6D 8F D2 2C | ...[!8.C....m..,
44 0C 1F F8 08 4F 2D 12 B8 6B 7D F5 1C 42 1C 6B | D....O-..k}..B.k
9B 2F A3 FF 0B 01 19 29 A8 A9 5E 67 69 DE 1E CB | ./.....)..^gi...
0E 31 37 14 7A 55 17 3F 65 D1 E4 C1 6C BE 2D E7 | .17.zU.?e...l.-.
5B D5 D3 70 4A EE C8 78 02 44 61 78 1F DB A6 52 | [..pJ..x.Dax...R
5F AC AF 45 E9 00 D3 05 C5 48 00 6D AC A0 6F 8D | _..E.....H.m..o.
01 43 78 4C 04 95 5D 3B 9A DC 47 8E 3A 64 72 51 | .CxL..];..G.:drQ
90 52 A0 13 BD 5C 54 71 B4 B0 97 84 BB 23 B1 2C | .R...\Tq.....#.,
36 94 B4 4D BB FD CA 38 0A B1 C9 09 60 E0 F6 CA | 6..M...8....`...
82 44 22 25 AB F2 91 2E B4 8A 54 99 30 2E D1 53 | .D"%......T.0..S
04 FF 06 0E 42 3D 3F 4C 1F 20 5E 7B C0 90 99 74 | ....B=?L. ^{...t
CA 66 28 20 45 B5 5C 59 D7 EB 78 C8 48 4C 14 47 | .f( E.\Y..x.HL.G
B0 82 BE F1 4D 86 00 20 52 4C DB 52 61 2A 1A D2 | ....M.. RL.Ra*..
CB 16 BE DF F3 31 C9 61 35 14 BD 25 5D 72 F4 91 | .....1.a5..%]r..
76 A9 1E 05 06 F6 68 74 5B AC 80 49 2F 30 AF 84 | v.....ht[..I/0..
9C 8B 5E 35 16 19 5A 95 15 E2 A4 C6 94 BD 87 4B | ..^5..Z........K
A0 8E 09 8C E9 0B 5C 92 6E 9E 65 D0 37 A2 21 B8 | ......\.n.e.7.!.
A3 F9 7D FB 40 3A 27 2F 90 CD 04 1F 82 22 A1 07 | ..}.@:'/....."..
78 24 15 F8 36 A0 E1 EB AE 95 DC F1 22 ED C3 61 | x$..6......."..a
FA 0F A9 90 EE 87 0D 8D 5A 7C C2 15 CB E5 6C 11 | ........Z|....l.
6E 5C 8E 80 95 68 FE E6 EE 10 18 02 FF 73 7E E7 | n\...h.......s~.
BB A6 C0 5F 8E B2 3C AF 94 AF 7B 2D 73 F2 4D F9 | ..._..<...{-s.M.
84 E5 F5 37 20 CF 83 D7 15 7C DD 0E DD 24 D0 D3 | ...7 ....|...$..
5E DE 64 5C 3D EC 06 A8 76 EF 20 CE 25 46 32 F0 | ^.d\=...v. .%F2.
99 FB 82 B8 F5 B8 98 40 EB A6 3B 8A 50 12 29 85 | .......@..;.P.).
7F F9 E6 C0 16 21 E1 4B 6C 5A 6E D8 BC 80 87 D4 | .....!.KlZn.....
EF 88 E4 75 3E 34 35 B4 86 49 EE DA A7 65 44 50 | ...u>45..I...eDP
E7 D8 02 01 87 38 05 24 0B D5 29 C0 26 D3 0B C4 | .....8.$..).&...
63 F5 BC 9B 4F 86 34 78 90 9A 03 8E 78 BE CA 31 | c...O.4x....x..1
FF A4 7D 19 AC 91 A6 58 04 A7 D0 29 4E 4B 20 82 | ..}....X...)NK .
B0 05 B7 86 5C 4C FB 0A A4 82 1B 86 7D 52 48 E2 | ....\L......}RH.
60 AD 2D 61 91 3D A1 61 C3 66 E6 31 DF 90 81 58 | `.-a.=.a.f.1...X
5A 28 16 95 F5 55 15 8C 9B 4B 27 A9 A3 6D EE 89 | Z(...U...K'..m..
5E FE D9 FF 6C 5B C7 88 55 F3 92 01 E9 B3 3B 61 | ^...l[..U.....;a
B2 2B 14 F4 40 2D 88 55 B6 FA 23 BE 62 5D 9B 6D | .+..@-.U..#.b].m
0D A4 53 8C AB 8A 24 49 BC C1 AA 07 39 C5 C5 75 | ..S...$I....9..u
51 9F 34 CE 02 D0 8A 7C 06 4C 42 C2 0F 27 63 18 | Q.4....|.LB..'c.
5A 8F 49 4E 72 14 82 21 A1 90 32 9A 26 6C C5 86 | Z.INr..!..2.&l..
FA 4B 9F 7F D9 15 8E B2 4D 19 F7 83 2B E4 B7 DE | .K......M...+...
7C C4 19 A5 11 64 F9 AB FC 50 78 1B 41 FD 45 01 | |....d...Px.A.E.
8F DF 71 72 0B 47 CB 58 CA BB 77 B7 A1 B7 4A 5F | ..qr.G.X..w...J_
93 28 71 A1 0E F0 56 64 D3 95 85 30 A4 39 54 23 | .(q...Vd...0.9T#
7F 7E 23 97 4A 0C D6 F4 D1 C2 78 38 74 AB 30 0F | .~#.J.....x8t.0.
D5 E2 8F 90 F7 A4 73 B7 5E 9D 2D 26 78 C3 17 F1 | ......s.^.-&x...
D6 5F 30 B3 ED A6 63 BE 89 E6 70 C9 8A AA F5 59 | ._0...c...p....Y
AA 1F 13 E5 2E E2 30 F6 01 8A FD 76 9F EA 97 7E | ......0....v...~
81 BF BC C8 7C BC 2D 90 3E 5D CC E0 DC 12 ED E8 | ....|.-.>]......
2E A1 5C E9 6B C1 AD 34 40 48 72 33 03 65 8F 96 | ..\.k..4@Hr3.e..
9A 40 0E 38 25 F5 1D 10 F5 D8 7A AE 82 74 7F 9F | .@.8%.....z..t..
F6 9A 61 3E BE 6F CF 66 F2 8F C9 D2 15 0A EA 3C | ..a>.o.f.......<
F0 FE B2 C9 97 0A 62 4F C4 B6 80 7B 95 DA 09 DE | ......bO...{....
C9 D2 CA 6A 60 E8 C7 36 6C E9 5E 16 48 AF 54 FD | ...j`..6l.^.H.T.
76 BC D1 49 41 AE 2F 4F 40 FE 66 90 99 EF B2 EE | v..IA./O@.f.....
01 7D 33 C2 F9 24 E6 4C A7 AB 52 3E EC 5D C0 40 | .}3..$.L..R>.].@
96 9A 4A 89 CF A3 FF 08 3E 42 5B BB 05 10 EF A7 | ..J.....>B[.....
0B 4A F2 0B 82 7A 89 95 84 0B 4F 45 B2 FB 98 38 | .J...z....OE...8

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
47 68 9B 53 BC 8C BA CE 26 3F 7F 53 DE 10 5F AD | Gh.S....&?.S.._.
A1 EC 5A 9E 7F 15 8E 1A 8A 42 E2 CC A9 65 70 C4 | ..Z......B...ep.
63 A3 E4 08 7A 74 D9 D6 DB F9 9F 46 31 51 51 12 | c...zt.....F1QQ.
2D BB 58 95 4B C6 C7 B5 28 5E E7 86 AC 78 3F BD | -.X.K...(^...x?.
DB CB DC CF 16 22 0D 4F D2 81 9D 15 78 50 C1 0F | .....".O....xP..
A3 7D D1 5A 28 FC 6E BD CC 6D 46 E3 D3 4E AE E3 | .}.Z(.n..mF..N..
EE FE A4 85 F8 FD C7 D3 E9 CD FF 4C 1D 04 21 B8 | ...........L..!.
6E 48 28 6D C6 68 40 72 53 7B 7B 2D 25 6D EE CF | nH(m.h@rS{{-%m..
FF 1F B2 EF F6 1E F8 83 33 65 A8 ED D6 0A 04 E9 | ........3e......
05 D9 8F 36 70 E2 C4 B6 3C AC 3A 46 2A F0 8A BC | ...6p...<.:F*...
BE 2E C7 BB 77 92 4C C5 4A 7E 03 4D 37 2B 4B E9 | ....w.L.J~.M7+K.
0E 4F 87 21 93 F7 D3 6B 3E 69 D2 34 28 7C D9 68 | .O.!...k>i.4(|.h
D9 B7 9E 2D 95 68 F9 F2 3B DC 9D 59 02 B4 33 93 | ...-.h..;..Y..3.
13 8B 72 85 3B B7 F9 59 59 F4 F5 D7 61 85 79 5B | ..r.;..YY...a.y[
13 BD 53 90 BF 01 DC 29 50 62 E0 01 35 C3 B6 C7 | ..S....)Pb..5...
95 17 2B 6B 93 37 D8 0A C7 52 45 4E 27 A5 E2 15 | ..+k.7...REN'...
B8 DB 17 F5 DD 6D 8D C5 81 C3 CD C0 CC 9E 73 04 | .....m........s.
E1 81 74 45 85 66 28 83 BE F6 8E CB 32 A2 5A C8 | ..tE.f(.....2.Z.
D7 F6 C2 7D 16 99 01 9D 8C 3C 9E 9D B3 40 5A 03 | ...}.....<...@Z.
8A D9 7C C4 F3 E4 A4 D4 BF 4A A3 BC 18 B7 4D 2B | ..|......J....M+
6F 6B 39 70 EC 34 82 D1 2D 4E D2 50 CC CB DD 73 | ok9p.4..-N.P...s
1A B6 1A F4 37 CB C2 64 4E 02 A3 B1 A2 B4 9B 57 | ....7..dN......W
5B 6B 93 08 66 58 18 3F FA 3D 8F 01 98 CA F9 02 | [k..fX.?.=......
56 E9 39 5B AB D3 64 41 13 20 F9 45 A0 2D E7 A9 | V.9[..dA. .E.-..
DE 13 98 8B 98 21 6E B5 E8 67 DE B9 DF 0D 77 13 | .....!n..g....w.
75 78 FF 3F 96 5C 8E 2B 83 40 B9 16 8C AB E3 7F | ux.?.\.+.@......
86 37 CF 30 77 1B D5 F3 3E 33 1B 01 72 CF 75 C7 | .7.0w...>3..r.u.
91 FC 23 82 F8 FA 28 DF BF E9 23 FF B8 6F C5 B2 | ..#...(...#..o..
9D 3D D3 EA 78 0A 2D 3A B1 7E 34 4A 3C A1 78 30 | .=..x.-:.~4J<.x0
D0 AD 7C F9 B1 12 67 E8 D0 78 08 70 FD 3D A3 26 | ..|...g..x.p.=.&
6D 61 80 15 20 53 8C F3 17 E4 B3 9E 8A 27 C5 E4 | ma.. S.......'..
9F F5 C2 05 6A C7 AA 15 E1 F9 16 41 03 77 66 35 | ....j......A.wf5
1B 0F 6C 82 A3 96 41 DF 46 F4 A5 52 ED EA 6B 6B | ..l...A.F..R..kk
F8 27 D2 8E 8A 34 9F F7 CF 33 09 FD 32 4D C3 0D | .'...4...3..2M..
65 7D B6 6A CB 08 AA 9E 41 7A A9 F3 55 A7 13 89 | e}.j....Az..U...
48 06 D3 AA F1 EA C1 A5 4F 68 47 87 09 D6 0F 25 | H.......OhG....%
74 8C 8B 85 D3 A6 FE C2 CB C9 1D 73 E2 AF A0 52 | t..........s...R
A6 09 A6 12 6B C6 B9 F9 88 D8 04 83 C5 17 AF C2 | ....k...........
48 93 4E AA 78 CB F4 87 60 69 80 FD 14 60 6B 1A | H.N.x...`i...`k.
45 93 3A D3 71 C4 A9 20 FE 8A E9 66 1D 2C 09 C7 | E.:.q.. ...f.,..
20 C3 2E 95 72 F0 1F 9C DA E9 AA 2B C0 D3 4A 74 |  ...r......+..Jt
58 A2 90 F9 63 1D D6 AB 7E DD 08 1B 87 BB B7 8C | X...c...~.......
EA E2 95 3C B5 27 82 5E 79 1F FB 03 A0 F2 76 72 | ...<.'.^y.....vr
85 19 3A 9C B7 B0 73 4B 10 C4 0A EE 1F 09 31 E8 | ..:...sK......1.
3D DE 50 65 A1 C2 EF AB C0 04 66 4D CC 6C 13 F2 | =.Pe......fM.l..
11 31 A4 AE E8 6F BE 14 83 65 3A 0D F2 86 76 13 | .1...o...e:...v.
C6 70 EA BF 8E 09 E8 85 F6 56 67 82 42 E6 92 62 | .p.......Vg.B..b
0F 44 22 1A 89 5D CD 9F 3E 98 EC 52 C5 56 F7 13 | .D"..]..>..R.V..
01 94 D5 DF 39 27 87 D3 9F D2 81 05 4E 44 E0 E2 | ....9'......ND..
E4 F1 53 A7 19 1A 4C 2E 07 86 C4 62 BD 87 11 5D | ..S...L....b...]
13 B8 83 90 F8 EA 44 83 0B 68 B7 55 74 A6 90 CE | ......D..h.Ut...
26 AC 3A 99 52 48 D6 E0 A5 AF 94 F3 95 CB A8 D1 | &.:.RH..........
3C 9E EE 3E 8D FA 47 A2 20 88 DF 6E 91 64 4A 30 | <..>..G. ..n.dJ0
15 30 53 1B F6 75 C8 08 C8 5A D5 ED 6A 00 D4 F5 | .0S..u...Z..j...
A5 88 0A 2F B1 9D 20 0F 04 01 77 83 C9 19 3C F2 | .../.. ...w...<.
89 9F 44 4A 26 10 69 EE 8C 09 9F B6 BF E1 D0 70 | ..DJ&.i........p
EC B7 D4 70 93 98 35 DA 21 53 95 DA B2 30 F8 4E | ...p..5.!S...0.N
DB 87 62 93 86 7F 7D C0 3D FF 15 C8 C4 1D DF 9F | ..b...}.=.......
3E 41 37 B4 38 38 83 39 06 B1 34 A2 97 04 FB D0 | >A7.88.9..4.....
BF 8E BF 6A 29 06 06 6E 7E A0 31 EC D6 DA 69 B3 | ...j)..n~.1...i.
07 5C 85 A3 D5 49 15 E6 1B 8B A0 5E E7 3A C9 DC | .\...I.....^.:..
EB 0C 0A 7C 21 EC D4 84 CF D9 84 A6 09 AB D9 75 | ...|!..........u
A5 9B 2E 5B A5 94 4A 3B E4 D9 AC 38 41 36 6A 53 | ...[..J;...8A6jS
FF 8C 37 D3 D8 E3 D9 6F 14 2C C0 9B 1A E1 CB C1 | ..7....o.,......
7B 2F 9B DD B1 C3 01 19 3E BA 29 6A 51 DC DB F9 | {/......>.)jQ...
E6 30 60 DB C6 B3 EA DD 58 75 9E A6 58 00 28 2D | .0`.....Xu..X.(-
19 BB B1 E6 36 D9 E7 82 6E D3 05 EE AA 02 22 75 | ....6...n....."u
AD 61 79 66 70 58 D3 7A 99 B3 FE 45 07 D4 9B 05 | .ayfpX.z...E....
84 BD B4 A7 35 85 AD 54 94 CA 00 3A 5F F5 D8 5E | ....5..T...:_..^
AE 1A 38 F1 DD 1E 35 BF 49 2C C7 77 A8 5C 6A 18 | ..8...5.I,.w.\j.
14 CC 3B E3 9C 88 C5 30 4B 64 1F 54 F6 30 78 9B | ..;....0Kd.T.0x.
AA 3E 17 C8 40 84 E0 ED B5 B5 E0 33 7A 88 4F 28 | .>..@......3z.O(
67 CA 8D 4C B6 52 67 14 16 57 61 2B D4 26 7E 38 | g..L.Rg..Wa+.&~8
DE 10 52 19 28 02 72 E6 5F 01 5F D4 F2 71 2D A5 | ..R.(.r._._..q-.
D5 45 F9 6D 61 7A BD 6F B3 05 6E 09 11 4F AA 46 | .E.maz.o..n..O.F
12 D4 4E EF EF 14 86 F3 66 5C A2 EA 12 20 B6 AC | ..N.....f\... ..
7E 45 FB E2 0D 12 8F AC C8 7F DE 79 CA 0F 10 68 | ~E.........y...h
D7 DA 39 FE 09 D3 3D F0 BF B8 FC B3 51 D1 82 CC | ..9...=.....Q...
FC 14 D6 81 5C 32 08 F0 91 A2 03 25 A7 46 CD AD | ....\2.....%.F..
0C E9 85 BE 7F D2 F6 82 03 22 40 23 97 3C 32 CA | ........."@#.<2.
8B 83 6D 13 78 3F 97 BA A4 33 81 79 4E 38 05 BC | ..m.x?...3.yN8..
5B 12 29 5C A6 85 F3 6C 4D 8F 9C BE 13 2D 88 06 | [.)\...lM....-..
76 C8 FD C8 50 65 6C F8 75 1E 1A 67 3C 2B 5D 35 | v...Pel.u..g<+]5
07 FE F8 CE 2F 55 00 F7 0F 53 6C E1 7F D6 C4 27 | ..../U...Sl....'
00 0C 64 5D 70 41 7D F8 5B 7F 81 E3 CC 99 E8 94 | ..d]pA}.[.......
A5 85 D0 8B AD 77 DA 7F 2F 49 11 3B D7 94 0D DC | .....w../I.;....
97 04 56 A2 82 18 67 2D E0 4B 8C 1C 19 5A 53 FF | ..V...g-.K...ZS.
25 D8 84 D2 02 F1 98 BB 4B 55 30 D3 3D B0 6D D6 | %.......KU0.=.m.
3D CF 41 C0 2F D7 76 ED F1 2D DC C2 1E 96 6E B9 | =.A./.v..-....n.
34 4C 69 0D FF 04 DF 5A 6D 5C A6 66 7D E8 F5 18 | 4Li....Zm\.f}...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
AE EB 3E FE E0 96 A4 FB 8F 85 56 46 FE 47 62 9A | ..>.......VF.Gb.
38 F0 8E 68 E5 6A BB 0A 24 3E DE A0 1B 4E 22 74 | 8..h.j..$>...N"t
35 87 45 9D A3 6F 5B FB A7 0A 5A 11 98 CF FB FE | 5.E..o[...Z.....
51 FF DB 52 9F C8 3E FA 79 01 2E 0F BE 65 99 2C | Q..R..>.y....e.,
92 7C 24 BB 88 69 71 89 0E 48 7D 8E 1D 1E 04 65 | .|$..iq..H}....e
EC B4 B1 C5 EE 1B 24 19 77 CF 11 A4 99 39 C3 0C | ......$.w....9..
62 4F B7 56 1D CD 76 A4 92 50 C1 63 19 3B 30 1B | bO.V..v..P.c.;0.
00 85 6C B4 E8 CD 0D EC F2 FA 8C 8D 8E 14 7D 3A | ..l...........}:
A8 96 A8 65 E7 5B D0 69 67 34 E7 66 D9 F1 93 44 | ...e.[.ig4.f...D
1B 44 1A 47 B7 E4 3E 7D DB 7A 7B 25 48 AC 20 7F | .D.G..>}.z{%H. .
57 5E 7E A1 61 9B 82 8A 7F 06 FD BC BA 91 68 FB | W^~.a.........h.
84 87 05 86 71 DF 3C 58 5E 1E 2F 80 E9 A9 49 4F | ....q.<X^./...IO
6E D5 AA C2 12 84 7D CF 11 1F 00 F5 D9 37 69 E4 | n.....}......7i.
51 C9 BF 63 CA 4C 03 6C 14 86 87 82 93 C7 A3 51 | Q..c.L.l.......Q
CD 8E B7 61 C7 55 D6 D6 BE B2 8A 62 57 C5 5F 87 | ...a.U.....bW._.
05 8C 94 F5 54 2E 6E 00 03 AC 43 0D 3F 18 28 8A | ....T.n...C.?.(.
75 5F 50 A2 00 B5 13 94 11 94 55 E7 DE 6E CD DE | u_P.......U..n..
FE 78 66 D4 38 36 07 34 DB A0 1A C5 1A 3B 69 32 | .xf.86.4.....;i2
A2 AC EA 3E A8 0B 36 01 60 2C 2C DE A8 67 F4 F5 | ...>..6.`,,..g..
9E 2A 36 F8 F0 9A 3C F2 72 3D 97 26 87 3D BA 5B | .*6...<.r=.&.=.[
3D 1B 7E AA 1E 08 B4 B9 2E 94 47 B9 67 EE 19 76 | =.~.......G.g..v
B8 B8 96 55 53 C5 FD 92 28 C3 8D AA 73 3E 74 0D | ...US...(...s>t.
A0 52 6C 41 C3 E5 2B 0A 0A 61 16 69 24 31 CC F3 | .RlA..+..a.i$1..
30 E1 40 90 C9 81 B3 84 17 35 BB AD 46 C9 5C EF | 0.@......5..F.\.
63 FF E5 D3 46 F3 3D B5 E2 66 71 BF 1B 9A BD D0 | c...F.=..fq.....
91 3D 6D 7E 33 B8 A9 8B 81 C7 13 34 CD 4B FF A7 | .=m~3......4.K..
79 89 5F A8 4D 13 AB 2B DF 01 9E 8C 42 26 82 70 | y._.M..+....B&.p
11 14 12 7E 28 1F 57 75 75 E4 03 F3 F8 7F B2 97 | ...~(.Wuu.......
BC 9F 16 A4 89 FE D5 25 70 FF 63 60 19 C9 85 07 | .......%p.c`....
E1 53 9A 92 57 56 F5 2B 3C BD 4E 2D FA B3 13 EE | .S..WV.+<.N-....
0C ED 53 49 F4 73 25 B5 0E FF 5C E0 6A C7 15 BE | ..SI.s%...\.j...
98 72 E5 13 D1 65 DB 4D 3F 66 BA F2 EF FC 68 67 | .r...e.M?f....hg
DE 78 93 B0 8F 6D 41 27 80 F0 D7 06 A7 97 6A 12 | .x...mA'......j.
13 EC E4 5A D7 00 37 5A 6D 5A 87 E7 45 4E 6D E0 | ...Z..7ZmZ..ENm.
53 48 3B B3 20 19 EA 3D 87 F4 42 58 E1 76 80 F3 | SH;. ..=..BX.v..
89 55 C3 E3 73 A1 91 3D 61 47 C9 24 75 0F E6 2A | .U..s..=aG.$u..*
14 90 41 B3 D3 D7 37 EA 74 40 55 34 F4 8A 6D FA | ..A...7.t@U4..m.
6F 59 DC 0A 75 73 4D A7 85 3D 19 49 B4 3F D3 99 | oY..usM..=.I.?..
E8 2F 0D 12 7C 95 26 1B 79 C9 C9 F0 BA C0 A7 E5 | ./..|.&.y.......
9D 9E D1 64 0B 85 27 FF 61 65 FA 43 D1 19 D9 E5 | ...d..'.ae.C....
59 2A 57 4C 2C A0 1B A1 98 B0 F2 A3 51 6B B4 69 | Y*WL,.......Qk.i
9E 6C ED AA F2 B3 77 27 70 69 2B 1D 33 EA 52 35 | .l....w'pi+.3.R5
0C 68 3F 64 05 E3 A9 02 97 AA B3 D6 D2 11 75 4B | .h?d..........uK
BF 93 79 01 B6 E9 A8 34 05 92 51 75 D3 2D 1E 55 | ..y....4..Qu.-.U
91 A6 95 3C 04 43 B1 3F 3C B5 BD 00 A5 BE D6 24 | ...<.C.?<......$
85 A8 98 DF B1 7A 48 A4 81 40 1D 8D 4C 3B 6F FE | .....zH..@..L;o.
6D 87 05 AA 62 8A A0 D4 D5 D3 CD D3 98 8B F6 3B | m...b..........;
80 3A D9 60 39 9F 7E F6 25 B6 17 03 03 00 40 96 | .:.`9.~.%.....@.
F9 2D 28 C2 3B 36 2F 14 AE 5D 03 B5 26 58 1B A4 | .-(.;6/..]..&X..
3C D9 CF 4D CB B2 F0 76 B7 66 5B 55 2F 4E 5E 4E | <..M...v.f[U/N^N
9F 1F 87 06 03 11 DE C9 F7 CA 70 B4 C5 60 91 0B | ..........p..`..
E8 C7 D4 C4 3F 1D F8 0F D3 9F B6 9C CB A6 3D 17 | ....?.........=.
03 03 00 40 01 33 7E BC 12 4F CE E6 FE B5 2C A1 | ...@.3~..O....,.
6F 3E 2A 2D 4D BA 87 77 07 F3 CC 3A A5 F4 6C 3E | o>*-M..w...:..l>
D6 E3 10 C0 67 7E 67 1D 3D 6F 21 60 91 20 56 CB | ....g~g.=o!`. V.
F8 C1 AD 52 92 46 28 02 43 6F E8 53 36 D3 FF 38 | ...R.F(.Co.S6..8
13 8E 8B 2B 17 03 03 13 70 29 8F 1F 13 F6 9D 8F | ...+....p)......
14 29 61 C2 37 5F 21 DB EA E8 CF 94 D5 BB 41 80 | .)a.7_!.......A.
E7 C1 52 B8 97 06 DE 90 73 09 79 A4 F2 00 13 DE | ..R.....s.y.....
86 EA D4 EC CD E2 C1 9E 5C BD 5E 40 44 FA EB FC | ........\.^@D...
D8 41 2E 3C 4B 5F 48 42 D4 73 26 DA C1 47 26 62 | .A.<K_HB.s&..G&b
1C 51 84 7E F4 A1 89 63 72 4E A3 0E 8E D4 54 4D | .Q.~...crN....TM
45 E9 73 16 4E A1 A8 73 5A E1 17 AA E7 51 20 83 | E.s.N..sZ....Q .
C2 9A 93 FB 6C 9F 12 05 96 BB F2 1C 34 E2 16 14 | ....l.......4...
BC 32 49 67 7F E8 CB 43 E7 0D 34 F7 A3 F1 6A 3F | .2Ig...C..4...j?
1E 42 57 A5 1C CD 60 86 6D 91 6F 96 19 64 12 B7 | .BW...`.m.o..d..
CF FE E6 AC 4E C3 F3 D2 9D 1B F6 86 ED C3 C9 37 | ....N..........7
AF AC E9 F7 80 09 B2 6D 36 54 91 03 41 C6 03 3D | .......m6T..A..=
DF 20 DA 8F 84 61 30 C2 45 FC 29 08 88 A3 E5 59 | . ...a0.E.)....Y
B0 F7 49 F1 8C 32 3B 46 08 CD F4 DB 7B DD 3F A5 | ..I..2;F....{.?.
D7 F6 A0 5A 47 07 52 AB 8A 48 F8 D1 67 F7 46 AE | ...ZG.R..H..g.F.
BF C5 40 5E 74 3A 5F 5D 08 68 9B DD 1D 25 D8 79 | ..@^t:_].h...%.y
EF 5B 06 99 1C 4A 35 DB FB 92 54 98 36 3D 10 58 | .[...J5...T.6=.X
EB 88 B2 2D 64 B4 3E D1 7A BD DD 10 F5 C6 6A 72 | ...-d.>.z.....jr
E4 E5 16 2D 80 03 0A D0 79 B9 A1 D5 17 E6 21 70 | ...-....y.....!p
1E 2B 0F 52 BF 2D 18 EA 9C 9D F5 B9 E9 64 D5 BA | .+.R.-.......d..
52 C2 6F 5D 78 BF 17 83 56 7D FF 1A 97 1F 40 C0 | R.o]x...V}....@.
87 6C 81 76 0B A5 EF 45 75 F3 8D 3F ED 62 44 BD | .l.v...Eu..?.bD.
EA 62 80 35 22 A0 16 4B 0C 75 7B DF ED D2 2A BB | .b.5"..K.u{...*.
01 FC 1A A3 FD 3F C4 84 4B E0 5C 8A 3A 72 BD D9 | .....?..K.\.:r..
9A 44 76 2D 19 75 D0 36 9D E6 2B AC 70 42 02 C6 | .Dv-.u.6..+.pB..
2B 4B DA EB 54 03 D0 18 C8 2D C6 1E 68 17 42 79 | +K..T....-..h.By
34 92 2D 4F 8F 37 D8 EB 3C 0A 35 0B 5A 81 32 F2 | 4.-O.7..<.5.Z.2.
52 70 45 79 37 3D 8C 8C 62 F7 09 A4 94 D0 76 36 | RpEy7=..b.....v6
5E B7 36 18 32 08 21 36 B4 28 E4 41 77 68 B2 FC | ^.6.2.!6.(.Awh..
DB 0A AD 35 8F EB 84 3F D3 71 B0 FD 1E 1B AC 55 | ...5...?.q.....U
D1 9E 59 AE E0 96 84 DA 3D DC E1 87 A3 B3 2A D3 | ..Y.....=.....*.
E0 90 9A A8 75 8D 9C 9C FC 54 C7 98 7A D2 4F 73 | ....u....T..z.Os
35 DF 5D 42 EA 40 44 2E 34 83 D7 8A 09 F6 13 A4 | 5.]B.@D.4.......
6C 49 A1 96 17 9E B2 D4 C7 7D 87 9F 8E DE 87 66 | lI.......}.....f

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
21 C6 39 EE 29 F3 5C 13 F5 EF EC E1 03 56 F2 7E | !.9.).\......V.~
21 CF 05 A4 43 EA 37 48 FB F0 77 3C 91 E3 A3 67 | !...C.7H..w<...g
40 36 67 FB 1B 56 B5 C9 E7 C0 75 6D AF 31 35 A2 | @6g..V....um.15.
18 01 F4 B6 F0 40 70 44 34 F1 EE A9 0B 05 E3 A4 | .....@pD4.......
A7 0C 5D 73 A7 6D C3 09 1B C1 56 0A 1C 95 0D C4 | ..]s.m....V.....
D9 BE 8F 01 C9 30 8C E9 B6 7F F5 DF 32 B8 36 3D | .....0......2.6=
4D A3 1F C7 54 E3 32 FE E5 95 C6 18 2E 97 56 57 | M...T.2.......VW
B7 EF A3 AE 9A 9D 66 66 15 AC E1 A3 FA A1 96 14 | ......ff........
99 F8 A1 7B 5E 56 91 14 9E A3 0B 32 C9 4B AB 48 | ...{^V.....2.K.H
74 0A A8 15 5C D7 84 9E 41 23 B5 D6 F5 4E AD 60 | t...\...A#...N.`
61 D4 28 18 07 FA 44 2F 10 EF 66 4A 7A EB 48 66 | a.(...D/..fJz.Hf
27 40 54 A7 2F 7A 61 46 8E 8F 7A 55 65 B6 31 73 | '@T./zaF..zUe.1s
EE 55 FE B8 1C 4D 07 51 7A 93 0E CA D1 5D 21 B5 | .U...M.Qz....]!.
77 43 7C 25 8F 64 3F ED E6 4E 5F F8 FB 1A 0A D3 | wC|%.d?..N_.....
9F 1B D1 77 F9 1F 9B 24 F8 20 D8 AB CA FF 73 A4 | ...w...$. ....s.
87 B4 13 1B 2A F5 91 80 EC 2F 8A D3 2C AE A6 87 | ....*..../..,...
14 6D B7 09 FA A7 55 9F 13 B2 F9 11 C2 A2 36 78 | .m....U.......6x
CB B1 AF 0E 1F DA 7B 49 E5 DC B2 90 54 3C F5 DD | ......{I....T<..
6F 58 9B D4 C5 11 A1 0B E3 46 80 EA 96 F9 D6 10 | oX.......F......
86 48 01 81 5F F9 4A A4 E9 DF 94 41 91 C0 05 87 | .H.._.J....A....
C0 92 1E 91 F0 37 E9 49 AF EE 9D 41 75 42 EF 62 | .....7.I...AuB.b
5E 06 A3 3B FE A9 63 EF 0D 28 51 F6 D9 06 1A 00 | ^..;..c..(Q.....
5A F4 CF 54 A9 5B 71 12 03 51 31 A2 E1 B8 27 7C | Z..T.[q..Q1...'|
36 31 B0 D0 85 77 D4 96 AD A6 AF 25 17 33 D8 08 | 61...w.....%.3..
72 2C E7 6C 4B CF 77 F4 49 11 29 13 C1 0B 7F DE | r,.lK.w.I.).....
5D 80 7F 18 98 94 4A 03 A1 1F 06 DF B1 FF 54 44 | ].....J.......TD
F9 38 80 B7 96 D7 01 62 07 65 1E AA E8 74 8D 2F | .8.....b.e...t./
D9 3F BE 11 26 18 48 A3 6B D8 D4 F2 56 71 E1 8A | .?..&.H.k...Vq..
0B 78 DB 61 90 5A 73 51 C3 07 79 06 C6 BC 50 AB | .x.a.ZsQ..y...P.
05 AE 6D 1E 6F EF 64 D6 6C 58 2F C9 D8 65 9F 27 | ..m.o.d.lX/..e.'
B6 0D DA 6F 84 AC FD 77 F6 0C D7 8A 9F E3 9C 59 | ...o...w.......Y
10 0C 40 80 7E 23 5B D3 8D 3B 12 0C C9 D3 2E 06 | ..@.~#[..;......
07 3B 96 C2 50 9D CB D4 D5 3D 30 32 48 D4 3B CF | .;..P....=02H.;.
6F E9 67 D1 BB FA 49 4B 41 02 F5 51 B1 2D 4D BB | o.g...IKA..Q.-M.
2B D4 68 F7 51 1D 21 3C CA 2D AA 6C BA CC 37 6A | +.h.Q.!<.-.l..7j
94 52 F4 2F CD 54 3C 92 55 08 C9 4C 03 2E E4 7B | .R./.T<.U..L...{
51 E4 8A D7 87 79 96 3D C3 7B 12 D2 FB B7 62 F8 | Q....y.=.{....b.
10 3D BD FE 5B B9 BA 5B 0D F8 91 71 0D 51 4F 49 | .=..[..[...q.QOI
BF F4 98 41 A7 D7 2A 0F 8E 79 85 A1 B9 09 41 91 | ...A..*..y....A.
03 2A 72 CD 36 70 D2 40 4A 68 2B 82 FA 84 FB 38 | .*r.6p.@Jh+....8
21 58 D1 04 80 CD 79 5C B4 1F ED 67 02 76 7D CC | !X....y\...g.v}.
0E 14 B9 13 15 61 1B 29 7B E0 18 96 B9 14 0D C5 | .....a.){.......
FC E6 9F 4B EE 57 4D 3E AA 05 70 AF 01 00 3E 54 | ...K.WM>..p...>T
24 A0 14 AA E9 1B 5B B3 6F 89 99 C3 38 1F 31 CA | $.....[.o...8.1.
1F 35 1A C7 88 E6 ED D2 5E 90 0D C6 CD 79 ED ED | .5......^....y..
F4 56 B5 E6 18 CF BB AB 34 DF 5F C5 64 1C 22 78 | .V......4._.d."x
74 86 06 B9 07 5E DE D5 A8 9B 24 5A 41 9B 48 C2 | t....^....$ZA.H.
CA AE DA 5F 2B 16 7B 58 89 6E 16 41 F3 01 5D AA | ..._+.{X.n.A..].
D9 53 93 3B B4 A2 1C 9C 6D D8 3F 8D D8 C7 BF C2 | .S.;....m.?.....
28 68 FB 3D C3 15 87 BE F0 0F 70 A0 FE 44 CE 3D | (h.=......p..D.=
F8 15 01 CD DB FA CA 55 B1 72 44 99 09 EB B7 EB | .......U.rD.....
0C 09 A5 B8 59 0D 02 E5 F7 BC 96 DB CF 25 FE F1 | ....Y........%..
4A 00 DA AD 62 A9 EB 3C C9 B4 77 22 9B D8 1D FA | J...b..<..w"....
19 FB A4 37 14 D6 34 1E 3B 27 EC B0 E4 DC 30 57 | ...7..4.;'....0W
77 D2 A3 40 BE 41 3D F6 1E 48 35 DC 25 8D BF FF | w..@.A=..H5.%...
D1 78 FF 6B AC 22 F0 22 53 AC A5 FA A0 C1 E3 DE | .x.k."."S.......
9F AF 71 5E DE 38 4A 76 5E 92 0D FA 30 1A D7 50 | ..q^.8Jv^...0..P
07 07 A2 C2 09 D2 93 ED EB BE 5F 77 4C 85 A6 51 | .........._wL..Q
22 AE 5F 41 17 40 38 D2 B7 EA 43 3C 27 46 56 E9 | "._A.@8...C<'FV.
E1 95 08 B3 45 7B 8D CB 6D 55 60 E7 99 42 6F 03 | ....E{..mU`..Bo.
83 87 86 38 EC 5D F7 70 2F BC 6F 23 31 4D EE 44 | ...8.].p/.o#1M.D
0C 9C 72 E4 E5 AA F4 8D 80 1A 0A 5A 63 FA D0 B6 | ..r........Zc...
79 51 A8 A7 FD 63 3E 70 37 FC 15 2C 31 6F 67 61 | yQ...c>p7..,1oga
DA 1D 6D 72 4B B2 22 5E 82 B2 34 3A B8 DB 45 37 | ..mrK."^..4:..E7
01 B3 9D 14 AB 6A E5 FC 75 C6 60 52 A7 C0 8E D1 | .....j..u.`R....
7C 73 CB FF 65 04 75 6B EE B7 4F 33 6C 67 48 94 | |s..e.uk..O3lgH.
04 B0 15 6D 99 3E DE 1E 13 69 FF DC 79 D4 BD 1B | ...m.>...i..y...
CE A4 EC 97 D6 DD 35 81 CF 5F 38 39 42 8C AD B7 | ......5.._89B...
D2 65 33 D1 1E 6F B8 BC 05 C1 98 DB 20 CE 8A 2D | .e3..o...... ..-
4A 37 7D 78 5D 47 8E 57 82 89 90 25 04 30 F0 3E | J7}x]G.W...%.0.>
05 C0 AF 00 4F D3 E3 47 D7 4B 9A 45 45 C9 EF 7A | ....O..G.K.EE..z
0C CF 17 0F C8 FC DE 02 82 5D 82 64 9E A0 8A DD | .........].d....
0B F7 3A 9D 1D F4 C2 FA 41 5E DA 30 55 BC E4 E3 | ..:.....A^.0U...
B4 BE 3B 51 B6 F6 25 8E B0 50 99 53 92 91 05 39 | ..;Q..%..P.S...9
13 0F F1 15 20 AF 69 47 1F C3 A0 EB 59 F3 68 22 | .... .iG....Y.h"
C3 DE 43 13 27 DE 29 C3 1D E2 17 25 1E 05 48 D1 | ..C.'.)....%..H.
1A 5C 5A BB 0E C3 BF 65 AD 00 FE 46 EA E4 C3 65 | .\Z....e...F...e
E0 5E 2C 12 A8 4E D4 F2 87 B3 1C 20 8B 23 D7 D6 | .^,..N..... .#..
C3 45 CF 67 96 F1 F9 62 88 5A 26 9D 76 A3 27 0E | .E.g...b.Z&.v.'.
8E B2 D4 5F F8 A9 71 66 BD 50 B8 23 7A 67 28 EA | ..._..qf.P.#zg(.
CA 37 CA 4C AD 6E DF DF B3 04 05 A5 0D 80 B3 99 | .7.L.n..........
2E 05 25 87 58 9F DA 02 14 5A 15 19 67 62 7D 01 | ..%.X....Z..gb}.
5C 9F 39 59 E8 F4 22 71 DF 29 02 C5 45 02 24 83 | \.9Y.."q.)..E.$.
43 C5 69 D9 A0 CE BF 4F AD 84 F8 E9 C7 34 56 DB | C.i....O.....4V.
41 4F 10 97 E5 41 19 DC C2 ED 14 2B 7B BD 6A CC | AO...A.....+{.j.
93 F1 EC 7C E7 7D B8 81 22 18 78 FF 6E A7 28 53 | ...|.}..".x.n.(S
69 A2 4F E8 C6 4F 8A 44 F3 DE BF 1F 81 82 6F 23 | i.O..O.D......o#
67 A7 5E 97 DC 56 42 C4 7E 01 3E 7E C4 20 C8 63 | g.^..VB.~.>~. .c
76 5B 00 48 70 1A 46 B7 AF A5 BE 0C AE 25 82 14 | v[.Hp.F......%..
5E 2F B5 EC 69 F5 04 DD DA 46 BA AF C5 0B A6 28 | ^/..i....F.....(

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
D8 4F 8F 4B 7D AA 2D 72 DD 22 82 02 F9 A4 92 30 | .O.K}.-r.".....0
52 56 2A A4 F1 90 A7 09 32 92 D4 E7 07 F5 6E CC | RV*.....2.....n.
1C 59 1F 50 DA 85 65 C3 98 83 8D 95 9E 60 D3 7C | .Y.P..e......`.|
09 09 9E 84 98 CD 30 A9 59 E6 0A 81 7A 56 4D 11 | ......0.Y...zVM.
50 B5 CC D8 18 9A 6C 43 D6 18 DC 7A A3 47 CC F8 | P.....lC...z.G..
49 03 31 95 0C 17 3F E9 AB 10 1F 7C 83 EA 71 AB | I.1...?....|..q.
41 72 53 C6 09 14 65 18 54 E1 75 DC 31 AB 69 F8 | ArS...e.T.u.1.i.
AF 29 C6 74 25 D3 FC 91 0D 34 D1 24 14 49 66 76 | .).t%....4.$.Ifv
5B 4F 18 22 92 3A 4B 96 81 CD E1 23 25 FC 14 09 | [O.".:K....#%...
9F AB 2A 28 CD CC 8C C3 52 36 B1 EE 4D 01 2E 62 | ..*(....R6..M..b
9D 84 CA F8 DE 51 2B B5 98 44 32 34 DE 55 47 A1 | .....Q+..D24.UG.
79 8E C6 5B 79 04 5F 08 EB E2 19 E5 13 B9 18 3E | y..[y._........>
AE 46 3E DF B8 80 6E 78 40 5A 0B AD 68 2D AB 29 | .F>...nx@Z..h-.)
CD 90 CF 13 19 BD BB F3 65 CC CA DC CD 4D 0B 2C | ........e....M.,
7B 74 61 A4 8F D6 DE CF E4 33 56 94 11 D7 73 8D | {ta......3V...s.
04 E9 0B D6 96 A3 47 A9 9E DD 47 E7 7C E7 66 CC | ......G...G.|.f.
40 85 4E D3 FF 85 B0 CF 78 FE E1 A1 A2 01 4E 55 | @.N.....x.....NU
5A 67 54 B9 3E 15 4A 66 0B 15 79 45 1E C8 9F 2B | ZgT.>.Jf..yE...+
C9 B0 BF 06 F8 DE 28 7D BB 23 D1 7C 60 99 74 5A | ......(}.#.|`.tZ
3F 9F 1E 3A B0 3D 50 83 9C 4D 2F 21 AB 2A 6E 16 | ?..:.=P..M/!.*n.
8B 89 96 37 21 42 A4 BA 83 B3 67 EA B2 B7 B9 C3 | ...7!B....g.....
DD C4 CB 29 B4 44 F9 E9 F6 F4 FB C4 2C 57 02 47 | ...).D......,W.G
DB 2B 1D B2 42 BF 89 AC 41 60 54 92 EE 06 B3 7B | .+..B...A`T....{
C5 89 B6 70 6A 31 E3 0B FF 91 7D 14 99 E3 CB 39 | ...pj1....}....9
F8 9F 2A 81 F4 CD A0 E3 9D 76 17 30 7C B7 38 A9 | ..*......v.0|.8.
E7 2D B1 39 7E 78 4F D6 EF 64 2F 1D 9C 9F 0E 19 | .-.9~xO..d/.....
B2 AF 75 DD 26 73 64 4A E8 6A EF E8 32 70 88 F6 | ..u.&sdJ.j..2p..
B6 62 52 E7 73 FD F4 F4 DD 4F 10 FF F4 2E 68 9A | .bR.s....O....h.
94 C3 C3 EA 10 B5 F1 55 4E F1 0E 6B 90 2A D3 6C | .......UN..k.*.l
B1 52 E8 AC 2A 98 4E 05 66 61 39 45 4B B0 1E CB | .R..*.N.fa9EK...
5D 45 4D C1 BD 78 4E 66 02 98 C2 C6 B4 76 53 8E | ]EM..xNf.....vS.
AB DC 3A 4F 4D C4 B1 26 46 6D 31 96 85 B7 1E CF | ..:OM..&Fm1.....
09 30 B3 1A FA 7D A5 D9 44 1C 6C F2 E2 C6 7A 15 | .0...}..D.l...z.
8A 05 B2 47 31 B2 0C B0 8F AD FD F8 35 94 61 A6 | ...G1.......5.a.
53 ED A9 F3 40 FF DB B8 50 DB 17 4B 16 14 07 4E | S...@...P..K...N
70 11 AB 2E B1 0A C7 CE 3E 4C AB D1 BC D0 3B A9 | p.......>L....;.
3B D4 6A AF 7B 8A 73 21 53 2B 21 C6 6F 82 FC 69 | ;.j.{.s!S+!.o..i
7D 0A 91 C0 4B 19 E3 E3 DC 68 F7 43 97 E7 4A C1 | }...K....h.C..J.
82 0F CF 3B 75 FF B9 1A 71 2E EB 62 80 C2 D0 C2 | ...;u...q..b....
25 B3 E0 F7 1D C7 07 95 08 48 40 0E F3 55 D4 8E | %........H@..U..
6A 94 C1 CC E5 E7 1C 49 AF 99 A8 FE 2A 3B 3D F9 | j......I....*;=.
7A 94 EF 5B FE FE 6B 2B 6A B2 81 82 38 C3 27 EA | z..[..k+j...8.'.
B2 1A 7B 25 AE 27 BB 43 0A CD 16 AC 16 5E BA 5D | ..{%.'.C.....^.]
9F 2B AA A7 15 01 53 7D 24 94 89 6F 5F EC 30 BA | .+....S}$..o_.0.
A6 3B B6 6C 94 6D 83 19 46 15 FF 92 D3 FC FB 5E | .;.l.m..F......^
69 3C E5 88 30 08 05 BF 08 88 83 E6 00 B6 E2 82 | i<..0...........
3C 97 86 10 FA F8 76 8D 3F E2 4D 3E 23 F8 2B 7C | <.....v.?.M>#.+|
4A BA 02 47 63 B1 92 F0 E8 1E 1E D1 EA 9C BD 1F | J..Gc...........
4F 0C B7 84 9E 39 10 8E EF 98 10 DF C2 41 21 1B | O....9.......A!.
81 2A 4A 9E 55 BE 61 49 44 B6 80 32 1A 37 34 0D | .*J.U.aID..2.74.
5D C9 E2 D5 00 C0 86 D3 B1 9A 46 18 15 C7 CA 2D | ].........F....-
5A E8 35 EC AB 13 C0 2B 92 C2 80 6A B2 EC A3 92 | Z.5....+...j....
9D FC E1 03 EB D2 6D B1 BB F6 9F 70 C5 2D A2 8F | ......m....p.-..
D0 74 F4 05 99 71 49 2D 02 89 62 D3 FA 88 B6 0F | .t...qI-..b.....
9A B0 B5 48 14 C4 F6 B3 6F 50 9E 47 0E 69 79 23 | ...H....oP.G.iy#
02 AC 22 3B 4E BE 71 25 DD 7A AA 7D 17 9A 4B 73 | ..";N.q%.z.}..Ks
7F B5 A4 26 7D B2 BA F6 08 E9 FC 61 56 41 F0 8E | ...&}......aVA..
CA 4B 9B 64 08 3B 4C A4 CF E4 55 72 0D A1 4A EF | .K.d.;L...Ur..J.
DB C8 30 41 2B 22 ED D5 19 92 E7 7E 8B 66 9D C1 | ..0A+".....~.f..
85 9C 80 3F E9 E1 67 81 C1 42 50 43 55 F9 80 15 | ...?..g..BPCU...
86 1D B9 51 73 2B 1F 7B 99 90 80 BE 62 A6 E6 3D | ...Qs+.{....b..=
85 FF 6B CE C1 4D 32 0D 28 F4 4F 68 1C 0B 4B 97 | ..k..M2.(.Oh..K.
D3 D3 E1 01 E6 A8 E6 2F 72 6A E0 49 54 30 1A B6 | ......./rj.IT0..
04 DF AE 06 A6 01 9D 95 EE 2B 08 9A 60 F9 80 07 | .........+..`...
C9 94 C0 3B 6C B7 2F 50 30 B7 5C FD 57 87 F0 46 | ...;l./P0.\.W..F
20 7C AD E3 90 ED 90 55 1E 96 AA 41 2A 73 A7 A6 |  |.....U...A*s..
6A 90 38 23 15 4C 46 DA E3 E5 C0 BB 7F 95 8F 4C | j.8#.LF........L
25 E8 99 AD CE 0A 08 CB EE AF FA 31 D7 64 D6 7B | %..........1.d.{
DD C6 90 64 2F ED 40 CA 24 65 21 49 E9 FF E3 9F | ...d/.@.$e!I....
44 17 E1 1D 46 8B 00 81 E4 F7 9F A9 70 1A 5A 3D | D...F.......p.Z=
25 D0 98 74 5C 22 5A 15 C8 19 3C 8A CC 25 B9 BC | %..t\"Z...<..%..
64 38 70 C7 62 F4 55 74 6C 63 FA 00 C1 00 FD 63 | d8p.b.Utlc.....c
36 94 00 4C B5 66 DA 24 32 7E 55 A9 C8 52 BE 1D | 6..L.f.$2~U..R..
BA 3A DE 87 56 0A C1 51 6B AA 88 22 7E 78 95 FB | .:..V..Qk.."~x..
4C DA BF AA 16 0D D4 A5 10 3B 81 6F 1A D1 F0 1A | L........;.o....
D9 EE FB 10 75 9C 88 66 8E 7D 7F 38 9E 20 76 9E | ....u..f.}.8. v.
B5 75 42 9F FA 22 9D D1 5F 33 B8 12 15 4D F1 47 | .uB..".._3...M.G
85 EB 51 52 D0 B6 F3 A6 D7 6A 16 C5 D6 02 3A 71 | ..QR.....j....:q
EC BE 2D 18 5F B6 56 E6 E9 AA F2 CB DF 31 8E D0 | ..-._.V......1..
06 59 9C 74 94 A5 4E 98 AB 43 4E 66 8C 44 E5 23 | .Y.t..N..CNf.D.#
3F 49 24 8D 67 63 02 58 46 EA 7B 71 CA 99 A7 75 | ?I$.gc.XF.{q...u
C6 24 6E E2 30 47 CC A1 9B B7 43 CD 25 09 37 1F | .$n.0G....C.%.7.
66 4C 95 DC F1 24 5F 11 27 59 F2 35 C4 17 67 3B | fL...$_.'Y.5..g;
D3 D5 C9 5A C9 F3 6A CC F2 71 B2 5E 46 BD 11 81 | ...Z..j..q.^F...
F5 28 0D A6 BB EF AF EE 06 04 C4 AB 2F 67 11 61 | .(........../g.a
2B 90 6D C9 44 A7 29 0A B3 89 7F 64 B0 BA 5C C2 | +.m.D.)....d..\.
4E 3B 97 F8 FA 10 B4 08 E5 C9 AB 42 97 CB A7 EB | N;.........B....
C1 00 B9 80 62 BE 44 8E F8 9C 5C A1 DF B7 E0 2A | ....b.D...\....*
4B 97 FF 5D 53 C4 8B 6F D0 98 5B 9D 62 DE 71 63 | K..]S..o..[.b.qc
DD B4 C8 AA 92 DD C9 B9 ED C0 28 82 6E E1 19 77 | ..........(.n..w

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
4D 5D 65 EC 66 D4 A4 E0 01 94 67 FC 76 92 C2 D1 | M]e.f.....g.v...
A8 E3 D5 C5 FF 4B E1 91 DC B3 13 FE 0A 54 C7 AC | .....K.......T..
1D 20 35 65 FB 83 86 B8 CC C3 45 DC 60 4C 92 35 | . 5e......E.`L.5
DB 38 B9 E8 E4 CD 31 44 6C 85 83 3F C7 1A EA F8 | .8....1Dl..?....
6A 42 E6 0C 8F 87 93 B2 02 AF A9 F5 66 4B 7D 65 | jB..........fK}e
21 57 52 37 01 49 BE 4A E9 6F 03 26 6F C3 BA 9C | !WR7.I.J.o.&o...
AC 27 93 15 94 8F F2 A5 F8 CA 91 4A 68 2E 7F DB | .'.........Jh...
E8 4C 81 FC B9 53 B5 D0 23 3F 41 E5 7E 1E 99 11 | .L...S..#?A.~...
E6 36 3D 07 A9 DD E7 B4 B7 BC 7D 2A 6E 6F 3B 8A | .6=.......}*no;.
91 6A BA E4 2E 22 72 3E 65 48 FF FD C6 CE F0 7D | .j..."r>eH.....}
A7 38 14 BE B2 A2 37 6A 7D AF AD 4C A5 7F 6E E7 | .8....7j}..L..n.
6A EC 59 FF B9 41 2F D2 A4 30 34 D0 61 8A 0B 45 | j.Y..A/..04.a..E
C0 AF 27 DD 0D 9C 9A 58 A0 C3 29 DE 79 6E 73 0E | ..'....X..).yns.
C7 53 9C 07 4A CE 36 A6 5E 95 3B C1 1C 1F B4 26 | .S..J.6.^.;....&
97 C5 F7 BB 05 2C DB 73 4F FD 1A 89 55 8B E5 B8 | .....,.sO...U...
93 55 07 82 97 A9 69 F8 0C 29 93 7C F7 1F D0 90 | .U....i..).|....
E0 E3 91 7A 16 5A D3 71 DB 49 DA 3A C2 5B 45 E8 | ...z.Z.q.I.:.[E.
EA E3 B2 44 96 73 00 76 4B 6E 74 17 37 23 80 85 | ...D.s.vKnt.7#..
7E 54 31 B1 95 06 19 33 35 75 79 89 F0 2C C7 44 | ~T1....35uy..,.D
4C 0E B8 70 FA 18 5D 96 0B 21 66 56 FF 42 E5 F0 | L..p..]..!fV.B..
4F 5D E9 46 FA 0D 5F C8 BD 88 BD 6C 1E 4F 79 3C | O].F.._....l.Oy<
E2 4C EF BE 6C 14 44 7B 01 95 5F B1 51 3C D3 54 | .L..l.D{.._.Q<.T
B9 1F 58 2B 66 4D 4E B8 78 C9 C8 1C 8A 04 D1 E4 | ..X+fMN.x.......
87 D8 55 AA C9 0B C2 4E 6E C6 D4 BC 29 23 E9 82 | ..U....Nn...)#..
9C 9A B9 BE 12 51 A6 20 8D 0F 89 BB 39 8D 6B CA | .....Q. ....9.k.
FD 5B B7 6B DC CF 1C 40 A6 5E 03 A8 AA 4A 77 A5 | .[.k...@.^...Jw.
57 B4 FD FC F1 34 3E EF 23 87 01 80 B1 65 4B 85 | W....4>.#....eK.
07 A8 9D F7 89 F2 05 9B 2A 11 86 02 47 77 D7 1E | ........*...Gw..
AB F9 A8 90 5B 4E 72 77 99 42 17 19 A3 2E 0C C1 | ....[Nrw.B......
00 67 B6 47 D1 6A 94 FD 75 07 3A 65 77 9D DD CA | .g.G.j..u.:ew...
1E EE 22 C0 21 58 C2 BA 92 BB 36 36 83 5A 58 2F | ..".!X....66.ZX/
9E 9F 5B 2E C3 E1 DA 23 5E 7B E5 54 D8 DD 81 59 | ..[....#^{.T...Y
FA C0 B8 9B E0 59 17 32 9C 0B 32 48 39 17 AB 02 | .....Y.2..2H9...
AA CF D6 81 32 1C D9 84 85 C1 97 0B AB 52 43 60 | ....2........RC`
FB 27 76 2B 41 FC A6 EC B0 E2 15 01 66 00 C4 62 | .'v+A.......f..b
69 EA 3E 73 1E 9C 9A 40 45 83 19 CA E0 8E 50 6B | i.>s...@E.....Pk
EE EA B3 32 72 D0 5C 61 52 72 1C 73 E3 48 78 2D | ...2r.\aRr.s.Hx-
53 C4 FF 1E 5B 7F AB C6 60 23 E2 77 29 A7 F2 E2 | S...[...`#.w)...
60 2B 74 65 B4 A9 1F 52 CC 67 79 39 54 06 C6 EA | `+te...R.gy9T...
E5 02 A4 12 85 46 0C 7A FE A1 DC DA 49 09 C0 60 | .....F.z....I..`
8A C7 BB 5D 8D AF 9B F2 49 54 E9 9F BB 4C 6D D1 | ...]....IT...Lm.
DA C1 A0 56 B8 08 0A E5 C5 7D C2 83 DF 3A 0F FF | ...V.....}...:..
AE F8 CA F5 2B 7D 26 91 C3 EE 3B DA 1F DF 1E 1F | ....+}&...;.....
7B 19 E4 7E B8 51 B3 F4 6D 99 B5 8C 6F DC 56 00 | {..~.Q..m...o.V.
27 7C 9B 09 1D 91 DD 72 E8 68 53 DD 62 B5 E6 BE | '|.....r.hS.b...
17 C6 66 D0 C3 0A 6D 8A FF 65 94 99 D0 73 DA B4 | ..f...m..e...s..
70 FD E0 D2 7F 69 F0 58 89 D2 6F 54 C4 CD 27 55 | p....i.X..oT..'U
94 4D 4D 78 A7 3D 9A EA D4 EE 93 EE CC AA 91 83 | .MMx.=..........
76 87 DD 9E 3B 5A 13 D3 8F D3 0C 56 12 8C 43 C1 | v...;Z.....V..C.
0E 23 CE F9 4F F5 BD 15 60 E7 4F 76 FD E4 EA C8 | .#..O...`.Ov....
81 49 B6 C8 AF 31 07 5E F4 7F BB D1 A9 41 E3 3D | .I...1.^.....A.=
9B 26 23 45 84 93 2E 81 C3 C5 B5 51 F0 35 4B F3 | .&#E.......Q.5K.
1A B0 42 58 25 58 E7 F3 72 68 90 CC D6 C2 AB C5 | ..BX%X..rh......
E9 ED 1A 49 00 1B 6C 66 30 6B 0A 07 F5 3D 66 15 | ...I..lf0k...=f.
01 4E B5 85 41 D0 2E 6A 43 51 26 37 2B D2 20 4B | .N..A..jCQ&7+. K
FF 80 EB 31 A5 F8 E2 F5 EF CD A8 1D 33 8E FD 06 | ...1........3...
7F 91 D2 E8 8C A3 DF 03 05 B4 0E 69 24 77 58 AF | ...........i$wX.
75 3A 9B 00 F3 A1 98 EA C5 18 28 6D 88 53 D2 B9 | u:........(m.S..
2B 23 A5 1C 38 64 0C 27 68 0C E8 99 BB FC 1B B3 | +#..8d.'h.......
85 56 43 E4 10 84 60 9D 9D 5B BE F4 02 D7 AA F3 | .VC...`..[......
CC 42 9B CE 94 09 7D B0 93 94 89 2E 89 CF B5 54 | .B....}........T
9E E2 4B 22 D3 ED 1F 68 47 E6 21 A1 2E 97 9E 39 | ..K"...hG.!....9
96 42 4A FA A5 4A 2A ED 21 33 E7 83 55 7F 76 56 | .BJ..J*.!3..U.vV
9D BB 88 18 E5 29 7A F4 00 80 8B 6F 64 9E 17 FC | .....)z....od...
86 49 42 27 42 57 D5 07 E6 94 75 95 E7 3C E7 A4 | .IB'BW....u..<..
77 F2 EE 41 09 54 3B F8 50 0E E6 2A CD 17 A9 AA | w..A.T;.P..*....
00 8D E1 90 13 0E F5 30 34 51 40 9F EB B0 96 0D | .......04Q@.....
1F F8 09 76 C6 89 DB 4F 57 F1 5F D4 C9 7E 5A 48 | ...v...OW._..~ZH
9B 4C 77 A9 09 11 FA 5B 49 1D 8C B1 E5 37 D2 0A | .Lw....[I....7..
6C A5 5E 06 B7 AD 92 5A 79 DD 30 55 98 FF 49 76 | l.^....Zy.0U..Iv
0A B6 5B AB 93 1C 1F F3 C7 BA 84 26 99 20 DA 94 | ..[........&. ..
96 0B 47 19 EF 59 91 AB 40 AF 56 B2 75 B8 FF 15 | ..G..Y..@.V.u...
43 F7 15 BC 2D BD 84 62 2C D0 1D B5 B2 F3 C2 96 | C...-..b,.......
5E AE 30 CA 7B 90 47 61 B5 BC 9E 65 B6 FC 71 F1 | ^.0.{.Ga...e..q.
D4 8A 97 90 D1 2E 07 5B 61 34 DD C0 3D 1A C0 C0 | .......[a4..=...
8E 03 87 68 4D FD D0 23 FB 5D 83 49 FF 70 C8 45 | ...hM..#.].I.p.E
11 AE 38 69 E6 17 15 19 37 D7 98 DC BF 42 D9 14 | ..8i....7....B..
E0 26 02 92 C1 2C 97 02 96 21 7E 81 5F 90 3A E1 | .&...,...!~._.:.
E7 B8 94 A5 12 DC D3 02 1C AA E3 C6 EC F3 2E E8 | ................
29 38 32 0D 5D A6 B9 91 69 C7 CD 4A BC B8 56 A8 | )82.]...i..J..V.
64 CF 37 A6 FF C8 B4 18 24 E5 76 C6 B1 D9 89 E0 | d.7.....$.v.....
04 1E EA 44 05 6E F8 62 0D 26 D1 BC 38 76 DE A1 | ...D.n.b.&..8v..
95 84 E7 7F 77 96 4A 57 55 DA 28 A1 71 71 3F 20 | ....w.JWU.(.qq? 
49 6D DF 6A F5 CA C9 D8 BB C7 92 BD 5D 15 5E C6 | Im.j........].^.
80 53 BD AF 8C 97 7C 64 C4 F7 B7 1F 7D 1A 24 C9 | .S....|d....}.$.
35 85 5A DD 20 74 9D EC D1 5F 05 E7 FC 8A A0 1A | 5.Z. t..._......
4C 2C 4D 6C E3 79 73 A5 E8 73 DB 5F DE 26 3C 03 | L,Ml.ys..s._.&<.
87 B2 3A 0C 33 54 CE ED 01 12 E1 E4 64 79 B7 47 | ..:.3T......dy.G
C6 03 34 B1 46 1D 78 C4 80 FA 59 EE 7C F1 C5 2D | ..4.F.x...Y.|..-
13 B1 08 59 0B AF 56 0B 33 C0 22 8C 72 AB ED A8 | ...Y..V.3.".r...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
89 12 85 3B 33 82 DF 0A 37 81 47 A5 E9 A7 F9 F3 | ...;3...7.G.....
25 3A 2A D7 C2 14 EB E8 91 00 35 8F 85 79 A0 C7 | %:*.......5..y..
B7 D9 C3 02 C8 18 AE B2 0A 05 01 68 3F 61 C9 0F | ...........h?a..
15 F2 27 D1 6A FA 96 1C 2E 2B 45 F8 B1 05 12 1D | ..'.j....+E.....
77 1E 53 CA 8F 3D C7 CE 6D 8E CA B8 57 DF 9F A4 | w.S..=..m...W...
96 F9 A8 CC 29 8E F9 1D DC 62 8F 3E 03 E6 5E 9D | ....)....b.>..^.
A7 BF 5C 8C DE 67 19 10 5D 89 A1 11 02 AE BF 6E | ..\..g..]......n
1B F3 81 58 73 9E 86 F6 16 17 03 03 00 40 77 6F | ...Xs........@wo
EF 3D 52 18 E1 42 EB 44 A4 DE 6B F5 1F AA 04 06 | .=R..B.D..k.....
BD 10 AC 63 25 CB 42 56 4A C9 3A C0 35 8B 3D 09 | ...c%.BVJ.:.5.=.
3C 1E 91 D5 18 A4 A1 B0 6F 23 2A B2 B6 37 04 4B | <.......o#*..7.K
A4 D8 ED 58 2C EE BB C0 11 12 54 63 EE 21 17 03 | ...X,.....Tc.!..
03 00 40 D1 D9 BE 5F 8C CB EC 7C F0 A0 AB A4 28 | ..@..._...|....(
B9 40 2A A1 84 E3 B5 FA 84 78 77 DA 50 29 9F B6 | .@*......xw.P)..
11 96 9E D1 A6 87 5F E9 9D AD 55 8D 1F 3D D7 10 | ......_...U..=..
44 97 4B 75 DC 86 1E F0 DC FC A9 52 A1 31 45 F2 | D.Ku.......R.1E.
53 C6 3C 17 03 03 1F 80 0E 5C C3 48 F9 BC 87 DC | S.<......\.H....
FA C1 C6 A8 F0 9D F0 80 69 A1 4E D3 03 EC 93 5E | ........i.N....^
6F 7B C6 81 D2 2C 25 A9 6C 49 B6 DD 8B B4 AF FC | o{...,%.lI......
C8 B7 ED 7F 9C 95 FD 85 D7 2B F6 B3 D7 97 44 D9 | .........+....D.
B0 D8 14 B7 91 95 60 7A 33 05 E4 98 EF D3 93 C0 | ......`z3.......
4F FC 42 BC 40 75 7D D5 9C 4D A4 9B 18 38 85 B6 | O.B.@u}..M...8..
C2 44 05 4A 60 D7 7E 56 85 73 D0 C1 72 5C B6 09 | .D.J`.~V.s..r\..
22 7C 60 66 5B B4 D3 3D E0 DF 82 BF B3 CA 5D E9 | "|`f[..=......].
89 CB DD E3 F4 2F 74 DC 8D 1A 2E 0E 92 E0 4E 4D | ...../t.......NM
64 E9 F4 F1 5A 2C 95 7D A1 74 18 EB F0 AC 53 5A | d...Z,.}.t....SZ
96 C1 D9 FC 81 DE 46 30 15 C5 3F F4 94 21 8D CA | ......F0..?..!..
6B 0A 84 2F 91 73 40 3F 24 7D 29 8B 32 37 2D 1F | k../.s@?$}).27-.
6E 18 E5 3E 5F 37 80 93 84 8F 25 7B 4C C2 22 52 | n..>_7....%{L."R
DE B4 D9 17 FB E6 73 B1 B9 83 34 39 91 5F 8B 46 | ......s...49._.F
0B BF 6F 71 60 FA 93 81 59 E1 21 78 B9 E7 26 D9 | ..oq`...Y.!x..&.
7F E2 B9 51 5C 4A CC FB 7A 1A 1B 59 66 89 D8 02 | ...Q\J..z..Yf...
A8 34 B2 A9 4E 14 A3 4E F4 0E 77 4B 7F 69 B1 30 | .4..N..N..wK.i.0
8B 52 C1 99 F3 16 4E 05 CC AD 7D C4 72 E3 CB CA | .R....N...}.r...
34 EA 60 B1 CB 33 2E D4 A1 C5 3C 2F 67 27 51 F0 | 4.`..3....</g'Q.
32 E1 DE EB 4D 32 1E 1A 0F 14 E7 3C CC 03 C7 BE | 2...M2.....<....
7D 9F C3 B9 02 F3 C7 B3 66 9B 60 BD 72 C1 D5 04 | }.......f.`.r...
46 74 34 C7 BE EF BA 3F C9 10 04 51 FD 91 08 9E | Ft4....?...Q....
DF 98 A3 9F 35 35 F6 30 78 A4 F6 C9 DF 45 39 F1 | ....55.0x....E9.
15 1B F0 3F 84 01 11 89 54 E4 C7 AD B8 79 2B C4 | ...?....T....y+.
62 C4 78 2A 91 73 0B 82 19 03 03 8D 51 05 EB 0A | b.x*.s......Q...
38 88 26 9A 52 CE 30 57 8A 97 32 A0 6B 82 48 41 | 8.&.R.0W..2.k.HA
E8 03 5C 90 55 2E 0C 98 3B 80 F1 C7 CF 67 05 33 | ..\.U...;....g.3
C4 D7 80 80 ED 40 6B C2 1A 06 42 F1 5D 34 4F 17 | .....@k...B.]4O.
B2 73 F1 50 B3 10 BC D8 A3 F7 F7 3F 36 60 39 EC | .s.P.......?6`9.
18 83 C5 82 39 13 48 81 45 85 D0 D3 3D 70 E8 41 | ....9.H.E...=p.A
97 4A D5 75 81 4A 4E 2C B7 6A E3 C9 6A CA EF D4 | .J.u.JN,.j..j...
92 D0 40 65 82 5A AA 21 4C CC F4 BE 4A C7 E3 07 | ..@e.Z.!L...J...
31 FD 10 42 A7 F7 43 86 E9 F9 69 7C 05 7A F9 B3 | 1..B..C...i|.z..
DB D5 4C D3 52 F9 53 66 B4 A4 22 C5 D1 88 23 51 | ..L.R.Sf.."...#Q
30 7B 3D DC 2E 8D D8 F1 9E E8 63 2D 0C E5 7C DE | 0{=.......c-..|.
DB 32 A7 92 E0 E6 AD 87 CD A2 19 99 F9 F6 7A E7 | .2............z.
25 0E 6E A5 20 86 38 7F F3 59 0E 50 EB B7 B2 D7 | %.n. .8..Y.P....
9B 73 3D 60 26 30 A0 7A EA 38 7C 5A 77 7A 65 49 | .s=`&0.z.8|ZwzeI
E4 3A FA 1F 5B 07 04 5C 47 E0 99 1B FD 24 B4 2E | .:..[..\G....$..
B0 E6 92 A4 7C B8 F3 EE FE 60 A4 83 B8 D5 29 7D | ....|....`....)}
A0 58 08 DC EF D5 91 9D 7B 78 B4 05 F4 9B DA 07 | .X......{x......
8B 15 D5 0A 20 95 A3 F5 FC EF AE C1 55 9E DE 94 | .... .......U...
F3 17 AB 71 54 C1 8A EF 56 16 37 96 7D 07 C5 40 | ...qT...V.7.}..@
9A 3C B2 DF C1 82 32 DC F9 70 5B D5 03 05 0C 6B | .<....2..p[....k
77 CA 8E D5 87 CD 90 67 9D CA 5C B3 84 93 8A 2C | w......g..\....,
17 69 83 C5 C7 3C D4 9A C8 C3 29 93 67 61 EA 39 | .i...<....).ga.9
C3 7A C3 EF CC FB AE 33 71 32 8E 02 EF B8 29 86 | .z.....3q2....).
B4 64 C3 1F 04 24 DA BC D1 7F 6A 9F 8D ED 9A EC | .d...$....j.....
21 C6 14 F3 13 2C F5 72 51 0F 4B B6 95 3A 80 02 | !....,.rQ.K..:..
7C 70 A4 72 72 A6 53 52 E0 9D 01 6B 6E E8 5D A0 | |p.rr.SR...kn.].
2E C7 4D EA AF 5D EC D2 E2 72 9F 9D A9 9C 88 1B | ..M..]...r......
EC F0 5B A9 D6 AB 58 EA D4 52 52 2A 9E 5B 1E AE | ..[...X..RR*.[..
C0 96 10 7D 5D 35 39 3D 19 F6 C2 F5 E5 B4 06 C3 | ...}]59=........
6C B7 EE DD 78 D3 E0 F9 C3 6C 2B FA 3B D1 85 40 | l...x....l+.;..@
A0 64 7E 5A E3 23 1F 33 38 0E 56 47 75 35 4F 24 | .d~Z.#.38.VGu5O$
58 26 38 A5 34 4F 4D 67 D0 CC 36 7A 42 D0 21 EF | X&8.4OMg..6zB.!.
7C DD F0 A9 06 7F 55 45 8C 0B 5B AB B2 61 77 26 | |.....UE..[..aw&
7F 37 D7 9D 64 15 04 89 99 96 A7 9E 8E C8 9E DD | .7..d...........
8D 29 5C C4 86 D3 6D 46 A3 0F C7 05 29 F4 83 53 | .)\...mF....)..S
F7 C8 FE 0B F5 C9 25 8D 7C 4A BA 76 9E 62 61 3C | ......%.|J.v.ba<
AA 09 5F 85 5D FF 12 D6 DC A8 A8 A1 68 69 FA 65 | .._.].......hi.e
7D EF 2E AC 5A C1 8F F4 70 56 35 74 97 8D E9 21 | }...Z...pV5t...!
F8 41 18 4A C9 04 ED 9C 8B B6 85 51 2D 2F 39 A0 | .A.J.......Q-/9.
13 06 67 0E F9 D2 69 6F F3 24 E0 8A B3 FD 03 93 | ..g...io.$......
7A C8 D4 C5 2F 86 DA F4 FA 9C 53 0C 82 DB 6F 4C | z.../.....S...oL
23 0A F4 07 F4 1A 99 B2 5F 3B BC CE 70 9F E9 EC | #......._;..p...
10 48 B3 17 62 2C B2 BB 31 74 DB E1 7D 98 CC A6 | .H..b,..1t..}...
5F 6E C4 BE 71 FF A8 B6 15 B7 4B DE DB BF C0 B1 | _n..q.....K.....
7C ED 8B AC C9 7E 3F 3F F2 8F C8 A8 92 51 64 1E | |....~??.....Qd.
4F 42 BA A1 8B 37 EB E3 9F 14 BD 99 BD AD DD 13 | OB...7..........
31 B5 92 C8 F9 36 6A 0A 53 49 47 68 5E E8 45 A6 | 1....6j.SIGh^.E.
C5 E7 EB 28 DC 66 EF DA 5E 74 31 1C 54 36 17 AF | ...(.f..^t1.T6..
B9 EB B1 8D AC 88 9A F0 E8 4A 14 70 68 B4 88 2A | .........J.ph..*
35 F3 3A 22 44 7D C5 D0 3C 44 01 07 8F 92 D5 1B | 5.:"D}..<D......

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
9C B1 DE 99 D5 F4 40 3B 5A 7E 9C D7 66 6F 8A D0 | ......@;Z~..fo..
40 7C 99 A4 03 F0 83 71 9D 35 99 71 74 5C 5F E7 | @|.....q.5.qt\_.
B8 1C 37 1E 49 B9 13 BA 4E 9B 27 38 8B CC 03 A9 | ..7.I...N.'8....
20 24 60 F9 99 31 C2 1D 0D CD 2C AD 76 0A D8 C7 |  $`..1....,.v...
68 8A A2 A3 56 2A 41 22 16 2E 67 91 0C 88 79 E7 | h...V*A"..g...y.
1A 07 9C 48 40 0F F1 C7 5C 77 DD DB 4E 6E AC B9 | ...H@...\w..Nn..
21 D1 F0 9E DF 07 BA 62 8F 76 98 4B B2 93 DA 9C | !......b.v.K....
22 8B 68 DD 48 16 89 F8 BB 61 CC 95 12 0A 57 58 | ".h.H....a....WX
61 18 1B 40 4D D6 14 F3 14 8E 31 0C E3 49 75 74 | a..@M.....1..Iut
CB 22 A5 74 63 93 9F 0F AA B6 8C FA 54 55 61 EB | .".tc.......TUa.
E5 FC 86 71 3F 34 8A 70 13 43 96 DE 5A 51 44 77 | ...q?4.p.C..ZQDw
FC 18 71 5D AF FE 43 0F 55 3D 04 4B 80 56 74 9C | ..q]..C.U=.K.Vt.
02 FC 2C BD 9E B5 F6 F9 73 FE 1F 1C 34 19 00 1A | ..,.....s...4...
9B B9 72 27 AE 25 F0 9A EA 81 08 FB 55 6F CE 6D | ..r'.%......Uo.m
C7 6D D9 07 5E 7B 2A AC 6B 8E B3 E6 13 FE 1A E3 | .m..^{*.k.......
EA 29 98 AB D4 11 C2 4D 90 FB 60 12 68 5B 35 20 | .).....M..`.h[5 
F5 3C 0B 85 79 67 49 85 60 C4 BB C9 F2 9C 7F A3 | .<..ygI.`.......
10 B7 15 E1 84 0C E5 F7 E2 A2 24 D4 E8 FE 10 ED | ..........$.....
67 A1 3C D4 90 0E E5 99 79 4C DC 04 12 BC 05 08 | g.<.....yL......
D8 08 18 62 AC 36 98 F0 16 BE 7A 12 B6 CF E2 50 | ...b.6....z....P
28 71 D1 08 5D 4F BA 90 9F 92 B8 6C 3B 34 01 DB | (q..]O.....l;4..
C8 40 F2 45 4F C1 6E 6B AA 46 CB A2 4A CC 25 95 | .@.EO.nk.F..J.%.
64 9B 25 A6 42 2C 30 25 F2 68 A4 3E 9E 52 4C F5 | d.%.B,0%.h.>.RL.
7D E4 B0 0E A6 68 A9 E9 92 D5 CA 1E 5E 26 55 EB | }....h......^&U.
73 7A 81 60 13 06 94 3C A4 A2 E1 09 B2 87 53 B1 | sz.`...<......S.
91 6D 21 9B 79 72 1C A6 21 4A 24 4F 9C 9F F5 51 | .m!.yr..!J$O...Q
13 6F 85 85 19 39 48 AB CE 7C 8A A4 68 9F 82 86 | .o...9H..|..h...
88 A5 03 F7 96 E7 73 EB 1A 80 48 2F 78 79 A5 EA | ......s...H/xy..
86 01 D2 A8 F5 47 5F 69 BD A5 3A 4C FA DA A5 E2 | .....G_i..:L....
EF 4A 1A 4C 16 E3 3B A5 30 05 8D 4A 2B D7 D1 D2 | .J.L..;.0..J+...
A9 70 2F 25 E7 19 C8 25 26 1A 5C 86 10 0B B0 87 | .p/%...%&.\.....
BE 70 EE AA 33 A9 BE 35 F3 89 B5 AE B6 F7 C2 5B | .p..3..5.......[
09 44 32 45 2F 46 1C B3 48 0E 90 AD F6 36 B8 AD | .D2E/F..H....6..
1C 97 4A 10 26 1F E6 96 AC D2 4B 23 2C E0 8E 32 | ..J.&.....K#,..2
58 E7 11 C2 1C 8A 59 0D 97 53 85 FC 43 9D 00 AB | X.....Y..S..C...
F7 8A A4 8B C8 85 94 67 40 91 EA 67 9C D9 06 0D | .......g@..g....
1F 5D 83 79 B2 1A 73 A4 F3 94 A6 59 B0 91 57 A1 | .].y..s....Y..W.
82 3F 1A 68 DA CE 77 E0 35 66 39 6E 63 30 41 6D | .?.h..w.5f9nc0Am
1A A1 2A CD 04 B5 97 BF D8 ED 83 72 47 8A 9F 7B | ..*........rG..{
B7 29 0D 3C B2 4C 37 F3 6C 57 91 69 57 4D 89 66 | .).<.L7.lW.iWM.f
D7 71 BF 57 1E A7 DF 4D E9 FC F5 CD 0A 1E 9F 61 | .q.W...M.......a
AB F1 8D CB F4 A0 1E CB B1 AD 58 13 F4 8D CF 26 | ..........X....&
27 61 AA 5A E0 AE 84 06 E5 41 8F CE 25 0E 77 10 | 'a.Z.....A..%.w.
5E F8 02 56 DC 49 4E 9E 44 86 9D FA 09 B0 35 2B | ^..V.IN.D.....5+
1C C3 17 84 BB 94 7E A6 D2 42 44 18 C5 6E E9 B4 | ......~..BD..n..
02 6B F5 BF 5E 72 D6 AD 54 55 13 76 C2 72 13 FF | .k..^r..TU.v.r..
27 6A 09 51 77 63 23 AC E6 69 23 52 0A 6A 90 27 | 'j.Qwc#..i#R.j.'
C2 1C 3D 6C F3 90 8E AD 98 63 67 E8 E6 03 63 5E | ..=l.....cg...c^
E4 96 51 9E 75 ED 29 11 7A 75 E2 6E 0A 15 1D 42 | ..Q.u.).zu.n...B
72 4F 9B 5C 2C 79 69 A1 A7 1C F6 DD 6B 05 F7 70 | rO.\,yi.....k..p
89 25 C6 BB F1 3D 7F 4E FD B0 A7 D0 0C 62 FC 3A | .%...=.N.....b.:
1B CF A5 C2 7C AB FD 10 C8 3A 4E E2 E1 B9 E1 BC | ....|....:N.....
0D 67 5F 22 D1 42 3E 25 26 8A 32 A2 FB 39 16 46 | .g_".B>%&.2..9.F
55 A4 96 B9 6E 9E 16 D8 FB 41 6C 58 71 F9 02 73 | U...n....AlXq..s
72 71 9E E6 44 6D 7D 8B 15 46 06 20 D0 98 D1 67 | rq..Dm}..F. ...g
17 B1 7F E1 54 25 A8 A4 09 AE 1F 2A 3B 4C DE 36 | ....T%.....*;L.6
B7 40 0B B2 42 A0 73 C0 64 C0 46 54 03 05 83 37 | .@..B.s.d.FT...7
0A DC 66 4C 88 D9 A9 4E 59 21 91 A7 39 A9 B3 0E | ..fL...NY!..9...
8F 58 08 4F 23 3B 21 DC CE 47 CC 37 79 E9 03 F8 | .X.O#;!..G.7y...
AC 95 C4 BB 88 FE BE 04 87 86 F0 DD AE EE A1 CF | ................
1F E7 A4 08 85 CE 4E 8C 42 5E 96 E7 49 27 D0 8F | ......N.B^..I'..
06 57 5B 9D A5 D3 12 DD 86 8F C5 8C C2 4D 23 29 | .W[..........M#)
36 29 C1 5A 91 27 EA 5B A8 A3 03 3E A3 C3 C7 D3 | 6).Z.'.[...>....
CE 0B 8C 7B DD 00 BB F9 C6 A0 03 72 C3 EE 6B 62 | ...{.......r..kb
53 C4 15 15 5D 64 E4 E8 23 41 6F 9D DF 87 E2 A8 | S...]d..#Ao.....
FB 24 E4 DE E6 5E 3B A2 E3 03 FE 8E A0 0B E6 13 | .$...^;.........
9B D8 09 D8 AB 4C 57 3E A1 39 A7 C2 81 61 E5 45 | .....LW>.9...a.E
B5 8F A4 C5 93 DC DA 53 B5 BF 42 CA 78 A4 3C 6A | .......S..B.x.<j
2E 7D 89 2A A9 54 EA DA B3 38 49 C8 86 82 C8 42 | .}.*.T...8I....B
BF E4 90 61 34 0F 87 BA 97 79 4F 65 DF 3E 47 29 | ...a4....yOe.>G)
50 3F B7 86 75 F3 0E 7B 70 71 71 BA B2 3C 9D E4 | P?..u..{pqq..<..
2A A5 09 EB AB 9B 4E 97 79 A4 D7 AD CE 98 A4 A6 | *.....N.y.......
EF C2 A4 89 22 5E 20 36 46 4E 7C DF 07 A3 DB 1B | ...."^ 6FN|.....
0F 35 CD AC CE 17 5D E3 79 2B 7E 14 4F F3 4D 86 | .5....].y+~.O.M.
0F A9 1E F0 C0 42 26 C5 31 EA 4D 20 C0 48 38 78 | .....B&.1.M .H8x
87 D2 80 56 23 36 A7 02 C6 0C C5 A3 CB EB FD EE | ...V#6..........
4A C4 7B EF A9 17 52 EA 79 59 97 FB ED 0E D5 74 | J.{...R.yY.....t
78 1E C2 79 FD 62 CF 84 8C 7D DC 17 A5 F9 23 AD | x..y.b...}....#.
F7 34 82 4C DB 10 81 0E 1C A2 BD F3 BB EF FC 86 | .4.L............
75 46 DD 35 06 71 CF 07 92 23 0B A7 36 CE 42 65 | uF.5.q...#..6.Be
43 95 A8 45 30 AC A9 16 B2 93 22 FB C7 2B 44 C2 | C..E0....."..+D.
9A 9A 53 57 56 E8 E3 73 E0 95 D5 93 F9 62 8E 21 | ..SWV..s.....b.!
C2 F1 E9 02 BA 8E B3 20 7E 27 47 98 78 B4 D2 93 | ....... ~'G.x...
F5 AB 0A 56 7C CB 40 B5 D2 AC 5E F3 6D BE 11 F8 | ...V|.@...^.m...
F3 CF 7D 81 33 64 27 71 2B 4C D5 AC 96 5F A2 0D | ..}.3d'q+L..._..
00 3C 2D 5E 62 49 AD E7 E7 09 91 8B D3 7F 54 15 | .<-^bI........T.
39 60 7F 46 8E 8C A5 10 AD 80 C7 23 EA C7 83 35 | 9`.F.......#...5
AF C8 7F 65 AE 14 5A AD 36 13 11 D3 0A B8 60 2A | ...e..Z.6.....`*
21 58 2D 4B 7F 51 73 EE E6 54 C8 A4 54 AD F4 FA | !X-K.Qs..T..T...
4A A0 07 25 5D 61 9D C7 B4 2D 82 4E 46 15 9B 12 | J..%]a...-.NF...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
7E 3A 93 6C C7 FA 83 07 A1 C2 51 60 B5 BC 11 B8 | ~:.l......Q`....
4D C0 E3 57 FF 8A B5 B2 74 DE 38 59 AD E7 7B 0D | M..W....t.8Y..{.
46 B9 A1 E7 B9 57 0C 36 CE FA D5 8D 36 1C 22 13 | F....W.6....6.".
25 37 BF 27 F4 42 D8 2C 16 66 F5 C8 EB 0B 4D 0E | %7.'.B.,.f....M.
A5 FD E8 D2 E9 68 8A CE 78 80 A0 12 2F AE D1 0B | .....h..x.../...
BE 96 4B B7 16 3C E8 B9 36 06 E0 7D 50 5F C4 2C | ..K..<..6..}P_.,
23 88 39 38 A5 CA 5B AE C7 97 4C B5 BF 59 80 F4 | #.98..[...L..Y..
95 BF 25 DD 9A CD B5 21 23 F8 B4 17 23 04 A5 03 | ..%....!#...#...
C9 7D E8 95 04 EB A9 96 A3 D2 FC BF AF 8B 00 BA | .}..............
D5 0B DF C4 08 C5 E0 1B 10 3E 70 0F DF 9D F7 CF | .........>p.....
13 DD FF BF A2 A6 72 04 F2 DD FB 89 29 76 03 78 | ......r.....)v.x
52 36 47 90 04 4A 2E 4B 91 1F 48 E1 04 BF 11 7A | R6G..J.K..H....z
AD B4 0C 91 E8 4F 66 8C 45 7C 53 AB 72 3D 3F B7 | .....Of.E|S.r=?.
40 3A 94 64 7E D0 30 9A 5D 96 05 0C 9E D9 81 A4 | @:.d~.0.].......
B0 1B 08 AE B8 DE 83 FB B5 CF C9 58 82 C6 17 46 | ...........X...F
DC 1F 0E 99 70 7C 01 61 2F 3C 93 41 3A 98 55 15 | ....p|.a/<.A:.U.
62 DE ED AF A1 15 A9 10 F4 4E 80 6D 52 7C 28 B4 | b........N.mR|(.
21 B6 F4 A4 DD FD DD 37 5F EE 09 03 94 E5 69 E2 | !......7_.....i.
87 68 EF AF 84 20 8C 28 57 1F 1F 06 06 0F 33 BC | .h... .(W.....3.
71 27 D2 C3 42 70 76 28 13 44 B6 5F 41 B7 EB 5D | q'..Bpv(.D._A..]
4C 81 94 8F 14 54 4E 8A B5 B3 1B D0 76 66 2B 26 | L....TN.....vf+&
DF 47 5F 57 F2 32 FE 94 3F 68 DF E1 90 35 A0 5F | .G_W.2..?h...5._
17 1B 7C C7 E6 91 AB C7 96 C0 68 16 73 14 29 58 | ..|.......h.s.)X
5E 62 49 C3 C0 F8 C4 18 D8 B7 01 57 60 FC 5A A3 | ^bI........W`.Z.
46 A4 45 2A A4 FD 91 C2 0C C7 B7 ED 28 AC 9C 2C | F.E*........(..,
45 37 4D 20 95 92 A4 1B 5E 4A 1D DF E9 F9 EA AC | E7M ....^J......
32 61 64 39 0F 27 D7 09 56 04 CB C1 43 58 77 9F | 2ad9.'..V...CXw.
33 7B DD D1 78 49 43 C9 1A 58 22 F7 E4 7A 0B 77 | 3{..xIC..X"..z.w
56 2C E2 16 02 1F 0F 52 F8 20 EF 00 95 84 7B C8 | V,.....R. ....{.
DE 8E 03 70 2D E5 5B 3A 0B B3 7C BC FD 45 4F 4F | ...p-.[:..|..EOO
FB A3 2F 88 00 B8 93 85 5A 5F 60 C6 3A B7 63 C2 | ../.....Z_`.:.c.
01 61 6E FA 28 AC 3B F9 B9 63 92 2F 59 2A 31 1E | .an.(.;..c./Y*1.
64 9F 47 EE 2A C4 11 02 04 ED AD F4 9F D9 D8 D7 | d.G.*...........
C0 E4 EB 57 89 1E 01 30 BC DE F5 34 6D F9 9F 24 | ...W...0...4m..$
87 C4 42 5C DA A1 C6 8D D2 89 63 29 95 B2 90 D3 | ..B\......c)....
58 52 B4 BC 41 F9 17 42 6F 05 A3 DC 09 E8 B8 3B | XR..A..Bo......;
B2 7C 86 CE E0 11 BE 55 B5 9B 10 74 67 78 E3 9D | .|.....U...tgx..
AD 00 76 B7 67 43 43 3F 1B F0 33 CC 21 A7 B9 06 | ..v.gCC?..3.!...
6F CC CF E8 0F C3 21 B9 08 F7 DA 6E B2 0F 09 91 | o.....!....n....
25 E1 7B CB 1D 5D 65 15 5C E4 2B E8 D2 FA 77 71 | %.{..]e.\.+...wq
46 22 81 3A A9 DC A8 B8 61 42 29 8A 6D 36 9F 1C | F".:....aB).m6..
A6 50 B4 A5 65 8A 30 99 7F 3B 51 C2 35 0A E7 86 | .P..e.0..;Q.5...
CF 23 6E 91 79 7F 82 D4 2B 83 ED BA 00 EB CC F1 | .#n.y...+.......
0B 0A 38 02 FD B6 19 32 11 CD 94 6C 78 B1 61 B7 | ..8....2...lx.a.
66 E6 24 9B 0F 94 EB 84 B5 CE E6 83 65 08 28 D6 | f.$.........e.(.
D2 8E 9C 44 18 BC 55 35 5A DC 15 EC 17 7B A6 75 | ...D..U5Z....{.u
06 B6 42 38 F5 97 72 50 EC 34 63 5C BF 0F 08 2A | ..B8..rP.4c\...*
E9 14 71 51 39 AF 65 F6 47 62 AE 1D D1 F9 3D A4 | ..qQ9.e.Gb....=.
83 5D A1 CD BF E5 ED F3 6C 8A 9F 45 59 8E 6F F1 | .]......l..EY.o.
4F 11 AD 66 9B B8 8A 9B 43 34 1B 7F D0 FD 97 6A | O..f....C4.....j
BA 86 D7 AB D5 C6 E1 FC 3F 44 C8 90 25 8B 69 82 | ........?D..%.i.
50 DF 6A FF 16 15 AD CB DA 41 D0 E5 6A 74 B8 9D | P.j......A..jt..
50 12 B1 F8 B6 A8 DF 83 EC E1 42 69 30 A3 CE 92 | P.........Bi0...
7F A4 A1 5F E4 3C C0 98 47 BD D2 5F 67 0A 04 34 | ..._.<..G.._g..4
53 63 C7 70 27 C2 A1 AE 1B 60 05 C6 31 B0 6D D7 | Sc.p'....`..1.m.
B7 32 E0 9F 4F 5E BA 5A FF C7 64 33 1D 2E DF A0 | .2..O^.Z..d3....
D9 C3 14 CD 3D 60 CA 43 B0 55 BD 42 1D 4F 19 36 | ....=`.C.U.B.O.6
2B 01 35 98 16 D6 2B ED F9 A8 7C E7 93 8C 05 C0 | +.5...+...|.....
10 C9 1D 4F 3E AD E2 00 09 C8 C1 FE 13 E6 FE 78 | ...O>..........x
93 44 16 60 1C 19 0C 43 BA D9 B4 0E 05 90 6C D7 | .D.`...C......l.
3F A6 BA F3 CE BD 67 F4 29 2C 6E 41 36 60 B9 66 | ?.....g.),nA6`.f
5B 26 9A 16 F2 46 7A 8D D8 A8 53 FD F0 94 5D D4 | [&...Fz...S...].
30 A5 DA 78 4E 7A BE 7D 88 F6 A9 D9 8A 30 E6 C7 | 0..xNz.}.....0..
96 50 A3 1F 95 35 40 18 EE 5C 5F 0A C2 27 13 1F | .P...5@..\_..'..
7B 7E DC CF 58 B5 76 98 13 73 9F 61 85 68 97 FD | {~..X.v..s.a.h..
F7 DD DF D3 CD 53 A0 A2 80 7C 3A 66 9A 0C D2 C6 | .....S...|:f....
E1 30 E6 36 D5 5E 42 3B 2A AC 95 FE EA 6E B0 52 | .0.6.^B;*....n.R
A0 DD 7E 4F 2D AF E4 0F FB 8F BE EB 1C 45 E5 15 | ..~O-........E..
8F 8B 1C 47 DF 35 02 91 7F 72 A2 97 0A 7C AA 2E | ...G.5...r...|..
AE E2 8F 69 E7 90 2B E2 BB BF C6 A5 AF 74 93 87 | ...i..+......t..
4D FC A8 04 77 78 72 FE 6F 5D 9F BB D8 8F CE 01 | M...wxr.o]......
1C E7 79 83 29 65 CF 0B 82 D2 D3 52 BF B7 DC 8F | ..y.)e.....R....
64 DB 80 E2 13 2D 05 BE BC 0F AB 34 C9 00 10 54 | d....-.....4...T
E9 B8 1B 6E C3 41 96 3E 61 9B 2C 61 9F FF 70 24 | ...n.A.>a.,a..p$
C2 FF 93 15 17 A1 D6 24 B3 06 1A 19 80 DA C9 9A | .......$........
7E 5B C6 33 BB 83 43 2E 9E 8C EA E5 40 91 66 31 | ~[.3..C.....@.f1
F4 56 CB E3 6F 24 53 A1 70 7A EA B9 D7 2C 81 0C | .V..o$S.pz...,..
3D B3 B0 22 C4 1C F7 FB 45 BA 45 5F 3C 0C 58 65 | =.."....E.E_<.Xe
9D 01 D7 AF D2 6F D8 E3 9B 8B AC D9 29 4C AE 13 | .....o......)L..
A3 48 EA F2 F5 A2 5A 51 87 B5 23 07 77 B8 52 EB | .H....ZQ..#.w.R.
0C 86 59 D6 BA EC 13 08 A0 DF C0 E4 09 D4 00 19 | ..Y.............
4B DD ED 37 47 BC E2 D9 89 69 82 12 C4 4C 33 04 | K..7G....i...L3.
B0 CA 9E 42 22 5C 73 33 E0 10 5A A7 77 96 93 6E | ...B"\s3..Z.w..n
20 49 88 51 17 58 32 A1 79 C9 6E D9 7D C2 CF 44 |  I.Q.X2.y.n.}..D
4A C8 B6 CC 8C AF BC 36 3C 8F 6C 9B 6B 8C 8F 2D | J......6<.l.k..-
C3 2D EE DA D8 E3 AD 0F 6E 19 5A 93 B8 31 21 56 | .-......n.Z..1!V
60 F8 6B 43 F7 C9 A5 F3 96 DD 13 54 B1 4B 4A 82 | `.kC.......T.KJ.
6A 4D 73 7E 1D 00 C4 83 DB DC B1 EF A2 05 60 F4 | jMs~..........`.
50 FB BF 08 AF 9A 22 85 42 0F 24 A7 2C 05 BC CE | P.....".B.$.,...
6A 88 41 EA 48 02 0E 02 4D 70 3D 5E 4F EA 36 2E | j.A.H...Mp=^O.6.

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
A8 6C 32 07 0E 0D 6A A0 79 89 77 BD 30 67 52 59 | .l2...j.y.w.0gRY
7F 7A 23 35 D8 A2 B1 A9 0F 82 E9 E5 9C 00 96 C9 | .z#5............
4C 8A B9 03 74 5F 8F 21 B0 DB 86 55 DD E2 DC DF | L...t_.!...U....
3E 42 11 D2 03 11 DB 7E BD 20 00 6A 4F 02 CC 24 | >B.....~. .jO..$
A1 DE 67 EA 43 56 3F 81 40 0D 46 7F E9 17 DB 2D | ..g.CV?.@.F....-
E8 C3 64 8C BE AB 78 51 78 64 5D A0 48 78 AA 9E | ..d...xQxd].Hx..
D6 CA A4 52 7D 52 A3 20 7F 18 24 93 D0 5C 16 B6 | ...R}R. ..$..\..
67 18 57 61 43 C2 8D 6E 50 C6 FB 51 81 FE 93 E6 | g.WaC..nP..Q....
9B EE C3 CA 4C 40 9F 65 58 D7 6F 78 5A 04 54 8A | ....L@.eX.oxZ.T.
B4 F0 DF CF F3 A1 61 7D F1 D4 65 A0 3D D9 9B E0 | ......a}..e.=...
05 67 5F C8 7F 42 A4 30 5C B9 2A 77 13 74 E5 77 | .g_..B.0\.*w.t.w
2E 9C 6E 82 51 86 00 74 95 F9 6D E4 1B 05 69 85 | ..n.Q..t..m...i.
ED DB B5 9E 37 CA 39 42 82 E7 A3 33 F7 97 17 AC | ....7.9B...3....
4C 7B 20 5B 2A D7 4C FC 2B E7 65 43 9D 10 0D A9 | L{ [*.L.+.eC....
84 ED 7E B9 97 08 3A A2 49 7E 55 71 3C 0B 7A D7 | ..~...:.I~Uq<.z.
76 44 28 D9 EB 56 C5 0D E0 7E 89 70 7F 4F AA E8 | vD(..V...~.p.O..
6D C0 9F 83 E7 CB 43 27 24 A2 79 64 5B E4 AD B1 | m.....C'$.yd[...
0A EC DA D4 43 50 D5 78 A2 A9 C9 F6 7C 95 C3 C8 | ....CP.x....|...
00 F9 34 55 6D B5 2A 37 F5 57 B2 E8 9B D3 6C 61 | ..4Um.*7.W....la
22 D5 BF 6C FC 5B 58 1B D5 05 82 2F 77 18 02 15 | "..l.[X..../w...
E9 73 6B 66 11 AD 1A 07 63 63 6C 2D CB 6F 4D 3F | .skf....ccl-.oM?
64 72 0C C7 C9 B4 7F 7C 94 EF 5D 72 8F 22 16 B9 | dr.....|..]r."..
3F CC C3 7F 38 C5 92 F8 16 60 06 83 37 5E 69 CA | ?...8....`..7^i.
5D 3F 6E DD B9 B2 37 5B 35 56 8B AA 52 F6 26 0A | ]?n...7[5V..R.&.
F9 0C 65 FC 46 FA 0E F7 2B 1A 63 E3 72 50 01 45 | ..e.F...+.c.rP.E
68 22 11 D1 F6 94 FD CE AE 63 35 11 DB A9 C4 A3 | h".......c5.....
3D EC 9A AA 82 A2 6E C7 BC C4 28 CD 03 3B 22 B7 | =.....n...(..;".
E2 1C 31 F4 7E CA 94 79 27 CB D5 3F 10 27 C8 42 | ..1.~..y'..?.'.B
40 5B CA 94 A0 AB C5 27 A3 01 CB 8C EB 3A 38 AE | @[.....'.....:8.
79 70 B4 62 21 C2 FC 3C 70 D7 6E 46 4C EF A3 1D | yp.b!..<p.nFL...
0E A5 37 BD 54 10 FF 66 CD 94 81 C6 34 53 13 BE | ..7.T..f....4S..
2B 5D 43 00 FB E5 06 7A 58 F0 16 81 7E 12 51 46 | +]C....zX...~.QF
3A C2 00 02 41 E0 2C 92 6C 23 D0 C1 3E AE 72 8D | :...A.,.l#..>.r.
F2 49 E8 2A 97 04 85 AA 7E 6E F6 1C 43 8C 65 32 | .I.*....~n..C.e2
4E 80 F9 50 81 1D 13 A9 07 01 79 D2 AA C2 52 0A | N..P......y...R.
E5 BC C0 B3 C0 78 51 3A D7 E2 BC D4 96 EF 75 7B | .....xQ:......u{
CF 89 84 C6 89 FF BD D8 2D 26 C5 54 17 C6 D9 40 | ........-&.T...@
46 AB 43 88 B6 AF 37 3B F1 FE 51 39 B4 4E 5C 62 | F.C...7;..Q9.N\b
04 DD B2 C4 5E 29 93 4F 0A A7 96 04 5B D4 0D 3F | ....^).O....[..?
26 81 43 C7 58 4F CE B0 37 32 77 73 37 EF CA 07 | &.C.XO..72ws7...
8F EC 86 CA 0D 12 5E D4 B3 9D FA 1A 4D 6E A2 9D | ......^.....Mn..
BF 5C 2D 39 8E 05 25 A4 93 AB C3 04 85 99 20 60 | .\-9..%....... `
FB D6 60 73 3A 3C 97 BB 18 19 03 5E 02 E8 0F 40 | ..`s:<.....^...@
98 9E 5F 12 E5 90 14 71 0A EC 46 33 EB 74 67 F6 | .._....q..F3.tg.
2E 4D 00 D7 C5 0B 3B 3B 9E 21 9D 98 45 B6 78 58 | .M....;;.!..E.xX
5C 22 32 8E ED DB 68 2F 29 9E 47 FE B4 A6 31 43 | \"2...h/).G...1C
BD C6 F6 E4 37 C4 EF 91 4E 15 95 71 9C F5 14 8D | ....7...N..q....
95 E2 59 7A FB 58 3F 6C E9 78 1E 06 22 EC 51 88 | ..Yz.X?l.x..".Q.
48 B6 FB 42 BB 69 84 37 CF F4 2D 44 AC 55 00 B1 | H..B.i.7..-D.U..
28 73 0C F5 95 D7 6B 5C 06 7D 0F C9 82 68 7D 28 | (s....k\.}...h}(
C2 AD 22 69 B8 63 33 F8 F6 70 E4 7C 9E 00 67 9D | .."i.c3..p.|..g.
AA 40 31 81 53 B0 61 B6 17 2D 51 D8 55 7A 5E 38 | .@1.S.a..-Q.Uz^8
FA C9 07 6C E1 AB 9A 54 B4 EF C0 C1 56 A5 C4 5A | ...l...T....V..Z
81 FD 1B 88 21 A9 98 87 AE 35 A2 86 5F F7 B0 4F | ....!....5.._..O
6E F3 F6 5F 42 2E D5 89 D9 30 F8 EF 14 35 87 47 | n.._B....0...5.G
08 0D B7 76 C1 C9 7B EF 50 C3 1C CF C8 FC 11 FD | ...v..{.P.......
AD 88 D1 33 59 61 9D 65 83 BA 2F 83 CC 27 B2 8D | ...3Ya.e../..'..
D8 CA 1E 7E 07 A8 3C 73 4B 8B 8A 62 A0 BE A4 AF | ...~..<sK..b....
24 82 7D 35 51 D0 AD AE 72 D2 51 51 4B 12 D5 B5 | $.}5Q...r.QQK...
A0 89 7B 9D 72 6F C9 1B 52 A6 0A B8 9C AA E0 80 | ..{.ro..R.......
28 1C 20 E0 21 20 80 75 70 0F 45 0E 63 B0 B2 6D | (. .! .up.E.c..m
6F 7F 8A 8A 57 36 DC 00 19 E9 17 14 6E 8E B3 A4 | o...W6......n...
22 4A 3F 4F 7C B8 CE 16 80 74 96 36 B2 76 7C 18 | "J?O|....t.6.v|.
E0 E9 7C 50 E5 11 08 CB 0C DF A1 E7 96 76 6B 41 | ..|P.........vkA
14 E8 42 27 FF 25 FD 18 EE 38 2F 47 73 68 C8 65 | ..B'.%...8/Gsh.e
73 2E A6 23 A7 E5 C8 C7 91 75 B5 58 3A B7 C4 BE | s..#.....u.X:...
BD 1C 39 1D C6 BB 55 7B 63 1C C3 F9 10 7E 72 EB | ..9...U{c....~r.
5D 37 CE D9 9D 23 80 29 D3 D0 D3 4F 90 14 06 52 | ]7...#.)...O...R
95 6F F3 89 7B 8F 61 58 9D 4D C0 36 EF 5F 44 63 | .o..{.aX.M.6._Dc
83 D6 95 5B FD 03 0E 41 73 FA 7E D8 4E 09 6A 48 | ...[...As.~.N.jH
41 3A A6 EF E3 D8 D0 86 AC F6 C9 43 42 56 3C BC | A:.........CBV<.
65 5B A0 25 2E E0 5D 39 BB CB 90 83 8A F7 80 4E | e[.%..]9.......N
D0 11 AC E8 59 75 62 D5 81 B4 5A 40 22 82 39 9B | ....Yub...Z@".9.
A9 15 34 EA 68 AC D8 33 0A 3F 5D ED 76 B7 3F A5 | ..4.h..3.?].v.?.
97 5E C0 52 FF 28 61 80 5A 01 F2 E9 D1 92 C7 07 | .^.R.(a.Z.......
A2 92 CC 85 E2 F6 77 7B 4C 1D BC 52 08 2E 87 64 | ......w{L..R...d
D0 51 B6 69 C9 4C 4B 3D A5 2F F2 1D 71 E5 C5 A9 | .Q.i.LK=./..q...
66 B9 3B E3 D0 26 D3 DE ED 38 0E 1E 58 83 B9 16 | f.;..&...8..X...
8E AD 3B B5 F2 2E 5B B7 D1 A6 FA 42 3F 35 F2 AE | ..;...[....B?5..
5F B7 B8 06 BF 19 48 02 98 7A 6B D9 31 09 48 E7 | _.....H..zk.1.H.
C6 58 5B 34 15 26 03 AA A0 70 9B 82 39 C8 94 F8 | .X[4.&...p..9...
66 B9 DE 37 D4 64 83 3A 3E A8 0B 26 81 5F 0A 2A | f..7.d.:>..&._.*
95 A1 59 A3 B9 3F 32 C5 B8 8F 02 32 C3 EE 2A EE | ..Y..?2....2..*.
BA 42 C0 AA D5 B4 1C BA B0 26 85 F3 B1 45 77 15 | .B.......&...Ew.
3E 1B 62 51 31 70 FF 2C 85 89 C9 5C A7 C6 B7 6C | >.bQ1p.,...\...l
89 7C 22 AC 5F AF 14 CB 21 BD A4 36 93 6D 31 74 | .|"._...!..6.m1t
39 B7 62 3E 27 03 8E 6B D4 B4 25 DA 94 E8 6E E7 | 9.b>'..k..%...n.
D6 3D C1 93 14 E9 D1 43 61 34 D2 BB 13 BA 85 8A | .=.....Ca4......
B7 56 7A 1B 11 A7 51 5E FA 22 16 C8 07 FA E2 59 | .Vz...Q^.".....Y
C4 27 A0 5E 82 8E F9 77 07 47 6F B8 E8 04 DD D5 | .'.^...w.Go.....

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
9F 85 4B EF A4 CE 27 42 14 E4 19 F9 12 12 85 7D | ..K...'B.......}
91 96 58 DE 4C 5F 79 CC AE 68 73 8A BA 88 68 04 | ..X.L_y..hs...h.
11 65 B1 06 53 F4 32 54 79 B8 EE 4A 07 90 B4 AE | .e..S.2Ty..J....
9D 48 82 48 A7 E7 3D 8D A9 94 84 FC 65 8E 00 D5 | .H.H..=.....e...
95 8A E0 09 A9 FD FB C6 FF C7 2F 0D 32 EC D7 67 | ........../.2..g
28 B0 74 26 AD 3D B1 4F 67 0C C0 F5 0E E4 13 64 | (.t&.=.Og......d
50 84 E6 46 6C CC 4C A7 40 AD 5E 0C 4A D4 5A 96 | P..Fl.L.@.^.J.Z.
2C 24 79 8E 0B B6 5B 22 BF 93 89 62 81 0F 77 D6 | ,$y...["...b..w.
FF 67 0E 03 95 5D 7F 66 D5 E6 57 43 A3 EF 81 8D | .g...].f..WC....
AA 67 80 71 FA 89 9A 44 2D 22 C5 80 20 A1 25 0C | .g.q...D-".. .%.
0B D3 E4 F0 49 33 29 9F DD 45 98 FD 19 DE FB F7 | ....I3)..E......
17 3C E7 DB 57 B6 5A 73 75 3F 52 93 BE 60 28 76 | .<..W.Zsu?R..`(v
B8 BB 2E B7 D7 E6 D2 00 BD ED 29 0A A9 08 D2 64 | ..........)....d
74 4E A0 AC B3 2C 08 06 74 CB E7 D9 24 75 D0 DC | tN...,..t...$u..
A1 00 A1 33 4F DF D3 CC E5 3A FD 18 23 05 82 82 | ...3O....:..#...
C1 AB 9F E5 B9 F4 1F D1 32 AC E6 1E F0 FD AF 84 | ........2.......
CD 73 C1 99 56 BB B9 98 1A 2D D9 9E 62 59 B1 51 | .s..V....-..bY.Q
63 64 13 BF 6C DF A1 88 22 3F FD 7E 7C 5E 70 47 | cd..l..."?.~|^pG
7F 57 64 D2 94 B5 06 42 52 B1 26 40 98 43 94 DC | .Wd....BR.&@.C..
49 5A 72 06 44 32 D9 1F F4 95 27 FF 4E 64 38 66 | IZr.D2....'.Nd8f
F6 C8 1D 60 9B E4 38 13 B2 F8 2E A9 A6 13 6E C1 | ...`..8.......n.
30 AB E9 AF F7 68 D3 18 1F 07 9A 61 23 34 50 05 | 0....h.....a#4P.
40 2C 51 C0 7E 95 4A 89 63 9B 9E DD 96 D9 E0 7E | @,Q.~.J.c......~
96 EE 28 0B 49 BB B6 EC 5F 04 A2 DA F5 D6 A6 F1 | ..(.I..._.......
22 76 4C 89 8D 44 8D FF 79 36 73 D6 BF A3 98 9F | "vL..D..y6s.....
91 DE E9 CF DF 25 41 67 B0 8C DC 9D AE BA 45 90 | .....%Ag......E.
45 B0 2C 89 AA 52 78 99 B5 05 38 98 3D D1 5A A4 | E.,..Rx...8.=.Z.
A2 8D DE CE 8B 13 99 6B CB A8 74 73 32 77 8D E6 | .......k..ts2w..
DB 6D BE E5 B3 1E 6A E8 90 48 7D A2 FD 24 BA 25 | .m....j..H}..$.%
97 EB AE 3F BD 76 02 66 BA 9F FF 9F 70 4D E0 37 | ...?.v.f....pM.7
FC E6 AF 6C 5C CE F3 8B E6 09 25 7D 9C FC B6 CB | ...l\.....%}....
8B 2B 89 80 1B 44 EE 63 AF 15 2A 4F 2C 02 B3 E9 | .+...D.c..*O,...
C6 F9 1B 0C 03 94 AC E0 70 16 15 2C A9 BD B1 8F | ........p..,....
66 86 57 2E F2 7A A1 8F 26 1A B6 EA 13 F3 55 60 | f.W..z..&.....U`
10 92 BF 71 E2 BE 68 18 1D CA D5 57 66 4C 79 3A | ...q..h....WfLy:
1C 32 C6 09 A0 02 9F 96 DC 3E 56 33 70 DB FD D0 | .2.......>V3p...
F6 71 EB 8D 45 A0 40 8F B6 C0 66 8B 7B D0 65 0A | .q..E.@...f.{.e.
70 10 F9 95 3F 99 80 46 A5 2E FA AC D4 FE 20 4C | p...?..F...... L
79 07 24 4A 76 78 20 9D 96 83 C5 EF BE 5A 4F 17 | y.$Jvx ......ZO.
8D 2D 8A CB 93 4E 2E E9 F5 E4 89 E8 D6 14 DF 35 | .-...N.........5
87 57 61 43 25 20 CB C7 E1 BD 6D C2 6E 68 6F 8C | .WaC% ....m.nho.
4D ED 2C 6A AB 62 13 D3 7E A1 F7 73 EF 17 AB 83 | M.,j.b..~..s....
85 7F DF 36 F8 2E 48 11 67 28 5D 9B 0B 8E 4F 1C | ...6..H.g(]...O.
F5 6C D7 29 08 C7 BD 7E 24 8F 04 9D AF B7 09 67 | .l.)...~$......g
EA 57 D6 AD 88 8F C6 F1 81 06 EB 20 BA 1F C1 78 | .W......... ...x
3B 5C 90 3B 2E 93 D7 24 93 D0 84 A5 55 C2 2D CF | ;\.;...$....U.-.
A5 F5 B5 76 85 A5 AD 41 0F 2D 38 E9 6E 19 1D 14 | ...v...A.-8.n...
C8 93 98 6B 6C C9 42 7F F5 79 2D 99 36 2B 9C 37 | ...kl.B..y-.6+.7
87 9D 1A BB CC E8 2C 19 E9 F5 70 9E 82 9D 64 B1 | ......,...p...d.
AE A4 12 0B A6 A0 B1 20 67 C8 61 E9 1B E5 32 C9 | ....... g.a...2.
DD C1 BE D6 02 1F AF E9 51 4D 21 79 51 7C BF 51 | ........QM!yQ|.Q
BF 88 8D F2 21 78 47 E9 6B 91 BB 91 30 6C 1D 2A | ....!xG.k...0l.*
B7 99 7D 29 8E 8C 23 DC 53 82 86 B6 40 50 C4 A6 | ..})..#.S...@P..
4C 7A 2E 47 3A 89 89 69 71 8E E8 94 B5 65 2D 7E | Lz.G:..iq....e-~
2F E9 C6 CD 8D 4D F4 8C 5D 65 75 32 AE F2 65 BF | /....M..]eu2..e.
8E A7 2C 42 71 51 BF F2 2F 5A 9C 94 41 D5 A7 67 | ..,BqQ../Z..A..g
FF 9E 61 56 CA 59 51 C3 77 A1 9A 30 D3 3B 46 08 | ..aV.YQ.w..0.;F.
06 65 7B FE 47 3E A8 FB 60 8D 14 4F 58 61 1A 30 | .e{.G>..`..OXa.0
A0 F9 7F A7 3F 97 D9 52 6C 50 D2 22 0D 2D 55 DB | ....?..RlP.".-U.
0D 5C DE 7B D2 07 4A 4F C6 B2 5A 55 E0 B1 FD 74 | .\.{..JO..ZU...t
F4 ED 03 DC 43 89 2D 02 7D 94 B9 3A ED 42 67 B6 | ....C.-.}..:.Bg.
C9 00 B1 B7 BC D3 5D D2 EF F3 59 91 78 33 B2 CF | ......]...Y.x3..
87 91 E6 49 0F BE F3 AA BC D1 EE 8F 30 25 8E 73 | ...I........0%.s
22 12 E3 58 36 01 95 A6 97 44 FB 73 7D 3D 3E F7 | "..X6....D.s}=>.
AF 41 A8 68 8E B4 30 0A AB 05 0A 6F 2F 14 68 06 | .A.h..0....o/.h.
E1 2C C2 E6 E5 A9 62 5B 6A 39 FF 57 26 F9 96 95 | .,....b[j9.W&...
5E E2 FE 86 F4 F7 E4 0D B4 A9 87 18 B4 F5 C0 6B | ^..............k
42 10 35 70 11 AF A1 B5 35 03 A6 7B D1 2F 4D 20 | B.5p....5..{./M 
C5 27 0D CB 94 D3 45 BE EA 28 51 23 C7 67 E3 E2 | .'....E..(Q#.g..
C3 23 11 B9 F3 B2 A2 16 40 B6 16 16 26 F9 1C 56 | .#......@...&..V
4B D4 04 90 AB E8 6E 01 8B 9D 5E 37 3C 65 7A 9C | K.....n...^7<ez.
ED 30 32 41 FB 3A 5E D6 47 2D B9 74 F5 DC 03 40 | .02A.:^.G-.t...@
9E E0 5E 37 41 AE BE 35 6F 56 6A 41 32 4A AC E7 | ..^7A..5oVjA2J..
13 3B 51 AE 38 92 3C 50 2F D1 68 25 D4 2D C5 4B | .;Q.8.<P/.h%.-.K
A4 5C BF 5B B3 F3 4C 2F BF 44 5D 1B 9A 64 76 EE | .\.[..L/.D]..dv.
49 D6 FC 06 19 84 FB 30 EA 5A 33 A3 2A C4 1B 01 | I......0.Z3.*...
58 FA 70 41 3E 5B BF 01 88 41 9C 00 40 5E 4D 7A | X.pA>[...A..@^Mz
A1 86 65 59 FE 09 7D 48 72 D5 C9 EA 49 ED 49 72 | ..eY..}Hr...I.Ir
12 EC 16 E8 A1 24 43 ED 26 5C A6 83 6F 11 D2 2A | .....$C.&\..o..*
87 47 68 E9 59 6C 99 78 C3 FE B8 8C 8C 5F C6 76 | .Gh.Yl.x....._.v
41 C5 33 6D 49 A0 E7 B7 D7 AC 37 79 A5 15 C6 32 | A.3mI.....7y...2
6A D7 76 AD 98 A3 42 83 E7 D1 9D C9 E6 42 BB 50 | j.v...B......B.P
E1 61 A0 5C 15 61 7B 46 F9 17 99 B4 F0 AB 71 AD | .a.\.a{F......q.
63 31 FD FB 44 95 4E 8E 6C 78 99 15 D7 1F 7F 38 | c1..D.N.lx.....8
FC 3A D9 61 EB 85 99 66 E7 85 49 3E 75 43 44 65 | .:.a...f..I>uCDe
8F 1D EA B9 77 76 2C 25 0A 74 CD 32 93 93 08 3D | ....wv,%.t.2...=
0D 5E D1 CB 34 29 58 94 B6 25 0F 98 46 11 85 84 | .^..4)X..%..F...
07 F7 85 AD 44 9F BC 5B FF 9B 19 07 2F 93 0D 79 | ....D..[..../..y
0B CC B6 87 55 89 1F 11 91 D8 AD 7F E1 2A 72 FD | ....U........*r.
F6 72 D6 7A 5E 43 88 99 DA BF 2A 3A 45 B5 BA 11 | .r.z^C....*:E...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
7A 76 12 42 B7 8E 38 A8 18 33 8D D8 FA F3 65 FF | zv.B..8..3....e.
75 03 3E CC 81 D2 F1 FE E3 EE 53 16 01 A1 56 7B | u.>.......S...V{
DA 57 1D 6C 88 E7 D3 41 01 1A E5 A6 D4 21 2F 3F | .W.l...A.....!/?
A8 5B 4C B3 2A 7D 99 AE E6 CE 7E 47 2E 4C E2 CC | .[L.*}....~G.L..
C0 F9 3F 13 25 8F 77 D4 0C 3C 9A D2 11 95 F9 AE | ..?.%.w..<......
CC 1F 18 C7 47 A0 9F 28 B8 1C 7B A9 04 17 1A 7F | ....G..(..{.....
F7 94 0A 7F 1D 09 21 48 6F 3A 0C 7E 4A E0 DC 9F | ......!Ho:.~J...
E0 2A 75 3E F8 98 11 3A 65 5B 56 6E B1 33 20 C1 | .*u>...:e[Vn.3 .
0E 2A 96 3A 5F B4 53 2E B2 99 00 0A 7B E8 5C F6 | .*.:_.S.....{.\.
D4 4C C3 FB D8 62 60 93 36 CA 04 18 DB 60 9E 73 | .L...b`.6....`.s
E1 5F 70 46 58 86 2F 34 66 63 DF 07 F1 C6 76 F6 | ._pFX./4fc....v.
A6 48 77 D8 61 20 9B 00 63 07 5C 4B E0 AA DB F4 | .Hw.a ..c.\K....
50 18 9C 35 1E 78 DA 82 0D 22 68 54 8B 24 5E 40 | P..5.x..."hT.$^@
D9 4C 95 66 0B F6 1C FD 9E 2D 25 6F AD DB 02 44 | .L.f.....-%o...D
91 A2 BA DA 01 3A 78 CC 4F C0 7E 1A 0E BC FC EC | .....:x.O.~.....
71 3E F8 28 7E D9 FD DB 0D 26 4A 57 2D 8E AA 2D | q>.(~....&JW-..-
04 FC 6A 9B 57 06 DC 5C E8 A9 70 4F 8C 37 34 BA | ..j.W..\..pO.74.
34 77 67 43 0B 4C 52 7B 72 7D 7E AA 6A BC E7 0B | 4wgC.LR{r}~.j...
D3 A4 F0 0E 5F ED C5 2D FE FA 5E EF D2 69 BF CB | ...._..-..^..i..
AD E6 94 75 BF BD 7F 06 28 9F 89 D9 3E 6B BB 60 | ...u....(...>k.`
85 5D 85 96 8C D6 C6 8F 6F F1 AA B1 25 AC 05 A2 | .]......o...%...
5C 48 F9 49 5E 0A DA B9 A8 AB 6F CD 18 AE F8 68 | \H.I^.....o....h
BC 97 5A 3E A9 EE 9D 6D A5 45 D1 04 73 AB 6E E0 | ..Z>...m.E..s.n.
DB A1 6F 59 71 14 6A 0E ED 8F F9 8C 0E E3 B6 A0 | ..oYq.j.........
9A 47 91 BC 31 F6 18 E8 A4 6E A7 0D 9F 7F C8 DD | .G..1....n......
1D 91 C0 22 E0 90 87 DD 5E AF D1 C4 EC 38 FC D9 | ..."....^....8..
C0 E2 06 E6 38 F6 BA B2 4A 2B 60 24 D3 D5 40 DC | ....8...J+`$..@.
E7 A8 C7 F8 69 71 AF 63 11 D0 FC 09 B5 2C 8C 7C | ....iq.c.....,.|
48 F4 B5 75 EF 2A C6 98 DF A1 05 3F AB 43 F0 9C | H..u.*.....?.C..
71 31 7D 0F 21 B7 CC 1C 39 37 61 24 6B DF 10 1D | q1}.!...97a$k...
0A 96 4B 2A 45 FC 84 81 89 7B F4 88 C3 AB 23 4E | ..K*E....{....#N
09 18 59 58 93 34 59 CD CE B8 37 EC 5A 45 48 B6 | ..YX.4Y...7.ZEH.
70 75 8E 90 64 EC 96 FF CE E8 62 94 1D 14 8F D5 | pu..d.....b.....
1C 07 37 0E 51 4E 28 A9 C3 67 B0 B6 36 1F AB B9 | ..7.QN(..g..6...
2C 82 21 2A 45 3A E8 20 8F 95 4B EC D7 8B D3 E8 | ,.!*E:. ..K.....
AA CC 57 82 37 8B EA D1 27 84 7F 9B A8 FA 9C 86 | ..W.7...'.......
48 86 EB 64 9F 3E 9E DA 62 60 77 D5 10 1B 00 A8 | H..d.>..b`w.....
73 B3 DE 48 5E D5 17 0B EE CF CF E4 31 02 07 09 | s..H^.......1...
78 21 07 25 61 99 8A CD F8 71 72 8C AD 5D D9 79 | x!.%a....qr..].y
43 6B 03 2D 66 D5 8D 7C 5E 39 8E 26 83 7A 9F 6F | Ck.-f..|^9.&.z.o
B4 FD EA 07 D6 47 F6 26 CA 3E 2D 9F BE 6E 4B DD | .....G.&.>-..nK.
D2 F0 91 70 5A 4E A3 AA 41 30 45 4B BF D5 FC 79 | ...pZN..A0EK...y
A7 11 61 5A 16 A0 22 7B 28 4D 35 3F CA CE 84 5E | ..aZ.."{(M5?...^
65 6A 70 3E C6 49 44 DD E4 14 06 0F BB AB FB CF | ejp>.ID.........
58 61 D4 2B 87 BB BA CA 1A F6 6F F3 D3 9E 77 41 | Xa.+......o...wA
47 AA F1 48 F2 81 7B DF 9D BF 72 1D CE B2 7B 32 | G..H..{...r...{2
3C FD FC B2 DC 6E B1 F4 CD 27 BC FA A5 EF CD 3E | <....n...'.....>
81 5D 68 1B 2D E4 77 FF 16 D9 4C 30 41 C8 23 9F | .]h.-.w...L0A.#.
A8 36 92 21 26 D5 7F DF E5 03 44 A7 B9 85 2A 4D | .6.!&.....D...*M
35 09 F2 E7 39 09 87 21 CB DB 7B 0D BD ED 36 FD | 5...9..!..{...6.
D9 55 DA C5 7E D2 CA 13 04 E2 94 46 F2 78 07 03 | .U..~......F.x..
62 8F DB 93 A0 55 0A 34 8B 30 D6 CC 30 41 64 32 | b....U.4.0..0Ad2
E1 23 36 38 36 28 91 B1 8E E0 15 55 EF DE 25 D6 | .#686(.....U..%.
EC 98 BC 6D 50 4B 4C EC DC 43 C0 29 04 82 71 D0 | ...mPKL..C.)..q.
03 73 57 85 88 66 DD 79 0F 3C F8 A4 0E F2 FE 74 | .sW..f.y.<.....t
63 CF A5 72 04 99 8C 5B DB A0 D7 90 45 64 5E 3B | c..r...[....Ed^;
4C 80 85 17 EB 26 A7 10 9D 47 66 56 52 01 F9 16 | L....&...GfVR...
C9 2F F0 19 BF 02 B7 73 C1 60 DB B7 0C 2D 2F 52 | ./.....s.`...-/R
E7 0A 86 2D 23 75 40 A2 6F 5A 47 18 E7 F9 8C 1C | ...-#u@.oZG.....
8E F0 24 F4 76 EB DD 4E 03 B5 63 55 5E 4E FC 37 | ..$.v..N..cU^N.7
CB 14 72 FC 31 7C 6D EB 13 DC 06 7B B4 E7 E4 F1 | ..r.1|m....{....
66 C8 BE FE 8E 0D F1 1D 9F BA C8 70 D8 02 14 0F | f..........p....
B4 98 8F E3 C4 EA 31 5D F0 79 09 FC B8 42 FE A2 | ......1].y...B..
56 8F 81 27 E1 D6 13 65 B0 2F B3 33 9C A3 4E 30 | V..'...e./.3..N0
37 AF 10 DA 65 C8 3B 20 53 4A 2D 65 A7 AA F7 EB | 7...e.; SJ-e....
CA B2 F7 46 2C 50 2B DC FE AD 83 97 A8 D6 CD 9E | ...F,P+.........
E6 6B 6B 97 65 72 37 1C 38 48 D9 96 0F 2F 74 06 | .kk.er7.8H.../t.
7F 95 BE 1B 22 0A BA BC 1B 4C B2 63 67 37 72 29 | ...."....L.cg7r)
78 49 73 D7 A3 76 5A 33 D9 8B CD FA 10 95 B8 2B | xIs..vZ3.......+
BD 8A 5E 7B DD B5 38 8E 04 49 6B D7 50 3C 98 3B | ..^{..8..Ik.P<.;
72 63 BB 2F 3C 6F F4 9F 17 03 03 00 40 EC 99 F0 | rc./<o......@...
4C 5E 9C 6E 49 E5 E4 21 5D 2C D1 79 DF 05 16 A8 | L^.nI..!],.y....
D9 E3 99 78 66 15 22 68 AE 6B F2 26 00 FE 27 5F | ...xf."h.k.&..'_
3D 3B AA 89 57 4A 04 3F 36 9C 20 F4 D6 51 3B A5 | =;..WJ.?6. ..Q;.
EE D8 30 7C A4 60 34 2A DC 02 F0 AD 2E 17 03 03 | ..0|.`4*........
00 40 BD 75 F0 3B 11 92 0E 4A D0 73 D4 27 46 1B | .@.u.;...J.s.'F.
69 0F B7 17 4C EA 9A 75 2F C8 0B C0 32 0F 0D 7A | i...L..u/...2..z
F3 BF F2 74 DA 31 74 75 67 B0 2F A4 4A D3 D8 48 | ...t.1tug./.J..H
49 98 55 14 48 E2 40 23 4C B4 1E E1 C7 E8 87 CF | I.U.H.@#L.......
CE E4 17 03 03 02 10 4D 33 96 01 53 01 66 65 8F | .......M3..S.fe.
98 FB 62 30 E3 E5 0D 2C 05 0B 0F 8C 69 D2 75 36 | ..b0...,....i.u6
C0 CB 23 66 2E EB 5C 42 CC B5 FA 92 2C 22 76 E2 | ..#f..\B....,"v.
68 EA 6E DB 42 5F 34 B3 46 89 66 0A 54 83 C1 3D | h.n.B_4.F.f.T..=
31 7B 87 AF 0E 06 6F 17 88 8A E1 48 28 F6 D6 6E | 1{....o....H(..n
F6 87 D7 C2 41 2B 24 CA 4B 19 26 FA 49 B1 DF 34 | ....A+$.K.&.I..4
1E 02 27 E1 01 8A 81 62 8F 52 A4 5F FC 40 D9 E5 | ..'....b.R._.@..
72 6D 51 49 7B 33 E5 E9 96 6C 08 18 B1 CB 21 D2 | rmQI{3...l....!.
A0 90 11 DA BD D8 A2 05 0C 06 09 16 2E 93 67 D0 | ..............g.
F9 49 09 81 D9 EE 2D DA E9 75 83 29 72 B7 E4 E8 | .I....-..u.)r...
9E 33 90 FA FC 96 49 89 F8 80 2A B8 83 10 AC 6B | .3....I...*....k

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
D2 3B 98 8A 5E 5D 0F 00 3A FB 1A 57 95 19 8B DA | .;..^]..:..W....
CA 8D E2 05 52 05 D2 E9 54 8C EF 61 79 3E 19 B7 | ....R...T..ay>..
50 49 6B A8 7B D6 55 DF 24 86 71 3A D9 C9 5E A0 | PIk.{.U.$.q:..^.
28 EC 0F 86 93 BC 6D 41 55 9C 79 E4 69 CC 66 5F | (.....mAU.y.i.f_
8E 11 6C 6F 5A 36 8D 12 CE 20 11 E8 67 80 2A AE | ..loZ6... ..g.*.
1B F5 8B 57 B8 6C 79 1A 94 54 E2 AE 0E 3A F5 AD | ...W.ly..T...:..
12 22 C7 D8 46 DA D2 65 FA 82 6A FF 6A BC 16 DC | ."..F..e..j.j...
45 96 D1 86 17 C4 F3 95 4D 9E FA 2E 67 65 18 06 | E.......M...ge..
88 D1 56 1F C8 55 BE 09 E7 C0 53 3C 9E CF 50 58 | ..V..U....S<..PX
49 4B C8 83 91 8A DD 52 06 FD F4 AC 01 EE FB 8D | IK.....R........
A5 F2 00 FD 26 F6 42 C7 3F A5 5D 0E 3A FF 93 9D | ....&.B.?.].:...
AB D8 A3 17 1E D6 06 B4 44 EE 74 A2 22 1F B7 FB | ........D.t."...
EE 46 64 2E B8 86 83 80 E6 5D 40 AA E2 56 56 FE | .Fd......]@..VV.
9D 11 68 1C C1 65 55 B7 3C E3 DF E6 E0 DD 0D CB | ..h..eU.<.......
D6 AF C5 87 C2 06 03 3A B4 AD 7B 8F 25 E2 B8 C2 | .......:..{.%...
FC A7 1E 0C 84 7E 15 C1 50 75 08 97 F0 8F EC CA | .....~..Pu......
EE 3C 37 A2 49 5F 11 40 1A 4E DB E1 A7 0C F3 01 | .<7.I_.@.N......
6A 0A 8A 5D 21 E3 EE DF 67 8A F2 20 09 02 5D 3F | j..]!...g.. ..]?
EC 4C CE 80 31 EC 61 F2 FF 65 47 EB D0 82 0D 83 | .L..1.a..eG.....
0D D7 7F E1 6F 08 CE 3E 02 1D A2 6C 81 2B 54 F3 | ....o..>...l.+T.
01 55 AC CF 8D 25 85 BB 7D BF 5B 89 BA 6F AF 4D | .U...%..}.[..o.M
E8 0B 0C C4 B9 CF 7A 0D 2A 6B 3F 3C 11 D3 80 9F | ......z.*k?<....
5C 39 12 AA 6C 32 3B 17 03 03 00 40 57 64 A5 D1 | \9..l2;....@Wd..
C9 03 14 E3 19 B4 BB CA B8 CF A4 12 B2 91 0E 85 | ................
91 D0 50 7E D8 8E E9 34 D8 7E 74 EB F7 84 97 76 | ..P~...4.~t....v
60 1E 28 0A BB C1 6B AF DB 86 84 EA C3 98 7B 28 | `.(...k.......{(
65 90 D6 BE 95 0F 90 4B 02 C1 34 B2 17 03 03 00 | e......K..4.....
40 FE 15 0F 1F 56 05 D6 73 CC 81 03 29 44 A9 2E | @....V..s...)D..
B8 51 45 AA 05 EA B6 6D 8C 2A BA 84 66 0C 55 C3 | .QE....m.*..f.U.
41 FB F3 10 38 98 0A 6E 4E 7A AC AE 03 53 9D 86 | A...8..nNz...S..
01 E1 17 B3 B3 18 C7 C9 D7 FD 7B 52 C5 A9 93 7F | ..........{R....
79 17 03 03 1F 80 50 97 18 09 F3 33 DA 04 D5 6C | y.....P....3...l
DD 2B 58 72 05 96 4E D2 72 23 F3 6E C1 2F D0 88 | .+Xr..N.r#.n./..
D4 2C D1 86 B8 98 27 21 F6 C1 76 9A 53 C4 B3 7C | .,....'!..v.S..|
92 73 29 C3 0C 7B 58 55 2C B1 22 72 B5 D6 AF 49 | .s)..{XU,."r...I
12 10 13 AE 14 D9 C2 04 4C 75 9C 62 30 1B 40 59 | ........Lu.b0.@Y
42 7A 58 71 BC EC C4 E5 1F F6 B6 EE C6 D4 3A 3B | BzXq..........:;
F9 6E 40 28 D8 7D 28 58 A0 54 40 E2 9B 19 DC 16 | .n@(.}(X.T@.....
11 1C 1D 86 EF 3E 7C 7D D2 E3 F2 41 3F 5D 60 B3 | .....>|}...A?]`.
F1 BE 29 B5 2E C7 F2 97 79 52 63 A1 FD 4B 14 2C | ..).....yRc..K.,
80 77 9F D2 17 AD 89 60 27 29 33 D8 36 8F 62 65 | .w.....`')3.6.be
3D 84 51 7F F0 2D 0A 77 A3 99 45 90 48 D2 53 71 | =.Q..-.w..E.H.Sq
4F B1 B2 7B 1C D9 8F EB 72 AD E1 48 38 3A B5 13 | O..{....r..H8:..
E4 40 87 F1 EF 23 FA 56 B7 4C B8 3B 79 93 5F 8C | .@...#.V.L.;y._.
F7 4E 9E 9C 2C 29 9F E6 5E E3 2F 65 39 B2 C8 E4 | .N..,)..^./e9...
76 C1 5B 66 DD F7 E9 89 63 49 FA E0 81 29 5A B6 | v.[f....cI...)Z.
27 E4 31 EC 31 F4 75 E1 F5 CA FE 90 B3 62 88 D5 | '.1.1.u......b..
C2 39 6D 5D 61 F6 07 D2 A3 65 D2 D9 47 C1 4E 2C | .9m]a....e..G.N,
DA 85 DF DD 09 6B 73 BB 20 27 30 7D E6 10 DD 53 | .....ks. '0}...S
3C 6D DA 53 76 DD 35 78 29 62 79 4B 61 E2 1C C7 | <m.Sv.5x)byKa...
78 3A 56 76 7D BF 87 BD 2F 85 D4 10 C8 90 41 87 | x:Vv}.../.....A.
A1 DD C0 6E D2 4D 79 B2 3A FF C5 19 21 64 88 14 | ...n.My.:...!d..
77 AB 39 42 60 62 14 33 C0 BB 44 D9 BD 18 BF 3D | w.9B`b.3..D....=
A6 43 BD 2B C4 6E 4A A8 DC D3 4C 5A C8 A2 B2 24 | .C.+.nJ...LZ...$
2C 37 4C F8 F8 B8 3D 8F F8 39 D3 25 B7 3A 0C B6 | ,7L...=..9.%.:..
D1 5C 27 A5 30 66 F4 8F 39 B5 A1 07 DF 92 E1 0C | .\'.0f..9.......
EA 3B 1E 34 41 8A 68 5B 17 3F 3D 8C F6 B6 57 3E | .;.4A.h[.?=...W>
32 3D CB 17 5B 9B 5B 18 C5 1B C4 0F C6 BC 20 18 | 2=..[.[....... .
4D 61 3D 95 E4 D6 25 9E 0B B7 E4 C9 58 F3 8F 3E | Ma=...%.....X..>
AF 77 60 00 33 6B 01 3F 07 D5 49 DF 91 7F 17 7F | .w`.3k.?..I.....
F9 EC 0E 63 A5 F8 7B 9B 20 E6 4D 49 C6 1A 12 BF | ...c..{. .MI....
CC FA A6 1F 49 3E 6C A8 8C F6 24 82 7C B1 A7 10 | ....I>l...$.|...
4A 77 4D 3F E7 A5 41 9C 99 81 1E 1A 71 D0 DE 30 | JwM?..A.....q..0
91 EB 7F F9 ED 1C 9B 3D 70 A5 94 3E B7 45 0C 80 | .......=p..>.E..
CD FD D3 59 DC 41 DC DC EC 65 1A 45 D5 5E F3 F1 | ...Y.A...e.E.^..
FA C5 C0 9E 76 87 7E 93 A2 B1 F9 45 A9 5E 99 9A | ....v.~....E.^..
DB EE 44 65 80 17 71 22 10 C0 40 4E 2A B7 AE F2 | ..De..q"..@N*...
DA 16 39 80 E0 B1 51 71 F1 17 06 5C 39 1E CA B0 | ..9...Qq...\9...
AC A2 06 02 75 4C 99 9E 14 BE 6D A3 F4 7E 16 EC | ....uL....m..~..
AD 61 04 87 31 F5 D8 46 DD 59 88 D5 E6 A4 E7 A4 | .a..1..F.Y......
DE 10 BC C2 A3 11 5A 8F 04 8D 6D 3B DD 6B E1 52 | ......Z...m;.k.R
96 77 9F 3A 84 D2 8A 38 87 3F 86 4D 68 FA 31 D8 | .w.:...8.?.Mh.1.
9E BE 09 D2 B2 7C 24 5D 8F 5A 8B 8D CE CC EA 68 | .....|$].Z.....h
72 77 97 10 9D CC 9A AE B4 E9 D9 76 24 B1 B1 96 | rw.........v$...
B1 08 B0 AB 2F 6F 18 9F 52 00 13 1A C7 61 97 54 | ..../o..R....a.T
F4 13 FA 8C 5E 72 6E 8D AD 7E 5A 1D 6F 2B 6A ED | ....^rn..~Z.o+j.
93 39 EB B3 C8 45 DF 37 E0 31 02 F0 12 C6 2E 97 | .9...E.7.1......
EC 8B 59 EF B6 FD 63 82 75 4F 87 7F D3 D2 26 89 | ..Y...c.uO....&.
35 38 8D 76 0A 1B 63 40 77 B0 F7 5E 4F CB 02 41 | 58.v..c@w..^O..A
42 55 E8 59 C7 D9 30 6D 15 39 42 4D C4 5B 56 AA | BU.Y..0m.9BM.[V.
72 0B FF 0C 72 58 97 B5 54 66 7B 57 03 9E A8 3E | r...rX..Tf{W...>
B9 09 13 99 36 FF 11 D5 6F 17 5C 79 42 57 1D E1 | ....6...o.\yBW..
96 0A 0C B3 46 F5 E0 61 4E C0 3A C5 E1 F9 3F 4C | ....F..aN.:...?L
C9 E9 0A 33 6F C2 78 C2 7B 93 EA DB C8 43 67 65 | ...3o.x.{....Cge
85 DD 4F 7A BC B3 16 DC EA 93 0E F3 42 8F A1 7B | ..Oz........B..{
6E FC E4 71 5D 97 AA 2F C8 ED 1F D2 DE 2F E7 B1 | n..q]../...../..
77 82 DE F6 12 F3 87 FD 9F A6 98 CA EB 86 44 08 | w.............D.
EA A9 D2 88 FA AA 8F 59 39 23 9B 36 77 72 1D 5A | .......Y9#.6wr.Z
1C 00 A1 90 AF C3 8E 05 02 6F 8A AA 88 50 64 17 | .........o...Pd.
90 8C 4D BC 0B CA 1F 75 EC 51 DC 26 0E 43 BE 91 | ..M....u.Q.&.C..

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
EF 43 CC AB B3 2D 58 11 3C 24 84 96 E2 F0 F1 1A | .C...-X.<$......
82 0E 08 94 41 C9 E2 E8 1A 46 E1 22 35 E8 72 60 | ....A....F."5.r`
03 22 AC FC 0D 64 5A 30 DC 8B 11 92 B0 B8 68 73 | ."...dZ0......hs
16 4F F0 15 CD 3C 84 5B 5D BC C6 C6 F1 F4 C2 0E | .O...<.[].......
D0 E7 A0 79 BC B4 63 9D 29 6D 76 96 07 EE FE EE | ...y..c.)mv.....
FE A6 36 60 EE 74 44 CE 4C 3F 16 9A 1A 15 94 2A | ..6`.tD.L?.....*
E0 C0 52 68 F2 04 AD 2C 4E AE FE 10 2E 80 E7 39 | ..Rh...,N......9
2C E0 E3 FF 93 7A E1 1C D1 ED E0 1F BC 1D 74 9A | ,....z........t.
C2 A6 B8 09 60 3C DC A1 83 77 E6 4A 1A 2E 65 AF | ....`<...w.J..e.
80 9F 2E 7B 56 28 1B 3F 30 CE DE 2A 37 72 FB B0 | ...{V(.?0..*7r..
51 FE 73 68 62 C4 E4 9B 45 C4 C4 43 94 D9 92 B2 | Q.shb...E..C....
4E 31 31 E5 EA 0A 4F 91 A4 3F AC 54 FF E7 88 F5 | N11...O..?.T....
E7 CD EE D5 1E 7B B1 7C 03 E7 49 E8 E8 93 FB 13 | .....{.|..I.....
8E 38 1A ED 1A F3 0F F8 30 29 89 9D B9 AD 56 5C | .8......0)....V\
60 D0 F8 D2 4A 7D 81 98 E8 81 B9 FA E9 37 0D D5 | `...J}.......7..
B7 F6 CC B0 D3 55 BF 97 DA C5 EF ED 4A 47 BA 72 | .....U......JG.r
B3 A5 3E 8D CA 2B 05 AB 21 EB 49 7D 6D F6 95 A1 | ..>..+..!.I}m...
04 9E 52 98 38 A5 CF 7E 4D 65 65 29 47 CD 02 37 | ..R.8..~Mee)G..7
2E 42 93 DB 66 FB 19 C3 7A 48 84 4D 15 7E D7 8B | .B..f...zH.M.~..
8D 62 13 2B 24 CC B2 A1 BD 78 6E 94 36 83 BA 6D | .b.+$....xn.6..m
B1 EB 68 3D C7 61 16 8C 35 7F BB C4 C1 B2 E9 D8 | ..h=.a..5.......
BF 17 09 11 02 11 7D 69 39 25 51 85 18 E4 74 E2 | ......}i9%Q...t.
61 48 6B 37 84 C8 4A 9E B0 9A 57 C4 DD 2E 6F 7D | aHk7..J...W...o}
B6 8E BC 5D 21 13 F3 D0 C5 B4 13 BE 1F 0F 95 2C | ...]!..........,
0D 09 E8 B8 99 5C 44 9C 3D C6 36 08 EF 31 53 BA | .....\D.=.6..1S.
37 7F 24 86 D2 84 BF 53 35 E5 39 E4 00 2E 89 8D | 7.$....S5.9.....
14 10 F7 0B F1 B0 38 49 AF 8E BE 82 9E 72 30 2C | ......8I.....r0,
D5 47 E2 86 E1 5A 9D 80 08 B1 C6 9E FA 7F 47 40 | .G...Z........G@
4A 6F CB ED 5E 89 20 84 7C 82 51 12 13 08 EF 3A | Jo..^. .|.Q....:
C0 86 DA C5 8C 39 9E 1B 36 D4 1E 32 82 DF 04 28 | .....9..6..2...(
D6 9E FC 0D 22 2F A9 C1 0E 41 62 AC FC F0 66 C6 | ...."/...Ab...f.
4B BD C5 42 3C D6 16 BA 4A 1E B6 AE 8A C4 FB A3 | K..B<...J.......
F9 53 0A BB 67 7A AD FD EB C7 96 19 C0 5F B0 D9 | .S..gz......._..
97 33 12 D4 7F 13 F8 70 B0 29 B3 A0 86 1D 47 1C | .3.....p.)....G.
A3 5C 8F DD 17 EC C1 60 BC 03 1E DF 38 39 6F 95 | .\.....`....89o.
7D CB 22 44 96 A7 46 CB 4A 4B C9 D6 53 42 4F EB | }."D..F.JK..SBO.
C3 AC F5 AA D6 1E DA 1A 7E 7F 54 15 FA CF 0F 3D | ........~.T....=
DD 6F FE 5F D9 2D 3C 20 69 51 E1 04 30 2E D8 40 | .o._.-< iQ..0..@
43 C6 7C 9D F0 2A 87 C2 74 1F ED 54 F2 FE 65 2C | C.|..*..t..T..e,
93 55 68 15 2F 84 A5 DA 67 28 C3 47 5B 30 CB BF | .Uh./...g(.G[0..
B9 5F 86 D7 A0 74 4B C6 A6 C6 DC 47 60 14 9C 64 | ._...tK....G`..d
24 10 07 C6 FA 41 26 0A 20 E1 DC D6 2E ED 9A 95 | $....A&. .......
6D 38 01 6B 16 AD 73 83 C9 85 0F 02 14 B2 18 41 | m8.k..s........A
5D 3A 33 F8 7C FE 1F 32 73 61 B3 F8 F6 3E 9D 3A | ]:3.|..2sa...>.:
A1 8C BE E8 81 5D E9 FB 1B 88 8F 21 7E 52 3F 8E | .....].....!~R?.
24 94 F3 45 A6 71 20 CA 70 6B DE 0D 1A DB DB 42 | $..E.q .pk.....B
62 23 BE 17 DE 57 DF BF 57 E6 22 58 D7 16 0C 0A | b#...W..W."X....
49 01 2D A6 B7 FF DF AA AA 70 C7 74 D1 5F 20 03 | I.-......p.t._ .
10 CE 25 CD A0 3C E8 F9 12 B7 0A 83 57 87 71 37 | ..%..<......W.q7
EC 67 EC 86 17 03 41 AE D2 AB 18 59 27 F5 96 E3 | .g....A....Y'...
D2 5F 06 13 71 DC 01 DD 10 D1 85 FC 86 2E 9F 79 | ._..q..........y
BB B7 0F 2C F2 44 3E 0D EC 68 E9 74 12 95 E8 C7 | ...,.D>..h.t....
86 E7 82 08 68 16 9E F4 D4 90 B4 57 D2 1A 5C B4 | ....h......W..\.
60 AD 7D 5B E4 96 D1 24 84 F1 08 54 CF E4 2B BE | `.}[...$...T..+.
B8 ED 9A DA 6B 9B C0 D3 8A 42 6E 57 AA 5D CE E1 | ....k....BnW.]..
7C 32 F6 FA AA C3 11 46 64 6A CA FA B2 59 34 6E | |2.....Fdj...Y4n
37 E3 BA 9B 87 45 B4 88 E1 50 BA 2C 0D C1 CC C7 | 7....E...P.,....
96 A3 43 ED 6F 23 6E C6 9E 6B 0F 69 21 65 B2 40 | ..C.o#n..k.i!e.@
1B DC 71 7F FB F2 DB EA 9A 60 06 EF BA AD 6B 36 | ..q......`....k6
57 37 B3 A3 51 F4 F3 12 50 03 95 DC 22 DB 04 95 | W7..Q...P..."...
2E 98 BE 2A F4 60 A1 1C A3 63 42 BE A5 8F B0 D0 | ...*.`...cB.....
12 BA 9A 44 50 B1 AB FE 87 5D E9 3B 8C 32 1A 0A | ...DP....].;.2..
AD F5 DA A6 5D 96 D6 FB 42 EC C7 BD 65 BE B0 CE | ....]...B...e...
FE B4 9D EC 62 C6 8F 06 B0 B8 B7 C3 47 E0 8E D0 | ....b.......G...
F2 3B 1F DF 34 33 01 32 AC C9 F7 54 D2 B7 E4 48 | .;..43.2...T...H
25 D6 3B BC C6 F0 02 C0 CA 6C EE AB 7F A5 D7 8B | %.;......l......
BF 9B 66 EA FE CF 9D 67 E2 89 C1 81 28 10 C3 40 | ..f....g....(..@
2B 8B 11 02 FC D8 ED 8A CD 60 E1 34 D3 84 98 4D | +........`.4...M
32 1A 98 78 32 4E 04 AA EF B3 72 61 44 25 F3 08 | 2..x2N....raD%..
7C 2B F2 80 81 1A 34 A7 B7 67 52 36 4F 60 7B A3 | |+....4..gR6O`{.
D2 03 7D 38 EA 28 90 8C E7 E2 3A FC 84 44 22 F5 | ..}8.(....:..D".
82 B2 0C 0D 31 7B 80 07 01 32 86 70 ED C9 E5 B2 | ....1{...2.p....
75 78 31 EA A0 8B B0 09 2D 6C 01 75 FA D6 B5 D3 | ux1.....-l.u....
A2 A4 48 F7 61 16 69 E5 57 40 32 E6 4C 61 BE E6 | ..H.a.i.W@2.La..
19 68 DA 67 E8 9B 0C C9 15 8C B7 BE 80 B1 F8 78 | .h.g...........x
75 31 F6 62 82 CF 29 61 A4 B7 89 C9 63 9F 5C 2D | u1.b..)a....c.\-
34 6B 44 66 B0 E7 64 D4 EA 8E B9 76 7E 80 3E D9 | 4kDf..d....v~.>.
D8 E4 B1 FF 8C 7A C4 5F 90 5C A4 73 40 C9 0A F3 | .....z._.\.s@...
7C 2D DC 65 A5 14 70 3D B3 9D B7 67 3E 1F AF D5 | |-.e..p=...g>...
13 F3 7F 62 F7 40 56 CD FF 68 0E C0 78 69 02 D0 | ...b.@V..h..xi..
EE 8B D8 4F 9D 1F DE 15 27 6A 9F DF 07 6C 9F BB | ...O....'j...l..
AF F9 CD 9C 8A 70 9D 10 49 1B 06 72 87 53 76 A6 | .....p..I..r.Sv.
F3 7D 4F BE ED DC FB 70 89 AE DF D0 D4 CF C0 6A | .}O....p.......j
0B B2 5E 72 C7 E3 FF AE 0B 15 67 B0 D1 44 5C 67 | ..^r......g..D\g
53 93 EE EE 3F 63 C9 95 CF B6 CC AF C9 93 DB D8 | S...?c..........
24 12 55 16 3E F2 02 D1 4A 8E D8 BF 7D 24 D3 E6 | $.U.>...J...}$..
0A DB 58 47 5E AD 5E 47 B6 A9 49 E6 E5 18 1F 1F | ..XG^.^G..I.....
72 49 6D A0 4B F7 CB 46 08 B8 EB 2F 80 4F 01 58 | rIm.K..F.../.O.X
6B 5A 88 0C 1F F5 41 E4 F4 CA AE 6A 23 FD DB D8 | kZ....A....j#...
6D E1 01 E4 AA A6 19 86 62 1C C7 23 02 FF CE 36 | m.......b..#...6

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
13 36 14 52 37 8D 5B 5C CB 6A 25 D8 1D 81 AF 08 | .6.R7.[\.j%.....
F3 D1 6F 62 8F F7 CB DB 00 58 8C FD FA 5C 83 73 | ..ob.....X...\.s
48 95 20 EA 3D 9C 4C 90 0A 3D 93 A0 DD 04 45 49 | H. .=.L..=....EI
CB 19 A2 DF 46 92 5C E6 2F 89 28 FC A8 39 4C D9 | ....F.\./.(..9L.
8E E4 F7 85 7A A2 62 4E 1A CA 50 AF 21 F2 BA 8E | ....z.bN..P.!...
D7 1D 0B A2 6B 40 49 D6 2C D7 FD D3 17 3B 97 52 | ....k@I.,....;.R
2A 93 88 64 4C 45 F8 D0 61 BA 67 DF EC E7 80 BC | *..dLE..a.g.....
98 F5 6D 47 66 AF E7 67 5C 1B D7 8A 30 E5 D6 81 | ..mGf..g\...0...
4D 75 21 B6 1C CE 90 B3 6A 59 BE EF CE 6F E8 15 | Mu!.....jY...o..
7C 71 24 A3 9D 76 99 89 78 85 EC 00 34 12 2F A3 | |q$..v..x...4./.
F0 5E 32 27 A7 F3 60 A0 DB DE F7 85 60 CF 78 CD | .^2'..`.....`.x.
B4 28 95 F8 5E 0B 14 8A F1 93 5B 27 77 27 F1 22 | .(..^.....['w'."
B9 BE C3 9C D1 AC EC BF A8 E0 95 BE E3 D4 FF 3B | ...............;
31 CA CC 22 98 19 A2 97 D8 67 E3 6B 9E 73 6E 51 | 1..".....g.k.snQ
C2 D1 0E 2C 84 9C 5E 25 78 59 85 67 22 FC 00 94 | ...,..^%xY.g"...
49 55 E7 FC DA D6 A4 27 0D 0E 54 26 F1 61 EE 8A | IU.....'..T&.a..
29 83 FB 2E CD 6B 78 60 52 1D BC 6A 40 65 6E F9 | )....kx`R..j@en.
97 1B 68 26 96 89 88 79 B6 9E D4 E0 4E B6 A9 7D | ..h&...y....N..}
1B D7 E4 1B D0 4E 5A 5A 77 AE 67 B3 89 CC 49 C1 | .....NZZw.g...I.
29 1F 2D A4 C0 00 A1 1C DB 9B 59 90 47 CB 79 6E | ).-.......Y.G.yn
48 7E AD 8A 72 FE 0F 0E AC 2E BC EF 2A 1E F9 D9 | H~..r.......*...
37 CA 7D 6C 6A 7F A9 DD 54 3F 73 E8 79 3A BA 56 | 7.}lj...T?s.y:.V
C4 BF 02 07 22 3F F9 3B 59 6F D7 B6 59 2E 94 D4 | ...."?.;Yo..Y...
DC 24 A1 74 62 82 F6 7B 44 0F B0 01 F9 79 EE 92 | .$.tb..{D....y..
C3 2A 48 C9 FF DF BF 4E 88 78 F1 9B 83 67 18 5B | .*H....N.x...g.[
BE 5B 88 EA 25 36 20 96 03 8C FD 40 F0 C9 26 DE | .[..%6 ....@..&.
BB CE F2 20 BD 7E 8A 04 6C 26 4F 0E AA A7 15 BE | ... .~..l&O.....
64 5A C1 A2 2D 8E 73 DE 7C E7 82 17 86 B6 43 0F | dZ..-.s.|.....C.
FC F3 46 1E A5 B2 5C 5C 68 E9 72 BE E3 00 E8 72 | ..F...\\h.r....r
A0 D0 0E 32 A2 63 FA B6 87 56 EF 7F 43 F6 72 35 | ...2.c...V..C.r5
B0 6A 6F 79 57 A7 1E 69 91 55 74 EE CD 65 97 83 | .joyW..i.Ut..e..
99 A0 0B 3A 80 84 9A 47 5A 6E 1E 3E AE 0A B1 3E | ...:...GZn.>...>
98 05 9C D7 9B D3 DA 73 0D 7E 0B E5 50 0F B6 8A | .......s.~..P...
C1 60 99 18 4F 62 14 E7 17 A7 18 29 8D B3 03 79 | .`..Ob.....)...y
7F 01 CE F3 2C F1 61 9D 27 C2 68 A8 12 C9 83 4C | ....,.a.'.h....L
DD 50 5C A2 08 44 75 75 6B 1C 56 4B 5F B3 BC 33 | .P\..Duuk.VK_..3
7D EC 5E 28 CB D0 4F 3D 9F A4 8D 20 6F 16 1C 17 | }.^(..O=... o...
E5 9C EF A6 F6 2C 28 CD 07 24 87 D5 A0 9D D8 2D | .....,(..$.....-
74 57 67 DD CD 92 8F 13 4C 46 33 B8 BA 47 19 67 | tWg.....LF3..G.g
71 85 BE D4 13 37 BE 33 A4 B5 6A DB 53 76 6E 1D | q....7.3..j.Svn.
0B 0D B8 83 15 1E B2 28 20 6E 05 C0 6D 15 31 5B | .......( n..m.1[
2A 8D C1 B5 92 69 6E AF 5A E9 AD A7 79 88 D8 97 | *....in.Z...y...
94 5D B7 A6 95 8C BE 3E 2C FC 07 18 06 E6 B6 F1 | .].....>,.......
CC 9B F2 A6 99 AD B1 70 A7 F4 9F 7D 54 77 56 5C | .......p...}TwV\
3B 8B F1 51 B9 77 3D 47 37 AD 18 5A 6E 70 75 BE | ;..Q.w=G7..Znpu.
C1 99 47 D4 8A AC A5 5A 20 A1 C1 C7 C2 FF 0C 3F | ..G....Z ......?
86 18 ED EF 62 BA FA 66 91 D6 44 7C 5D 4F 56 04 | ....b..f..D|]OV.
6B 60 4F 71 47 85 D5 0B C1 DC 2F 19 05 56 7C AE | k`OqG...../..V|.
A3 C3 91 2E AB D9 0F D6 A6 60 CD E4 4B 63 B8 0A | .........`..Kc..
7E EC A1 98 FA 43 43 B4 17 96 3A A1 3A 11 B4 55 | ~....CC...:.:..U
A1 6F 81 2B 3B 5C 42 5E E0 10 64 05 41 45 B8 93 | .o.+;\B^..d.AE..
4B A3 F0 AD 16 FF B2 6F DA 73 15 34 19 11 7D 0B | K......o.s.4..}.
DB 4A AC 27 6D F0 F6 ED 2B E8 12 14 06 7C 13 50 | .J.'m...+....|.P
D6 EC 3E A3 50 22 8E 35 9E 16 1C E8 F0 BB C9 28 | ..>.P".5.......(
DE 04 4F C2 28 51 39 4C B2 70 06 11 D6 24 CA C7 | ..O.(Q9L.p...$..
58 E1 36 51 D5 9F DE F2 B6 FC A6 69 3B AA 35 3D | X.6Q.......i;.5=
49 7F 25 70 69 58 76 4B 1F 0E EE EB 78 B8 EF 2B | I.%piXvK....x..+
48 F0 6C 01 2B 0D 08 66 D7 A7 64 77 3B 25 BC FE | H.l.+..f..dw;%..
22 ED A6 40 26 37 F6 95 28 98 E6 E7 16 B0 16 19 | "..@&7..(.......
4D 75 AA A3 77 8B E2 B6 50 09 7A DC B9 7D AD 32 | Mu..w...P.z..}.2
A8 83 55 63 E1 F6 F1 DF DB 82 D6 89 44 DD 90 32 | ..Uc........D..2
1D A0 41 39 93 EB 41 F1 EB 6F 1B 88 FC 3D 72 6B | ..A9..A..o...=rk
A0 B8 C8 A0 DE 04 6E 59 49 8A ED 91 D2 0D 80 04 | ......nYI.......
75 CA EC 1B DA 9B 33 89 52 5D 51 E6 B0 09 81 C2 | u.....3.R]Q.....
25 B2 34 BD 76 63 92 AC 26 45 95 CA 0D 8F 12 63 | %.4.vc..&E.....c
D3 A4 01 A9 30 47 EC C6 BB 94 ED 0A ED E7 8C 4D | ....0G.........M
A4 13 18 EE 75 12 3E 0D EF 3E 98 8C B3 A1 07 94 | ....u.>..>......
A6 B3 58 E6 28 C4 4E 66 D6 32 FF F4 30 20 2D 23 | ..X.(.Nf.2..0 -#
CA 65 A1 47 4B AB BB 90 C8 DC C1 1F EB 89 CF D4 | .e.GK...........
7C 9A 0C 0E 2F 02 C4 47 BB C0 DC 97 3E 6C 0B 84 | |.../..G....>l..
B3 1A 36 6B FE 7B DD DF D3 7A 59 C3 3C CB 3E A8 | ..6k.{...zY.<.>.
03 42 A8 A4 A6 12 4B 7C 78 F3 1C 45 3A D5 19 17 | .B....K|x..E:...
1F 69 47 29 D5 38 8C 8C DE 6B F7 8A 33 46 F6 06 | .iG).8...k..3F..
4F 5D 72 3E 50 3B B7 70 09 A0 A1 41 24 A6 A2 75 | O]r>P;.p...A$..u
8F 73 E6 41 95 01 86 AC B9 60 D1 00 21 1C B9 02 | .s.A.....`..!...
95 B6 5E 69 9A DF 6B BB 47 0F 48 FB A9 52 41 36 | ..^i..k.G.H..RA6
C1 FF 10 1D E4 21 1D 0D 15 BF 2F AB 89 61 8D C1 | .....!..../..a..
27 AC E8 80 37 15 77 66 22 82 39 CC 04 00 DA 84 | '...7.wf".9.....
A3 8B DA 4C 24 42 40 C3 AA 6A 00 AC 4A 8F FC CF | ...L$B@..j..J...
6D E4 97 5F 36 F3 D4 3D D4 5D FA 21 97 B6 C7 95 | m.._6..=.].!....
7F 3A AC A0 9D A2 D4 9C C7 34 4C B0 22 75 D2 EE | .:.......4L."u..
02 B6 CE 16 8B 4E C5 ED 52 8D 9F A3 3C A0 7D 29 | .....N..R...<.})
15 C9 4E DE 52 D1 28 45 E5 85 77 D6 3A 7A 8E 4B | ..N.R.(E..w.:z.K
AA 52 DD 9C F1 2B 1F 45 3D F8 2C 37 B7 5C 7E 24 | .R...+.E=.,7.\~$
2D 39 8A 90 52 F0 9E 73 44 FF 7D E7 FA DC E0 CD | -9..R..sD.}.....
49 D9 CF C9 FC 1A FD 4B EA 5F AE 63 C7 91 01 6B | I......K._.c...k
BB 54 F4 D6 C0 D4 A3 E0 77 A5 BE 07 35 00 E4 0E | .T......w...5...
90 24 A5 DE 5B 4F 6B C7 E5 A5 63 40 4A 43 D2 4F | .$..[Ok...c@JC.O
60 16 31 4A A6 F5 AB C8 E5 A7 EA 8C AE 45 D8 FD | `.1J.........E..
D9 DF 2F 77 19 11 D6 38 19 A7 80 27 0A 4E 40 17 | ../w...8...'.N@.

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
86 86 46 EE 1E BD 43 C9 F2 07 A5 97 5D 52 3D 2C | ..F...C.....]R=,
C1 9D 60 58 17 B0 33 1F 1E A6 B3 E8 FD 53 17 82 | ..`X..3......S..
3D 6B 36 8F 70 15 97 78 FE C2 29 3C 4D 13 07 92 | =k6.p..x..)<M...
88 2E 25 5C B0 D5 10 98 E6 A7 E5 72 0C 39 32 5D | ..%\.......r.92]
D4 68 1E 57 F8 14 D6 3F BB 0E 6D CD D7 42 21 61 | .h.W...?..m..B!a
80 74 34 DB 79 C2 51 CC DC 55 11 79 47 38 4D 8C | .t4.y.Q..U.yG8M.
F5 99 FC C2 B4 62 CD 7B 3E CB 28 30 EF D9 7A 34 | .....b.{>.(0..z4
FC F8 9E 7D 5F FB 52 86 4B 4A D7 F1 60 9D 4B B1 | ...}_.R.KJ..`.K.
E6 67 60 BC 48 50 81 CD 7A 70 EA 39 7E 90 EF 82 | .g`.HP..zp.9~...
42 99 10 FB A6 C9 FC 3B 4E CF EB 2B B7 15 65 6C | B......;N..+..el
C1 3D EF CF 01 F9 98 03 75 1C BD A8 5D 77 91 A0 | .=......u...]w..
9A BC F2 88 48 29 E5 AE 59 63 1E 54 C3 C0 1E 59 | ....H)..Yc.T...Y
C3 82 E3 49 17 3B B1 2E D4 C5 C1 4E A0 30 FB 0E | ...I.;.....N.0..
BC 19 F4 E4 28 1B 30 FF 7F CE 84 F1 36 30 C1 72 | ....(.0.....60.r
33 25 44 92 CC D7 B4 39 AA 2A BB 33 CE 09 18 D9 | 3%D....9.*.3....
40 60 BE EE 93 69 EF 31 02 F2 32 0D 2A 2B 91 E0 | @`...i.1..2.*+..
62 C9 51 A6 2F 6E 57 8E 0D 25 25 CA 30 73 A9 35 | b.Q./nW..%%.0s.5
5F 1C 83 D7 A5 D1 BA 4C 64 17 26 8A 2F C3 DF C8 | _......Ld.&./...
A9 71 D2 F6 EF AC D9 95 D8 CB 4F 83 51 31 BE 77 | .q........O.Q1.w
86 25 C5 A0 1F FD 24 D2 2C A1 96 3A 51 A3 F1 3D | .%....$.,..:Q..=
96 1F 3A D0 A4 30 F0 3E 6E 04 B2 FA 2F F4 C6 43 | ..:..0.>n.../..C
B8 9A 64 F9 A4 EE 81 B1 86 2F 85 4B F5 53 F0 18 | ..d....../.K.S..
1C 5F 57 DF 31 E6 23 21 DC E8 AE D6 4C 0E 6C 3D | ._W.1.#!....L.l=
D7 94 D3 BE 7F 91 E9 0C AD 63 A8 DA DD 24 08 E0 | .........c...$..
42 FE 7F 5A DD F1 D3 8F A2 89 56 7D 2E EE E0 A6 | B..Z......V}....
CA 0F 40 E5 9B 5C 12 6C 5E 04 A4 90 DC AF 3B F4 | ..@..\.l^.....;.
45 49 09 8C 93 08 DF A9 98 90 4A FA B6 F5 A7 D2 | EI........J.....
17 F5 BA 02 3D CE 4E 80 45 18 A2 64 60 3B 91 36 | ....=.N.E..d`;.6
CD 0E 4F C8 0C 23 F8 E6 B7 FF 22 EF 7A 7D 95 B2 | ..O..#....".z}..
02 49 6F 1B 1E B2 48 AA F4 6B 17 56 9A B5 60 96 | .Io...H..k.V..`.
72 88 46 D4 78 BA 76 E7 51 4D C8 B1 6E 12 3C C3 | r.F.x.v.QM..n.<.
A1 87 64 94 56 D4 6C E9 5E CF 72 83 CF 43 63 5E | ..d.V.l.^.r..Cc^
B1 51 80 FE 18 6F 52 27 99 8F 50 E0 20 78 D4 A9 | .Q...oR'..P. x..
84 55 F4 FF 7A DA B9 EC B8 E8 DA 8B 60 5E 91 23 | .U..z.......`^.#
3F 57 3C B4 D9 9B 8F 6C 0D FE AA 07 12 C7 E9 E4 | ?W<....l........
09 0B BD 15 86 F9 2E D0 EB 54 1F 13 E2 65 6D E6 | .........T...em.
8B C8 74 1F EE 83 2B 14 2A 05 44 BC 3E 51 AE 55 | ..t...+.*.D.>Q.U
8F 45 46 89 E2 A5 93 7D A4 7B BE A1 6B 2A 5E 2E | .EF....}.{..k*^.
11 69 A7 6A B9 2E B9 F0 2C 82 DC F3 E6 02 6A D0 | .i.j....,.....j.
0C 8D 6B 5F AF 75 0C 86 D7 D0 9A DA 2D E5 C8 EC | ..k_.u......-...
71 4C 06 62 9F FF EB 07 D8 38 51 38 67 4C D7 C8 | qL.b.....8Q8gL..
5D 7C C4 58 34 5A B1 4D 36 33 3C 43 12 31 09 90 | ]|.X4Z.M63<C.1..
4C 81 2B 48 62 33 67 81 46 53 38 B4 CD 24 E5 17 | L.+Hb3g.FS8..$..
DF 53 C9 18 D0 B7 3D 95 8D C7 11 9F C4 A5 7A A9 | .S....=.......z.
BA 1C A5 BA 89 82 16 0A E5 4F 50 9A 17 25 44 C5 | .........OP..%D.
4F 3E 7F 79 DB C7 79 50 33 FE C2 15 0A 42 5C EC | O>.y..yP3....B\.
8F 74 43 A5 10 2E 00 29 3A 30 86 21 39 AD 04 D2 | .tC....):0.!9...
48 FA C6 13 EF BD FE E9 67 B3 17 63 80 DF D6 8C | H.......g..c....
07 5D 85 0C 7D F4 4D 89 A5 05 EA 76 5B 8C 3A 8E | .]..}.M....v[.:.
6D 50 84 73 76 71 0D 95 D4 32 2F 35 0A 1F E4 7D | mP.svq...2/5...}
F3 89 2A AA 71 BD E0 1D EB 0D 5B B8 99 55 ED 8F | ..*.q.....[..U..
D7 B3 F4 0D 45 45 D5 58 12 B2 44 E8 DA C8 8C B5 | ....EE.X..D.....
75 0C FF 35 AF 51 9C 43 87 F6 37 B8 93 89 C5 CA | u..5.Q.C..7.....
AF DC E5 2D C0 79 5A E2 35 54 E6 61 9C 26 5B 60 | ...-.yZ.5T.a.&[`
D5 F9 FB 90 C6 ED A1 AF 64 C2 84 E7 84 C3 2A 3D | ........d.....*=
CE EF 35 2C B6 B0 36 F3 1E 91 9B 3E 11 9F AA C4 | ..5,..6....>....
12 F5 AE FC 5D A9 99 84 42 AE 90 9B F8 C2 9C AC | ....]...B.......
60 2D E8 46 30 29 84 5C 4B E8 ED 95 80 54 DC E9 | `-.F0).\K....T..
B1 8B 39 E8 06 2C AF 4F 9E E9 24 25 FE AA 50 A7 | ..9..,.O..$%..P.
0A BC BE 55 08 44 86 DE CC 1F 1C 6F 16 7F 6F 2E | ...U.D.....o..o.
24 73 A2 BB 19 46 9B 74 19 DA 82 D3 94 51 49 0D | $s...F.t.....QI.
EF C8 BC 4B D4 4F 46 C0 B8 47 58 78 AC AE C7 60 | ...K.OF..GXx...`
71 39 46 FF FA AC 6A 9C 95 3B E3 7D 75 AE F7 F4 | q9F...j..;.}u...
59 C8 2B 36 A7 A8 65 B1 72 3B 31 3C DA CF C4 98 | Y.+6..e.r;1<....
A4 84 07 E0 C5 4E A8 03 6A 5D B1 44 DF 76 9D E7 | .....N..j].D.v..
A5 6E D6 47 54 93 A2 84 73 0C 26 DF 2B F4 21 EC | .n.GT...s.&.+.!.
39 13 18 A7 33 6D CC D3 4E A3 C5 24 80 95 69 D3 | 9...3m..N..$..i.
94 75 B2 B9 69 54 75 41 3A CE C7 AC 7D 83 B8 7C | .u..iTuA:...}..|
34 14 87 5A 3E 85 77 AD 2A 0D CA 3B 7A B8 27 6E | 4..Z>.w.*..;z.'n
5E FD 9A 26 21 02 0B 4A 2C 23 A1 4D AB C7 99 F8 | ^..&!..J,#.M....
49 56 A3 92 01 62 8A 0B 2F 5E E1 FA 19 98 74 A4 | IV...b../^....t.
3A 1B CC 4F 59 19 2F 46 8C 37 E7 70 D1 B0 FE F6 | :..OY./F.7.p....
B6 19 E7 E1 20 C9 2E F9 24 3E 5A F8 E6 B2 9C 2A | .... ...$>Z....*
10 7A 5A 61 64 60 A4 B6 A3 38 87 EA 1C D2 56 15 | .zZad`...8....V.
73 1C 4C 12 D0 70 C2 81 1D BA 9D DA ED 05 90 71 | s.L..p.........q
E5 F7 62 D1 67 A8 15 1A 7B 93 6E 5D 1B 0A C0 54 | ..b.g...{.n]...T
2F 0D 16 56 ED 2B D7 C6 02 99 1A C2 2D 53 AA F4 | /..V.+......-S..
66 6E D2 F2 C4 5B 66 6F 28 65 75 C8 9D 5F 9A 47 | fn...[fo(eu.._.G
12 36 CF BF AE 16 40 A0 7E 78 E6 3D 4F 9A 39 B8 | .6....@.~x.=O.9.
C9 56 E2 3A F7 17 D0 24 67 89 22 8B 36 F5 E9 A7 | .V.:...$g.".6...
2F 8F AB 42 21 86 14 BE 0C 31 CA FD FE 12 A0 4C | /..B!....1.....L
C4 B7 34 1C E7 EC DD 5B D8 BF 34 6A 84 96 47 6C | ..4....[..4j..Gl
74 7F BF 27 66 C6 85 00 AE 73 1E 70 3D 49 1B 39 | t..'f....s.p=I.9
95 17 C0 61 6C 99 64 A7 01 CE 27 C3 CE 54 18 21 | ...al.d...'..T.!
4C 29 15 BD FB A4 29 C0 30 B0 67 EB 3B BF 8C B6 | L)....).0.g.;...
C6 FA ED E8 C9 E4 42 98 46 28 3F 74 D2 78 91 69 | ......B.F(?t.x.i
1B 78 D8 01 EF 3C 25 4A 2E 7B 13 F1 BB 06 75 D9 | .x...<%J.{....u.
FD 72 05 B1 E7 DB 48 39 76 51 6F 06 FD B8 74 D0 | .r....H9vQo...t.
7B 5C 4B 0E B8 33 E8 53 B2 A7 6D B7 C7 9B 5F C8 | {\K..3.S..m..._.
DB 08 95 8C 7E F8 E8 80 E2 5A 2D BE 22 5E 57 9D | ....~....Z-."^W.

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
84 16 38 C0 28 73 6D 3E E6 E9 69 78 DB 40 E8 FF | ..8.(sm>..ix.@..
32 02 95 51 F2 8B 78 D3 2D F4 26 17 C2 CE C9 81 | 2..Q..x.-.&.....
3F 2A 63 C5 C7 B0 E5 C1 7D 40 02 6A 77 9B 95 70 | ?*c.....}@.jw..p
9B 1C 8E DB AA 4D E6 8C 78 5B 2F D9 12 AA B4 12 | .....M..x[/.....
29 D9 14 BF 8F A0 10 36 AE 9E 65 D4 A9 B7 94 D6 | )......6..e.....
FF FF 23 4E 9E 06 B3 35 50 BF 0C CA 07 1E 9C 58 | ..#N...5P......X
A1 D7 39 2B 7D 1B 84 B2 47 1D 92 36 C3 8D 8C FA | ..9+}...G..6....
BA 6A FE A1 F0 03 51 65 81 72 D9 A6 0B 91 62 B3 | .j....Qe.r....b.
72 82 AE F7 43 46 D5 0A 4E 85 81 85 BD A1 FC C1 | r...CF..N.......
34 EB 6A C1 3E 36 B4 50 30 95 FA CC AC F9 17 6A | 4.j.>6.P0......j
5B 5E 22 CC BB 61 4C A5 5B B3 76 42 B7 E9 0F A1 | [^"..aL.[.vB....
74 25 DC 57 3E 11 6B 0E F8 CC 92 50 5A 9E 90 2B | t%.W>.k....PZ..+
96 76 48 83 F1 CA EA DD C2 17 0A 55 07 78 FB 6D | .vH........U.x.m
14 1C B7 51 95 71 37 67 A1 D1 2E A2 33 06 B5 C3 | ...Q.q7g....3...
46 FD FB 32 81 CC CE ED 6B 43 08 B0 84 02 5D 8E | F..2....kC....].
87 F6 4B 5C C4 5D 80 61 99 37 D9 4C 0E 52 5A 63 | ..K\.].a.7.L.RZc
3B 26 BF 6A 76 BA 75 75 99 F5 C0 A4 72 80 1B 8A | ;&.jv.uu....r...
66 6D E0 87 80 17 4A 83 CF 36 D1 4E 17 A8 12 2E | fm....J..6.N....
35 E8 C6 2B 32 73 61 65 39 E1 DB 6C 33 3D FA 15 | 5..+2sae9..l3=..
2E 25 78 B2 F1 87 8A AC 04 9D A3 CA 50 DB 54 60 | .%x.........P.T`
83 79 BB 02 3C 88 BE E1 00 85 4E 84 69 42 4C 8D | .y..<.....N.iBL.
C4 E9 C1 3C 07 37 9B 30 D7 31 71 09 55 53 29 AC | ...<.7.0.1q.US).
26 CC 7B 32 94 F6 85 27 7E 72 98 DF 8F C6 06 66 | &.{2...'~r.....f
F7 17 CC F1 2A 0A 1D D0 20 7B 54 05 FE 14 9A FC | ....*... {T.....
12 8F EC F6 6B 3E DA A8 EF C6 07 DF 0C 1D ED CF | ....k>..........
06 8A E3 AB B4 47 F4 88 C7 A2 4E 26 77 93 25 D3 | .....G....N&w.%.
4D 80 AD D1 D2 92 FA ED B1 4A FF 07 FF 14 A7 8A | M........J......
FB FA EB 81 4A 42 CF 72 82 39 D0 E6 57 67 CB 0B | ....JB.r.9..Wg..
FF 04 7B 23 EB 92 9C 65 DD F4 F8 F3 13 B7 41 FB | ..{#...e......A.
17 23 DE DF 81 E7 CA A6 67 30 9C 6B 88 68 CD 27 | .#......g0.k.h.'
D4 6F 36 90 2E CE AA 4A 4E 3F 27 19 35 92 D8 F2 | .o6....JN?'.5...
BD 46 A3 28 CA B8 DB 82 CB 93 28 9C 31 2F 7B D0 | .F.(......(.1/{.
6D E0 00 68 AA BD D0 FB BF 50 0E E9 9D B9 FA 4E | m..h.....P.....N
3D 24 7E 21 93 8A 9D 8C 9A 28 6D D4 D9 66 56 94 | =$~!.....(m..fV.
3B 1A 3B FC FE B6 A3 53 E6 31 08 FF 46 3F A0 54 | ;.;....S.1..F?.T
4F 5C 17 F2 41 90 0D 2D B4 14 48 FB 0B CC 5A C9 | O\..A..-..H...Z.
D2 69 0C 73 10 58 6A 98 EF 48 A2 E2 28 DD E1 CB | .i.s.Xj..H..(...
C7 DF E1 F2 FC 60 85 C6 18 6E 9D 48 4B 57 93 9E | .....`...n.HKW..
71 06 E1 BD E2 32 41 7D 9D BC BA 08 C5 1D 1E FA | q....2A}........
DE 90 78 08 42 12 BE 86 47 FF BD 01 89 F5 B7 B7 | ..x.B...G.......
88 E8 DE FF 1A 73 98 38 FE ED 08 DE E3 97 7F DD | .....s.8........
B2 AC 20 06 14 F5 A0 38 83 58 D5 EF 00 35 33 16 | .. ....8.X...53.
D5 4E D2 20 2E 43 3D EF 9F 61 69 A4 47 91 65 BC | .N. .C=..ai.G.e.
4F 15 DC C1 4E 40 B6 68 CB B7 F5 C6 D5 BA 06 D8 | O...N@.h........
2D 2F B0 14 78 B2 BB 2F C3 94 29 61 59 24 6C 10 | -/..x../..)aY$l.
8D 9E 0B 43 78 C5 AB F7 CE 5E E9 60 21 E0 A8 03 | ...Cx....^.`!...
06 65 33 EB 50 36 C9 42 BA 26 F5 AA 91 33 47 E3 | .e3.P6.B.&...3G.
48 72 C9 1A EE 95 E3 0A B1 A2 8F 7D EC 29 31 A0 | Hr.........}.)1.
67 D1 74 4D AC DF 03 99 14 28 A9 FA 67 6A 25 4D | g.tM.....(..gj%M
F0 B4 B9 0F E0 2E 96 25 C9 C5 2E 33 35 A0 10 2C | .......%...35..,
00 76 5B 74 69 93 53 49 E5 74 F9 95 B8 E3 A9 4C | .v[ti.SI.t.....L
39 BF 3C B4 B2 54 9E EF B6 BC DB 30 BF 24 49 94 | 9.<..T.....0.$I.
5D E8 F5 32 4B 12 8B 42 33 2C 6A 3A 3F 57 6A 8F | ]..2K..B3,j:?Wj.
6D DD 48 01 49 ED 63 E3 A8 AC 0C D3 A6 36 A9 2F | m.H.I.c......6./
F3 E5 AF 9C 06 47 12 6A 87 0C 43 CA EE 50 0F 4C | .....G.j..C..P.L
2C 24 4C 31 E9 D9 3C A3 83 7A CD FD A6 F2 74 C7 | ,$L1..<..z....t.
E9 C6 35 A6 A5 2B 3F 3B B7 7E C4 9B 4C ED 26 9A | ..5..+?;.~..L.&.
0E 5D B3 4A F7 B1 3C 0F 1B B2 7A C6 02 87 10 C3 | .].J..<...z.....
C5 AC E9 F1 FD 60 40 03 A4 18 36 65 92 0A 49 62 | .....`@...6e..Ib
8E 92 B4 D4 F1 93 AD 84 EB C7 68 41 52 D8 87 4D | ..........hAR..M
50 B1 1F 6E 75 0B A8 60 8D 50 30 5B FF CB 4E 0F | P..nu..`.P0[..N.
F1 F0 6C E2 BA 36 2B EC 6A F6 48 A3 57 BB F0 64 | ..l..6+.j.H.W..d
DB 1D 96 93 E7 E8 6F CF A8 93 05 8E 65 65 F6 67 | ......o.....ee.g
F6 E5 7D 39 4F 26 77 75 8E E0 E0 1D A4 9A 9A C5 | ..}9O&wu........
16 9C CD DE CF 16 7F FF B7 5A F3 C8 C3 FD E4 7F | .........Z......
24 4D 33 6B A8 69 56 3D B5 D7 CA 21 BF F3 4F A9 | $M3k.iV=...!..O.
A5 30 3E 0C 96 17 72 6B 96 18 6B F4 76 5E 96 55 | .0>...rk..k.v^.U
8D 16 8A 0C 79 FB BD A6 73 1D 21 CD 8A CF B4 1F | ....y...s.!.....
CD DE 02 2F BE 20 C4 49 00 05 5A 89 04 FD C0 35 | .../. .I..Z....5
25 12 21 C5 29 D7 E8 A0 B7 F9 16 D5 4A 45 9F 02 | %.!.).......JE..
BD D1 7D EC 9A CD A4 0A 6B 47 3C E6 43 4F 0A 5C | ..}.....kG<.CO.\
EC BC D1 9A 7A 61 42 E7 F4 7C 06 1B E2 59 30 99 | ....zaB..|...Y0.
5E 56 28 1D 58 07 97 FE 93 39 B9 C1 63 1B C7 EF | ^V(.X....9..c...
AA 2E 7F C5 4D 2B E4 D6 C1 C5 68 2C 15 6F CE D5 | ....M+....h,.o..
CE B0 DB E6 39 CA 90 A2 D6 98 C3 F0 01 40 57 3C | ....9........@W<
FA 6B 69 94 6F AE 75 4B 9B 4E 4A 92 9D A4 9B 71 | .ki.o.uK.NJ....q
D7 6A D8 0C E1 CF E3 02 82 2D 6F B4 83 B7 5A C2 | .j.......-o...Z.
7D 7A 2D 8A 93 A9 EB 28 0B C4 C8 62 E9 03 4C 53 | }z-....(...b..LS
9C 1A 62 C8 9B 16 35 EB 85 87 E8 39 AD 54 F3 81 | ..b...5....9.T..
D3 CD 1E 1A E4 E8 F0 3C 41 98 5D 3B 7A 29 89 AE | .......<A.];z)..
88 BE EC 29 E0 DD 70 F9 93 58 86 9E 34 A9 8E D5 | ...)..p..X..4...
86 24 C3 53 90 A5 E8 1C 29 1A 4C 13 4C 4F 15 6A | .$.S....).L.LO.j
02 66 76 5C 3A A6 05 13 C8 05 C7 19 AD 27 18 9A | .fv\:........'..
A8 FB D6 5C F6 FA 12 BC 00 87 48 C2 64 DB 50 09 | ...\......H.d.P.
1A 59 13 49 CF 3C 87 DA 00 68 AE 9C BC 0B E1 78 | .Y.I.<...h.....x
61 6C 2F 9D A8 09 C6 36 42 AB 72 BC 9E A9 31 7B | al/....6B.r...1{
6A 42 16 5B 6D 38 0E AE E0 4C 0E 6F 2B 18 BA 4A | jB.[m8...L.o+..J
CB 7E AF B2 6F 08 9E DF 7F 1A 8C CA A7 DA F4 64 | .~..o..........d
0D 21 55 F7 5B A2 D9 D0 FB 4A 6E 5E 51 25 61 C2 | .!U.[....Jn^Q%a.
14 AE CD 88 DF 8F A3 4B 6F 6A 68 B4 D7 EF 00 5F | .......Kojh...._

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
F6 8D 2E 6A 3A 72 DB E6 28 6F E1 69 D6 75 42 2A | ...j:r..(o.i.uB*
FC 3C 22 63 24 A9 4B B3 76 21 E5 40 5A 2F 98 54 | .<"c$.K.v!.@Z/.T
DB 54 65 E2 54 DD 4F 08 D1 17 74 66 0F 53 87 E9 | .Te.T.O...tf.S..
50 02 50 59 55 70 1C 3E AE 42 D9 AB A9 50 AE 76 | P.PYUp.>.B...P.v
49 32 27 99 51 BB E2 9F 01 2D 48 FB 52 18 67 85 | I2'.Q....-H.R.g.
DC 08 C6 5D 93 9D 67 F1 16 52 C6 14 F9 D2 73 92 | ...]..g..R....s.
E8 20 F3 42 EA CA C1 B1 81 B1 00 EE F8 D7 65 8F | . .B..........e.
5B 77 E4 C3 F7 AA 75 62 20 0D 27 A3 91 5E 55 C2 | [w....ub .'..^U.
9F 87 21 CA 1E EA 08 F6 C4 E4 D3 4C 4C 71 E9 D8 | ..!........LLq..
9E 59 22 E6 AB E7 DF 69 05 57 9F F1 F7 88 AC 1D | .Y"....i.W......
91 24 16 1D 28 2D 67 EB 41 81 48 ED E7 B7 8C E4 | .$..(-g.A.H.....
01 48 70 3A 04 F4 14 E4 06 33 21 8A 15 A0 EF C4 | .Hp:.....3!.....
CF 2E 4B AA 47 52 E5 97 E0 07 BF A8 E5 2F A6 2F | ..K.GR......././
F8 F6 19 24 66 BC CB D3 D7 48 B6 5E 25 AB 24 F1 | ...$f....H.^%.$.
49 2E 43 A7 71 11 E1 5D 6F 7C C2 89 0C 7C 9E 6B | I.C.q..]o|...|.k
FD CE A6 B3 03 E4 9E 07 A9 F5 D0 F8 7A 48 D5 7E | ............zH.~
68 B9 E3 A0 7F C3 15 D3 F3 D8 11 32 A5 9B 92 E3 | h..........2....
F3 94 FF 03 5F 9E 89 A3 B4 9C 18 DC F4 B6 C7 26 | ...._..........&
F8 70 92 76 74 3B 98 48 BC 58 0E 70 44 09 19 F8 | .p.vt;.H.X.pD...
0D CD 94 22 FF 74 2B 44 4D 93 8A 7F 23 0D 7D DE | ...".t+DM...#.}.
6D 60 2B 64 45 40 F2 8D FD 95 1C D6 1A 52 75 A4 | m`+dE@.......Ru.
CD 7F B0 4F 8D 32 BF 0D BA 35 62 80 CE 45 A2 08 | ...O.2...5b..E..
B7 E8 6E B5 61 EA D1 28 1E A5 A6 E8 70 A4 67 64 | ..n.a..(....p.gd
24 FB 61 1C 83 F7 CB 9B A8 01 61 9F 6A CF 34 DA | $.a.......a.j.4.
4E 21 C1 83 EB D7 AF C5 ED FA 67 E1 4F B8 CA 36 | N!........g.O..6
AB 78 1B AE 50 5C 6E B4 02 FE C4 66 98 76 31 94 | .x..P\n....f.v1.
71 E0 2E 84 D4 DE 25 DA E8 DA CD E1 61 02 6F 6D | q.....%.....a.om
F4 F0 84 3E A6 55 E7 30 FC E9 50 39 51 7B C8 73 | ...>.U.0..P9Q{.s
47 AC C2 72 55 7F A2 5E C3 BE 97 BF 7C 3C 46 81 | G..rU..^....|<F.
AD 9D CD 55 80 3E 57 A1 5F AD A0 0A 8F 8D 7D 65 | ...U.>W._.....}e
A6 66 07 DF 6F B8 90 8F FD 03 CF 6E 1F E6 C8 F3 | .f..o......n....
21 74 9A 08 7E AF A3 63 26 C8 10 54 34 BC 60 AD | !t..~..c&..T4.`.
D1 49 A2 5D DD 0B 17 B4 6F 84 75 48 04 69 32 F1 | .I.]....o.uH.i2.
EA 81 11 CC B6 56 2A 36 F1 06 9F C8 53 8F F2 9E | .....V*6....S...
6B 60 FF 87 A5 82 C8 A0 F9 37 D6 30 2E 97 AB 70 | k`.......7.0...p
21 96 B1 62 A2 76 E4 3A 38 75 3B 50 EC 57 BF 9C | !..b.v.:8u;P.W..
A2 7C 43 25 A6 13 FA C9 66 74 0F C5 B3 36 E0 34 | .|C%....ft...6.4
DD 9D CA 86 ED F1 F0 D6 43 C7 9C 06 54 3A B5 E1 | ........C...T:..
75 07 95 00 12 7E 32 2A E9 02 4A 61 43 7A 3C 2C | u....~2*..JaCz<,
7B F3 70 56 01 51 2D 88 5D FE C4 BA F3 95 16 A9 | {.pV.Q-.].......
AF 29 6C CD 12 A8 53 8A 1F 34 90 48 8B CA 57 79 | .)l...S..4.H..Wy
E0 6E 29 53 F7 93 7D 36 17 F3 FF 91 9A 16 16 D8 | .n)S..}6........
51 83 41 C3 A2 19 8B DD 7E 74 02 DE 51 82 92 E6 | Q.A.....~t..Q...
D8 86 A3 65 54 BB C7 E6 F4 8E 4F 0D 36 39 43 27 | ...eT.....O.69C'
AD 66 A0 96 10 96 2B 08 A0 D8 93 63 7A 13 87 83 | .f....+....cz...
26 B7 27 7A 10 0C 0E 29 1A 75 A6 75 15 90 16 B5 | &.'z...).u.u....
37 AE B4 D5 3D 6D 39 92 45 2F 88 EF D9 75 B9 27 | 7...=m9.E/...u.'
F4 61 52 69 E4 E4 5F 25 F3 C2 B1 13 AF 74 BC C2 | .aRi.._%.....t..
B6 35 68 64 0B 29 B4 D1 32 B8 C3 A9 CE B2 65 17 | .5hd.)..2.....e.
4B D7 89 08 C7 68 F8 6B 88 3D 18 F4 3B 64 0B C9 | K....h.k.=..;d..
85 90 E6 C9 01 85 C8 15 1C D6 CC CE 65 D5 B2 E7 | ............e...
47 00 B8 E7 E8 EA 4C 48 B7 FB E7 61 97 38 14 A8 | G.....LH...a.8..
30 D4 8A 86 D7 F7 C2 5C 24 06 A6 F1 C6 D4 46 36 | 0......\$.....F6
1D F1 FF 17 A1 79 13 75 DA 52 5B B7 6A 95 E6 79 | .....y.u.R[.j..y
32 2D 85 65 2E 84 40 CD D4 B1 52 31 83 56 79 FA | 2-.e..@...R1.Vy.
F9 1C 19 14 10 5B 9C 4B 41 B5 30 E8 93 95 68 16 | .....[.KA.0...h.
78 2D 80 34 FF B4 4A 08 5B E4 E0 D6 9D F1 96 08 | x-.4..J.[.......
4C 1F CD 41 30 73 C0 64 7E CD 52 69 AB D2 01 D0 | L..A0s.d~.Ri....
2F 6A 1A DA EA A0 CE 7F B3 A4 CE 67 FC 95 90 E5 | /j.........g....
19 70 32 9D 74 F9 56 9D 5B 77 DA 89 18 AD 3B E5 | .p2.t.V.[w....;.
21 78 99 44 C2 1E 39 C2 FC 80 01 9A 3D 3D B5 4A | !x.D..9.....==.J
60 40 E7 4A FD 6B 26 D9 09 B3 8A CE 07 12 3A 35 | `@.J.k&.......:5
AC 7A 9A CC 66 77 7A 99 21 BC 6E 3C CB DB 09 81 | .z..fwz.!.n<....
EA 86 15 4B 3D 7A 11 05 A1 D7 C6 77 B6 54 14 98 | ...K=z.....w.T..
F2 6A 2B BF 88 EF 49 1D 49 B1 2F 74 CB CA FA 7B | .j+...I.I./t...{
EF 7A 04 9E 7C 2F B2 19 A1 E0 AD 37 64 F6 42 E2 | .z..|/.....7d.B.
B3 88 C5 7C 23 36 FC 49 CA B0 DD D6 3A F7 8E 8C | ...|#6.I....:...
4B DD C0 1F 66 10 FE FB 7E 7F C7 9B 8F B3 CE D7 | K...f...~.......
A1 0A B1 11 89 21 52 AC 3F 49 67 6A 1F 87 6C 42 | .....!R.?Igj..lB
53 12 46 59 08 EC 07 52 9C A2 63 18 A7 A8 EB B6 | S.FY...R..c.....
AA AA 08 4C 23 69 76 80 3D 95 A6 25 3F 39 A2 F7 | ...L#iv.=..%?9..
8C B4 27 4E D3 B4 2D 72 FC 2B 62 9B 15 8B E3 BD | ..'N..-r.+b.....
50 FC 89 D8 CC 14 4B 71 F1 A7 09 7D 7C FB DF 8A | P.....Kq...}|...
84 55 81 8B 87 24 5A 25 E5 95 31 07 6C 8F 35 37 | .U...$Z%..1.l.57
A1 ED 72 83 7C 98 42 F7 B3 73 63 36 F9 8F F8 75 | ..r.|.B..sc6...u
E7 94 11 82 B7 21 47 E4 D4 BD AE 37 A1 C4 D9 EB | .....!G....7....
7D 9A 18 38 85 55 0B A7 60 B1 83 56 65 20 85 CA | }..8.U..`..Ve ..
6D 7B 45 4F AA EA 99 41 94 3F F9 A4 7E 7D 11 2C | m{EO...A.?..~}.,
EA E8 47 0A EF 23 E4 99 F5 A2 86 A4 8C 53 DA 79 | ..G..#.......S.y
D6 D5 FE 5A EE 5F 7E BA 7C AD 27 38 BE A9 38 3B | ...Z._~.|.'8..8;
98 60 95 FB 1E 7E 03 F0 1A 2D 4D 7B 91 7C 6A DF | .`...~...-M{.|j.
5F DA 16 3C 5B 44 59 64 87 A0 07 9C 64 80 C0 8B | _..<[DYd....d...
43 44 A3 90 8E E0 94 61 F6 42 EB 0D 3F 5D 43 4D | CD.....a.B..?]CM
C8 9F 48 D8 C3 1A C1 12 89 DD B1 75 EB 60 2F DE | ..H........u.`/.
66 AC 7C 5E DD D3 19 9A 92 BB 2A 94 0F 9B 85 3E | f.|^......*....>
CD E7 94 61 AD 20 17 03 03 00 40 72 30 F4 45 97 | ...a. ....@r0.E.
E0 FF B3 E1 72 95 1E 3A AE B4 8D B9 E9 36 67 6A | ....r..:.....6gj
E9 D8 7E 8D 35 61 44 78 C4 63 3F 88 72 02 23 BF | ..~.5aDx.c?.r.#.
5B 25 0C EC BF 53 18 5F AD BD F9 10 33 D6 EB 47 | [%...S._....3..G
FA 57 EA F7 1D CE AC 2E 3D 4C BD 17 03 03 00 40 | .W......=L.....@

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
94 E9 91 CA 99 18 9F 38 83 09 8A 0E 8F 26 FB 01 | .......8.....&..
71 4C 86 99 24 E7 DF 45 FD 61 6B AF 74 4E 9B 2E | qL..$..E.ak.tN..
17 95 FF 70 01 F7 86 B7 22 F3 5B D9 61 71 43 30 | ...p....".[.aqC0
A9 D5 E6 13 A6 74 EC 85 58 B2 F0 29 DF C5 DE 65 | .....t..X..)...e
17 03 03 0D 10 2E 68 42 D3 21 A8 48 D4 0F B6 F5 | ......hB.!.H....
CF D0 01 52 C9 F5 50 A9 6A CE 71 D2 BC 0C 93 C2 | ...R..P.j.q.....
E8 A1 42 D9 C1 8A 39 F1 C5 C6 0B 64 91 E0 D6 6D | ..B...9....d...m
0C 1B 1B FC FF 4A A7 29 75 A9 49 E9 80 BC 92 15 | .....J.)u.I.....
B4 12 41 CA 43 5B 55 EC 6F 17 0D 34 AF 97 77 04 | ..A.C[U.o..4..w.
0D 41 99 C4 D2 D9 89 FB 44 B0 1C C1 3B 3D 1D DB | .A......D...;=..
FB FE 85 B9 0A 88 AA 67 B1 34 66 5E 5E 0C 76 6B | .......g.4f^^.vk
04 9C D9 D1 A3 7B 7C DF 87 7B 84 58 9F C8 E8 81 | .....{|..{.X....
73 60 F5 E7 0B B9 56 3C B6 B9 BB DB 46 4A 81 7D | s`....V<....FJ.}
47 73 65 BC 54 DA 0F 53 CA 26 C4 99 AE 0B 61 A7 | Gse.T..S.&....a.
93 3A EF F7 7E B6 94 EF DF 74 98 89 C2 78 E8 5B | .:..~....t...x.[
56 23 DC 4A B4 95 55 B4 AE D0 76 84 18 2B 60 51 | V#.J..U...v..+`Q
D6 87 C3 60 20 B7 94 8E AF C1 7B BF 26 25 5B 2D | ...` .....{.&%[-
58 42 5B B9 AF AF 89 62 C7 44 DC F2 18 13 EA 79 | XB[....b.D.....y
5C ED 05 8D 71 A3 63 56 E2 25 64 61 17 8B AB 06 | \...q.cV.%da....
53 AF A6 97 16 63 F6 9A 07 6E 0D FD F4 15 F6 39 | S....c...n.....9
5E 08 A8 1D F6 06 A7 CE DF 56 0C 68 9F 2B 85 B0 | ^........V.h.+..
75 B7 24 9E A0 DC A5 23 E9 DE 04 D8 72 4B 63 75 | u.$....#....rKcu
0F C8 C5 7E 5D C0 A4 D2 70 C8 CE 10 15 10 1B 83 | ...~]...p.......
20 EC D9 2C 7F C2 9F F7 D4 3C B8 BB 6D B6 F1 A0 |  ..,.....<..m...
6F C7 0A 69 02 AE 67 59 1D C3 E9 C6 A4 A3 D5 17 | o..i..gY........
F5 04 CF 8E 04 98 B7 85 E5 A0 A6 DD A2 A5 31 E0 | ..............1.
DE 36 0B 9E 0C A2 C1 AF 28 01 E1 93 A7 89 A3 46 | .6......(......F
79 9A 63 A7 45 60 85 0B 50 B1 18 7D 6C 41 71 38 | y.c.E`..P..}lAq8
91 D6 1F 61 70 3D AD A4 66 5B 89 DB 57 D6 44 7E | ...ap=..f[..W.D~
F1 26 BA D6 6C 53 6A 15 51 81 F2 78 51 8C 58 F9 | .&..lSj.Q..xQ.X.
20 07 4E 29 BC 3F D9 46 6C EB 41 D1 03 11 0E 85 |  .N).?.Fl.A.....
B5 E4 BC 9D 6B BA 82 65 D0 BB DE 53 B1 AE 9F 7D | ....k..e...S...}
84 5E FA 84 47 86 92 AE D4 D4 32 29 8C BC CD 37 | .^..G.....2)...7
8A E5 FF 91 A5 30 BE A4 97 4C FD AC EE 5F 5C 58 | .....0...L..._\X
1B 9B B7 2A 2E BA DF 55 31 D7 F8 8A 66 DA 66 81 | ...*...U1...f.f.
CC 7F 2E 65 4F 0D 31 78 4E 08 8D 13 B0 1D A9 69 | ...eO.1xN......i
E2 D2 5C 75 AD 64 94 49 66 35 B7 57 F2 46 C5 B9 | ..\u.d.If5.W.F..
AD 8C F8 1D 09 3A 05 1B 30 77 68 A3 6D 52 35 17 | .....:..0wh.mR5.
CF 6C DA EB BE FD C9 83 6B 60 8F 59 FD 49 95 21 | .l......k`.Y.I.!
EF C0 5B 07 F5 49 71 10 63 B8 75 A2 31 A8 7D DC | ..[..Iq.c.u.1.}.
54 68 C6 39 36 D0 40 1C 29 69 F7 90 6C A6 82 4F | Th.96.@.)i..l..O
A3 C7 29 1E 66 58 A4 10 10 50 72 4A BC CD AE 30 | ..).fX...PrJ...0
60 C7 E7 8D 19 C4 E5 7A 89 AD 0D 53 4D 55 62 95 | `......z...SMUb.
52 71 63 58 E2 D1 38 DD 0E ED 78 A8 5A AD D6 40 | RqcX..8...x.Z..@
B7 D3 53 6D 47 0D 55 14 29 1E BB AC 52 B4 04 3D | ..SmG.U.)...R..=
F7 F5 55 19 B8 C7 C7 D5 6A 40 9A A8 E4 F4 C6 19 | ..U.....j@......
ED 2E 74 5C 14 AB 39 F0 DA EC 55 F1 F0 AA 83 0C | ..t\..9...U.....
0E C7 7A 7C 95 12 27 0C 64 A2 7D 15 46 9E 6C E1 | ..z|..'.d.}.F.l.
3C 12 B4 0E 3E 9E C1 30 41 E5 A5 26 5A 27 A8 C0 | <...>..0A..&Z'..
16 18 82 DF 5B F1 31 4D 91 FF 69 17 CF 80 E3 44 | ....[.1M..i....D
AF 42 EB 62 CA D8 D9 2C 53 7B 01 0B DB 2A B8 2D | .B.b...,S{...*.-
46 79 F5 85 E0 37 34 EC 63 52 37 FB 17 88 44 B4 | Fy...74.cR7...D.
96 1D 16 B9 CD 7F 9B 31 CC 3E 38 5D A1 29 E6 E8 | .......1.>8].)..
D9 32 91 2D 42 BF ED C0 E9 6A 73 61 74 C9 13 1F | .2.-B....jsat...
D7 5D 3F 7D A0 6C 78 65 F7 76 57 6E 8E EF 4D 04 | .]?}.lxe.vWn..M.
C9 CB 98 45 46 C2 F7 DB 51 10 78 7A F6 B2 18 49 | ...EF...Q.xz...I
BF 34 3F 98 AB 6C 83 24 98 10 D4 D1 FC F8 13 77 | .4?..l.$.......w
15 CC B6 D7 10 BD 2D 15 8C 3E 12 1C D5 A3 97 56 | ......-..>.....V
73 F3 AC 1F 03 D9 E9 42 B0 E1 AD B1 C7 7D 06 68 | s......B.....}.h
9F A1 8F 9F B2 E8 20 49 03 7C D9 35 86 BE 01 AB | ...... I.|.5....
8D ED 92 D9 AE E8 4F 9A CD B8 F6 DD 17 D2 05 31 | ......O........1
1C 80 D4 F2 66 BE 56 B7 2B 3D 5E F4 5A 2C 3C 5B | ....f.V.+=^.Z,<[
E8 51 44 9A 91 F2 BC 32 F6 9E 45 D4 EB 43 B5 7D | .QD....2..E..C.}
1B 18 09 B4 1D C6 34 6B F7 E5 C3 54 7E 05 D3 68 | ......4k...T~..h
34 7D 90 8E EA 7A 9A C7 5B CA 49 94 D5 00 7D 83 | 4}...z..[.I...}.
5C 7C 27 28 3F D5 49 42 E1 FF 5D A2 71 B3 70 03 | \|'(?.IB..].q.p.
A5 2F B1 CF FE 2C A3 FD B1 BC CB 37 A0 A2 EA E0 | ./...,.....7....
5A A4 2D AC 04 9A C3 C4 B1 AE 64 63 9F CD 64 29 | Z.-.......dc..d)
F1 E7 AB E4 29 CA 82 F3 B7 16 83 4B E5 A2 53 2C | ....)......K..S,
06 76 8F 29 CB 19 16 EA 8F 0D 18 75 5D 36 E7 FA | .v.).......u]6..
6F 76 F6 68 7E A3 DA A6 75 6C 63 C5 85 5E B8 39 | ov.h~...ulc..^.9
06 99 5B 33 F1 4F 14 C7 6B 7F 5E BA F2 ED 50 B4 | ..[3.O..k.^...P.
12 40 B0 76 AA 53 E1 D8 82 9A A4 85 74 B1 35 99 | .@.v.S......t.5.
90 DE D2 20 F9 DE E8 37 84 88 61 A5 80 8C 91 9C | ... ...7..a.....
BD 15 20 41 1E F8 53 82 EE 81 03 98 D2 7C 57 99 | .. A..S......|W.
4E 3E 8E 8C DF F1 D4 8F 6E 3E 41 97 49 D3 34 B7 | N>......n>A.I.4.
03 5B C4 9D 3E 1B E8 7B 3C 26 FD E9 A8 0B 80 A4 | .[..>..{<&......
13 58 53 6B D0 52 D1 EB 79 E5 8B 56 BC DB DF 72 | .XSk.R..y..V...r
A7 D1 65 F4 BE 6B 0F C4 46 E9 23 62 7F 60 AD 68 | ..e..k..F.#b.`.h
7E 6D 3E F3 D5 E7 44 1C 05 EB 83 11 26 43 A4 B0 | ~m>...D.....&C..
20 DA 1F 09 A6 69 79 60 56 E9 77 85 BA E2 0E 7D |  ....iy`V.w....}
1C AA 40 16 2A FE E1 8D 4D FD 48 7B 9E 5D F7 42 | ..@.*...M.H{.].B
3C 07 61 61 F8 B7 D3 75 CF 31 AE 6A 1C 04 68 96 | <.aa...u.1.j..h.
4B F6 09 EB D2 7A 50 C5 70 2F C8 8C 77 EB FE 6A | K....zP.p/..w..j
C9 6F 5F BB 53 D5 AB ED 45 68 B3 A6 A6 33 26 EB | .o_.S...Eh...3&.
3B 69 70 67 24 39 6C E5 14 CC A8 87 B4 5E BB BF | ;ipg$9l......^..
8E E9 CB 04 64 A8 13 99 82 91 68 B0 1D CF 9B D8 | ....d.....h.....
C9 B3 17 60 2C F5 2D 1B F6 69 F3 18 7E 6F C3 E2 | ...`,.-..i..~o..
97 3B 7D 97 8C 9E F1 74 D2 0F A2 34 E1 C9 38 16 | .;}....t...4..8.
B0 99 BF A4 F6 CE 13 A4 21 2D 80 B1 E9 10 F3 42 | ........!-.....B

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
11 52 EC 8D 8A 57 14 DA 51 A1 BF CA 6F 79 72 6D | .R...W..Q...oyrm
5C DC 2B 35 04 FE 5F 01 52 42 F1 6B 21 84 F7 5A | \.+5.._.RB.k!..Z
C7 19 E7 7B 8C 29 9D BE D4 23 49 7C 05 FC 36 3F | ...{.)...#I|..6?
ED B4 69 1D 14 35 7C B0 2E 56 B2 6C B4 76 86 75 | ..i..5|..V.l.v.u
46 9C 31 47 17 01 EC 17 ED 67 44 00 EC 2D B9 31 | F.1G.....gD..-.1
86 B5 29 C2 BF 3F D4 6F 60 B5 7E 88 89 C1 A5 E9 | ..)..?.o`.~.....
AB B1 0E 0E CE E7 46 F6 17 B5 2D 8B 3A 34 0F 83 | ......F...-.:4..
9C 37 A9 3D B0 EB 3D 06 CB 35 8B 5F 63 42 E5 0B | .7.=..=..5._cB..
37 5E F8 AC 26 75 BF 8F A9 33 E8 9E 32 88 E3 ED | 7^..&u...3..2...
1E BC EB 57 E8 7E C7 BF B1 D0 09 2F 43 A4 FE E0 | ...W.~...../C...
C1 B3 D7 F5 D8 0C 00 F4 B9 B1 76 4F 5D 84 B6 91 | ..........vO]...
DB 73 26 CB 61 B0 E0 E1 00 47 A9 12 F7 08 31 D0 | .s&.a....G....1.
CC 73 FA 7D 8E 67 10 B5 17 02 E8 98 76 45 98 C1 | .s.}.g......vE..
6E 60 3C 09 0F AC 26 4E DA DD D5 AD 22 E5 77 AC | n`<...&N....".w.
27 8B C4 8A 80 85 FE AC 3E 47 9F 6E 26 7C 32 D8 | '.......>G.n&|2.
33 03 1D 79 73 FA F3 92 2E 45 92 4C 6D 48 DE AC | 3..ys....E.LmH..
86 D8 04 56 97 18 CC 0C 03 4F 4A F0 70 D0 72 F8 | ...V.....OJ.p.r.
AC C9 4C 0B 70 6D 82 66 34 62 E5 A4 15 E4 72 8B | ..L.pm.f4b....r.
20 38 4F 46 04 95 7D 45 B7 D6 23 F5 51 33 EF 98 |  8OF..}E..#.Q3..
A7 EB FF 63 9A 3C 1A 7B C3 59 6B EC 86 1C B1 50 | ...c.<.{.Yk....P
2B 0A 4E 4C 39 14 46 18 F2 2A 61 14 66 91 74 81 | +.NL9.F..*a.f.t.
C9 CA 39 F0 BB A2 23 74 95 A9 7E 4F CA 2B 11 94 | ..9...#t..~O.+..
C8 63 5B 07 5F 04 3C BE CE 40 1E 1D 37 08 4B 8A | .c[._.<..@..7.K.
89 6C 75 FD D3 18 A9 F7 F2 99 1E C4 C8 EA D3 75 | .lu............u
87 1C 85 0E 8D F9 37 A8 48 E6 37 72 BB D7 DF F3 | ......7.H.7r....
E3 BE 08 E7 48 82 9F 5A 57 7E 26 B8 AB BB 7A 5A | ....H..ZW~&...zZ
1F A1 36 10 77 91 CA B9 3F 6A 99 2F 6E AE 6F 18 | ..6.w...?j./n.o.
25 27 D8 6E D8 50 9E 14 17 0F D1 72 79 9A FD 52 | %'.n.P.....ry..R
A6 44 2F C6 BE 34 BE 3A 2D 3A 12 1A A1 B7 1B 16 | .D/..4.:-:......
CE 21 AF 2E F7 7B F2 6C BE 33 D0 BD 80 7D FB 5A | .!...{.l.3...}.Z
F8 72 0E 8C 18 BD FE 08 D3 02 1C 9C 14 44 BE 7D | .r...........D.}
69 4D A8 05 DC 4E 02 82 39 B6 2F 4E 3C 6D 7A 43 | iM...N..9./N<mzC
8A 1B 3E 81 9C 23 F0 92 A8 C5 45 86 29 5A D5 0A | ..>..#....E.)Z..
54 EA A8 3C E1 28 C5 DA FA 6D E5 41 61 E2 7B E8 | T..<.(...m.Aa.{.
B4 19 AE 85 82 92 A7 79 E1 F4 C7 7C 68 7D 36 7E | .......y...|h}6~
51 A6 9D 64 E5 8E 36 10 62 13 DE 7C 31 6F AC AD | Q..d..6.b..|1o..
72 21 F5 EA C7 18 B8 36 AE 04 19 A3 C5 63 5B 91 | r!.....6.....c[.
38 46 DC 4B 50 63 11 F0 7F 7C B9 A9 8F 99 53 08 | 8F.KPc...|....S.
31 78 28 26 66 D1 A7 4B D7 BA 1E 21 77 14 2A C3 | 1x(&f..K...!w.*.
59 66 6D A5 32 95 83 7C 2B 59 23 2D 42 EF AB 37 | Yfm.2..|+Y#-B..7
8E 05 68 7D 1D 7B 95 B9 83 56 3A 5E 16 EE A6 D9 | ..h}.{...V:^....
2D 06 E3 B5 D4 14 5F 39 A2 EA 96 C2 3E C2 81 34 | -....._9....>..4
EA B2 8F C5 25 B2 97 E0 A0 F5 49 B2 A4 E5 6D 63 | ....%.....I...mc
C3 4D 4C 4E C1 10 86 A1 CF 88 36 53 AD 5E B7 2A | .MLN......6S.^.*
48 30 5F DF DD 7D D2 91 B2 C4 5C 95 9B F6 DE 07 | H0_..}....\.....
CA C7 5B B0 18 8D 37 6E 79 A5 9C 26 E9 B6 7A 4A | ..[...7ny..&..zJ
1D 29 C4 25 C8 A6 02 31 27 B5 BB B1 AE BB 97 E5 | .).%...1'.......
14 3B C9 BA 87 DE 08 45 8F F2 10 9F F9 E9 0D 86 | .;.....E........
47 A4 FC 46 97 02 6A 8A 56 0F D9 B7 8C AE 74 7D | G..F..j.V.....t}
0F 1B 4F 31 68 B3 F1 A6 D1 56 3E A5 B7 39 4F BD | ..O1h....V>..9O.
22 CF F3 8A 45 4A 63 34 0B 73 5E 68 07 28 E9 AE | "...EJc4.s^h.(..
7D 90 A5 15 E8 69 9A E0 67 E9 40 35 B6 35 D7 46 | }....i..g.@5.5.F
75 BE 1B EA 4C 05 09 52 23 F1 14 BD E0 6B 21 33 | u...L..R#....k!3
C0 E6 4F 13 E1 43 B8 77 86 60 E7 26 3A 47 05 85 | ..O..C.w.`.&:G..
78 AD 82 FD F7 AA 3E 5E 76 98 C3 9A A4 E9 6F DE | x.....>^v.....o.
87 44 2B C4 F5 1B 7E F1 BD 83 F6 21 75 C2 CD 4A | .D+...~....!u..J
DF 56 8C FF 1C 40 75 29 79 3E A8 1D 47 92 91 8D | .V...@u)y>..G...
A1 4B 74 08 AC 88 7A B0 4E A1 B5 2E C0 C7 B4 EE | .Kt...z.N.......
46 4B 1C 36 14 71 DB 10 25 EA E9 B7 0A 7D 11 AE | FK.6.q..%....}..
7E 4C 30 1D 6E 68 10 C6 AF 60 DA 2A 51 B1 05 22 | ~L0.nh...`.*Q.."
45 F8 94 0F 74 44 39 34 79 8C 80 3C 00 ED B4 79 | E...tD94y..<...y
3D CB A0 8A B0 7A C0 C9 14 FE 60 96 F1 A8 D1 D2 | =....z....`.....
E2 F6 59 78 82 0A 58 FC D2 1C 67 61 FE 1F 31 DE | ..Yx..X...ga..1.
03 15 27 DA 47 D3 75 51 89 8E CF 91 2E C2 33 10 | ..'.G.uQ......3.
DF 92 71 03 E8 6A 08 02 88 D0 00 2E A5 28 E7 AA | ..q..j.......(..
33 8D D4 AD 0D 18 14 F8 57 AA 41 8D FF 28 F3 86 | 3.......W.A..(..
CB 1E 51 EF F6 DD 96 07 4D E2 7E 02 97 91 EB C2 | ..Q.....M.~.....
13 9B 8F 1B 62 6E CA 1B 88 BB 0E D7 2D 61 3A CA | ....bn......-a:.
0E BE E7 D4 D7 42 97 73 66 D2 7F 80 B4 DF 8F 22 | .....B.sf......"
89 C0 8C 1D 21 23 4B 6C 7F 28 A1 C4 8C 4D AC F9 | ....!#Kl.(...M..
8E 7F 67 52 99 B1 E1 E6 98 4B 14 33 3E E5 70 2C | ..gR.....K.3>.p,
40 E9 4D F0 DB 1B 88 5C 69 27 58 08 13 F4 27 B7 | @.M....\i'X...'.
B5 90 8F 4F 15 39 4F 95 54 17 47 EB 21 8B 86 42 | ...O.9O.T.G.!..B
FF 6C FB 70 69 20 42 14 61 A3 98 B5 45 20 75 F4 | .l.pi B.a...E u.
F2 4B 1A F5 2E F4 81 0B 3B A6 69 B5 97 26 86 31 | .K......;.i..&.1
03 94 0F 64 5D 1B F8 82 58 DC FC 2C EC CD 46 DE | ...d]...X..,..F.
9D FE 03 7C DB 79 A0 95 08 77 5F DF E3 1C 22 8B | ...|.y...w_...".
B6 46 BE 9C E7 7F 11 2F C6 32 D8 C8 5A 69 DC 50 | .F...../.2..Zi.P
EB D7 52 33 01 B8 7E 56 E2 47 5A 25 C0 89 E2 A1 | ..R3..~V.GZ%....
95 B2 80 66 DD 6C A6 3E 1C AE 06 16 D6 F4 91 F6 | ...f.l.>........
E0 F3 F4 07 DD 31 36 AA E0 51 96 41 4A 02 09 30 | .....16..Q.AJ..0
BC 36 E4 D3 98 BA DC 04 DF 62 62 61 2E DE 28 3C | .6.......bba..(<
B0 8A 62 3D 44 63 09 64 CF 65 D7 F1 8B DD 91 A1 | ..b=Dc.d.e......
46 EB 61 CE FC 3A 0F DE B0 7D D5 45 1D 6F 83 A8 | F.a..:...}.E.o..
28 A5 3A 33 D3 EB 1C 49 79 08 D9 5A 6C EA 6B A8 | (.:3...Iy..Zl.k.
C3 14 A8 5E F4 DD 25 38 32 FC B0 1B C9 E9 3B 54 | ...^..%82.....;T
FD 78 49 18 63 3A 5E 6F 87 5C FD 00 4A 5D 3A 84 | .xI.c:^o.\..J]:.
AA A9 FA FE B2 00 10 2E 36 CD 98 56 3A BE 0D 59 | ........6..V:..Y
71 7D 2D C5 32 CB DB A5 F9 D2 B1 5D 82 73 BE 2E | q}-.2......].s..
10 80 F7 EE B5 93 46 18 49 3D 58 AD D8 99 7A D8 | ......F.I=X...z.

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
8F 02 52 FC 73 ED 48 BE 5A B5 8B 48 10 FE D7 C2 | ..R.s.H.Z..H....
F1 11 5A 1A 92 02 33 4D 3A 76 27 CF F3 2D FD BB | ..Z...3M:v'..-..
4D C1 18 68 AB A1 50 49 AC 61 F5 DF 88 57 C0 61 | M..h..PI.a...W.a
9B 05 EB 25 B0 CC 75 F7 56 1E 97 73 86 26 67 02 | ...%..u.V..s.&g.
EE F7 6D 3D 12 FA 80 04 CD 72 C5 08 7B BF AF B3 | ..m=.....r..{...
AC DE A5 E0 A3 DD 29 8B AB 41 36 B5 96 6C B6 32 | ......)..A6..l.2
33 53 E0 C3 95 2D A7 AA 80 C9 E9 E7 88 66 04 5C | 3S...-.......f.\
06 88 92 17 96 F9 58 6C BC 0A 17 22 DB 90 5B FA | ......Xl..."..[.
52 85 75 2F 7B 5E B0 8A 12 34 77 61 DD 45 58 B5 | R.u/{^...4wa.EX.
EC 2A 72 07 35 14 7A 6A CE 4A 9F 66 A9 5C C0 5C | .*r.5.zj.J.f.\.\
0E 28 87 9E 60 26 1A F5 9B 83 CF 81 45 BE DB 31 | .(..`&......E..1
D4 B0 6D 58 2B A1 CC 33 53 C6 B6 F9 E3 0D 02 A8 | ..mX+..3S.......
69 05 1E EE 18 B9 77 8E 98 7A B0 A2 80 FA 16 3E | i.....w..z.....>
90 9E 31 83 3D 09 F4 CF A1 98 67 46 0C 0F 0F DE | ..1.=.....gF....
70 E0 2F 6F C8 B5 24 12 BA 98 76 0B D6 F5 5E 8C | p./o..$...v...^.
24 2A A6 92 5C 21 81 F6 88 42 6E 2C BD DD 88 C4 | $*..\!...Bn,....
50 44 49 0E 71 D4 6A 65 AA 7B 15 DC 19 94 91 AD | PDI.q.je.{......
E1 F7 9B 4E B2 78 0C EF CB 86 13 48 85 3F DA 38 | ...N.x.....H.?.8
05 71 67 7F 57 17 B9 DF F6 8D 5F C3 29 9E 0A 47 | .qg.W....._.)..G
2D C0 2E 86 D0 0A 02 2B CD 3D 23 1E 48 FD 09 A5 | -......+.=#.H...
F1 89 10 20 24 35 30 A0 23 8F 82 28 DB 5D 04 E3 | ... $50.#..(.]..
49 67 8C E2 67 4E 31 78 15 7D F2 31 6D DA 85 41 | Ig..gN1x.}.1m..A
A8 AD 98 18 CD C8 B6 D8 7F E8 F2 7C 8F E2 89 D7 | ...........|....
3F 4C A7 67 49 A7 96 B8 B1 B2 78 BB 88 6C D2 35 | ?L.gI.....x..l.5
C2 9A 7B 90 1A 0F 4D C1 4D A7 31 EB 48 7A 5A 51 | ..{...M.M.1.HzZQ
6C 4B 9D B6 52 7C 3C 03 9A 7C BD 5B 8B 67 47 65 | lK..R|<..|.[.gGe
D9 D2 0B F8 1F E8 10 E3 81 85 51 AC 2F 36 80 D6 | ..........Q./6..
DA E8 E2 AA 7F 14 B9 DF 0D 41 27 24 4B 96 5D 68 | .........A'$K.]h
51 E9 AD C4 92 44 EC 64 C7 6F 42 43 66 6D 0C D1 | Q....D.d.oBCfm..
58 7B 22 55 E0 FF 08 35 1E 6B 50 5F 2C 77 B7 61 | X{"U...5.kP_,w.a
00 75 5D 5F 6A 26 21 F3 FB 1C 4B 79 49 AE B4 2A | .u]_j&!...KyI..*
A0 54 8B 08 17 CC 2D 95 6A 3F 8F 78 23 AC 42 B2 | .T....-.j?.x#.B.
DA A4 5D 1D 57 2A A9 42 95 84 55 BC 8E 93 34 E2 | ..].W*.B..U...4.
0F 62 26 33 73 17 03 03 00 40 C1 B5 14 FF 3C CD | .b&3s....@....<.
AA 9E 95 53 10 91 F0 FB 09 79 E9 3D 6D 2D D8 03 | ...S.....y.=m-..
BA EE 95 ED 8C 05 E3 82 03 99 B1 95 EC D9 AF 56 | ...............V
64 76 1A 35 09 03 BC 5F 55 C1 94 E7 98 DF 0A CC | dv.5..._U.......
14 BE CE 7C 7C 17 93 8E 7A C4 17 03 03 00 40 33 | ...||...z.....@3
E4 78 77 31 C2 E3 3E 72 07 23 88 03 84 6C 01 93 | .xw1..>r.#...l..
AA 48 4B A4 F9 01 0F 0D 7D 1F 0C D1 29 7E DE 74 | .HK.....}...)~.t
2D 0C A4 69 E9 65 57 94 E0 48 1D 90 3A AB 49 52 | -..i.eW..H..:.IR
61 BB 0F DF DD FC 97 B1 EC 8C 9B 92 F5 CC 3B 17 | a.............;.
03 03 10 40 B4 BE 8E C9 32 4A 54 37 91 26 53 6C | ...@....2JT7.&Sl
56 A3 A1 FB D4 1C 73 5B F1 61 CA 7B BF 50 60 D1 | V.....s[.a.{.P`.
F3 98 C0 9B AE 9D C9 58 09 E4 B5 5B 9F 8E 8A A6 | .......X...[....
88 16 C5 5E F3 16 29 F1 E2 D7 DF 3F 9B 4C 39 64 | ...^..)....?.L9d
08 60 72 79 3A 64 D5 16 EA CE CF BA CA F0 30 54 | .`ry:d........0T
80 E5 54 2E C7 5A 9D 20 2F 0E 6E 0A 34 2D B7 BF | ..T..Z. /.n.4-..
55 A4 A3 13 12 01 B9 3B A0 F4 5A 0C 6D 46 89 33 | U......;..Z.mF.3
40 A7 74 E4 60 F1 98 08 D1 D2 BE 47 A4 FE 80 EE | @.t.`......G....
E4 F6 39 6C 99 EA FB 6B 3F 13 8A 7A 0F 64 5F 4D | ..9l...k?..z.d_M
34 BA 6B 3B 2E CB 12 9C CC 1A DE 56 69 A5 BB E7 | 4.k;.......Vi...
65 AA 94 89 B0 99 E9 D8 8C E6 37 9F 9A B7 48 47 | e.........7...HG
28 DE C7 4C B1 2C 49 8E 89 DD A2 06 88 53 62 B2 | (..L.,I......Sb.
FB C2 8A 58 1B EA 13 7F 50 E0 D8 E2 22 62 C0 10 | ...X....P..."b..
30 EF 03 3F 76 7F 90 A5 05 70 EB 54 78 63 14 60 | 0..?v....p.Txc.`
29 DD 3D 22 33 62 EA 35 E1 A0 B8 83 72 F4 8C 22 | ).="3b.5....r.."
1C 44 8C 83 C8 28 6C 01 03 37 97 60 B2 D6 0B 8F | .D...(l..7.`....
23 05 C5 DD F8 85 09 20 40 76 29 BB DA AC 56 00 | #...... @v)...V.
55 66 04 26 04 69 2C 01 11 32 5A 75 8F 41 2D E0 | Uf.&.i,..2Zu.A-.
AE A5 1B 0A F5 8F F4 A8 47 FB BF FF A2 70 F7 B3 | ........G....p..
C9 AC 46 4D 66 43 B3 1F 87 31 4D D4 45 DF D3 33 | ..FMfC...1M.E..3
84 62 CA B2 73 9D A9 D2 AA CD D8 9A 56 94 06 F6 | .b..s.......V...
8C 7D D1 F3 03 25 76 FD AF 7C 1A 23 AF 39 01 CE | .}...%v..|.#.9..
C1 F6 20 F0 64 2B 52 A6 6C 95 B9 7A 8B A8 73 B4 | .. .d+R.l..z..s.
39 D8 89 41 3A 5B 55 69 FB 92 02 CF 94 46 64 F3 | 9..A:[Ui.....Fd.
CE AF 98 D4 D2 B4 3B 17 27 E8 81 46 1B 4B FC D2 | ......;.'..F.K..
A8 BD 8F 31 70 DA B1 28 2E 41 CE 94 4F F0 A0 6A | ...1p..(.A..O..j
F0 AA BD 07 E2 93 95 6C 46 B9 8D AC 27 28 86 86 | .......lF...'(..
6C 17 80 5F 3B 9C 8B 9C D6 38 06 8B 12 B4 C5 E9 | l.._;....8......
2F 87 6B C9 EA 42 1A FE 9F A9 3C 82 7F 46 BD 8E | /.k..B....<..F..
A1 CE 52 67 69 D8 86 8E 57 AA 92 2A 22 C6 EE D0 | ..Rgi...W..*"...
31 38 54 D4 72 71 0B 90 3C 00 03 B3 7C C0 86 69 | 18T.rq..<...|..i
1C 59 EC 0E D0 33 69 C7 94 C3 40 39 8F 42 15 9E | .Y...3i...@9.B..
D8 9D DC CC 6B 19 EB C4 20 19 4D 57 CB 4C EC 94 | ....k... .MW.L..
0B C3 FD 55 A6 8B 44 0D 1A 73 CA BC CC 35 68 08 | ...U..D..s...5h.
AB 4C 56 63 AC 77 48 FD E7 9E A5 E6 E6 6C 57 F7 | .LVc.wH......lW.
BA 30 DD 40 D6 18 09 96 31 B8 8E 19 0E 93 83 68 | .0.@....1......h
86 87 2B F1 DD 44 3B 3A 74 08 99 1E 55 A8 77 E9 | ..+..D;:t...U.w.
FE 7A 11 FD 03 0C 40 78 BE D6 48 D4 52 59 AB E9 | .z....@x..H.RY..
8E 9E 0E C8 48 99 C3 F4 4E 96 83 51 96 A5 17 9A | ....H...N..Q....
52 8E 29 8B BE 0F A8 13 F7 05 BB 06 2A 8A BE 0C | R.).........*...
6B C2 E0 FD 76 40 9C 32 EB 1B B6 A5 9C C0 E5 6A | k...v@.2.......j
35 26 90 FF 17 D6 91 34 F6 FB 30 FF BD 52 4C F6 | 5&.....4..0..RL.
7E 38 45 B8 88 D2 78 AF 97 90 FA 87 D9 F4 48 73 | ~8E...x.......Hs
0A B8 51 5D 80 0C EC 6D 0B 4B 8D 92 48 DA 08 66 | ..Q]...m.K..H..f
21 6C E7 80 B4 A3 93 9C F8 39 0F C4 C7 03 25 70 | !l.......9....%p
A5 90 D5 E4 8A 63 5C 76 53 7F 17 EA 33 02 72 AD | .....c\vS...3.r.
BC 18 BC 08 F8 E4 DB 0B 10 B2 9D C3 42 12 0D BA | ............B...
04 D4 00 11 F4 FD 7F 24 0A BD 06 29 1C 7D 4B EC | .......$...).}K.

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
73 CA 32 32 8A 79 0B 00 78 E8 AE 2A A5 19 87 BE | s.22.y..x..*....
DC D5 EF 02 0D 74 A0 82 54 F4 6D C6 4C 84 DD BA | .....t..T.m.L...
9E 33 7E 8E A2 6A 49 81 A6 58 17 F3 1C 64 EC C4 | .3~..jI..X...d..
7E 36 22 1D 05 A7 AA 6C 1F 28 37 B9 06 D9 17 6A | ~6"....l.(7....j
79 AC 32 FD 1E 49 A3 99 DE FE F8 F5 83 C9 05 58 | y.2..I.........X
AD C4 08 B4 71 F8 B2 86 E0 3C 4F C2 89 10 B3 03 | ....q....<O.....
34 F7 76 48 79 26 4B 37 F2 CA C2 95 05 4C 2F 52 | 4.vHy&K7.....L/R
C7 AB 0B 36 D5 3D F7 C0 92 F8 DA 11 4F 25 C4 60 | ...6.=......O%.`
45 CE 52 D6 8D F4 C4 C9 62 19 C5 51 55 DC F0 93 | E.R.....b..QU...
5D AA B6 54 97 65 0A 99 60 30 0A 34 23 73 44 80 | ]..T.e..`0.4#sD.
22 0C AC 6A FE 00 1F 00 A2 14 20 1E 46 E2 6E 6A | "..j...... .F.nj
0B 7F 4B 10 52 A7 95 38 A1 BE 62 30 CB 34 B7 F7 | ..K.R..8..b0.4..
74 D4 32 3B 49 95 C4 E4 07 5E 7D F4 39 D8 CB AD | t.2;I....^}.9...
F5 32 F1 79 E6 64 2D B5 D6 17 10 26 77 74 BF C6 | .2.y.d-....&wt..
0F C4 67 06 A1 29 2B C0 98 1D 83 7B 03 79 90 59 | ..g..)+....{.y.Y
00 44 90 CE D6 7C C4 9D 3C 78 D5 1D 3B F8 D4 11 | .D...|..<x..;...
B6 1F AB DC A1 E5 74 00 E5 8D 7E 9E 41 5C 0D 6D | ......t...~.A\.m
C2 ED E1 B7 36 47 62 DB 17 5B 35 B2 88 CF C1 AE | ....6Gb..[5.....
43 57 F1 56 7E D6 80 BC F1 A9 38 20 11 6D 3C F3 | CW.V~.....8 .m<.
B4 1E C4 BD 1F 52 A7 5E B2 79 52 8C FC 49 45 88 | .....R.^.yR..IE.
DF EF 5F DD AA 6A 71 B7 4C 1E 48 51 B5 5A 27 65 | .._..jq.L.HQ.Z'e
54 CE 31 0C 74 FC 2E 50 4A 8A 6B 24 FF D5 06 47 | T.1.t..PJ.k$...G
20 7E C4 D1 1C FD 42 98 D1 0D 6B 20 74 0F B0 33 |  ~....B...k t..3
9B E7 2B 65 5E EE AA 14 87 4F E4 4C AF CF CC 06 | ..+e^....O.L....
02 9B 59 C8 BD 56 1D E6 5B 98 2E E0 32 36 80 3F | ..Y..V..[...26.?
38 13 27 51 C5 2A A7 72 87 35 FE 38 6C 02 D5 C4 | 8.'Q.*.r.5.8l...
7F 8C 8D CA 50 60 19 B3 71 77 62 B0 B9 0F D1 46 | ....P`..qwb....F
86 E4 3C 92 40 C3 D8 87 6F 71 4F AC 75 BD C4 A1 | ..<.@...oqO.u...
F8 2F E6 6B 78 B0 22 21 78 F4 89 93 D4 8A D1 F2 | ./.kx."!x.......
DC 0D 16 1B 79 03 65 23 0A 6B 96 37 9F 21 15 8B | ....y.e#.k.7.!..
34 C0 AE E8 3A F9 D3 CC C1 89 3D C7 76 9C 2F BE | 4...:.....=.v./.
7E 27 D0 66 06 02 5E 35 B7 36 99 52 5F 80 A8 21 | ~'.f..^5.6.R_..!
D8 AF 4C 9E 28 A4 11 F2 FF 5D A7 5B BE 20 BE F5 | ..L.(....].[. ..
F4 D5 5D 46 53 F8 C0 23 50 F3 81 9C A8 D3 1C E6 | ..]FS..#P.......
3C 83 B9 0F 65 D2 DA C7 94 9C 7A BD 66 DF 11 21 | <...e.....z.f..!
6E 15 B8 C7 98 FE 67 D4 72 0A 30 49 3C 26 B7 6B | n.....g.r.0I<&.k
82 A9 5B DA 4F F1 8C BD 80 CB F5 49 B0 51 5E FF | ..[.O......I.Q^.
63 40 84 9C D5 A3 A9 D3 1C 39 04 93 39 97 3B 9F | c@.......9..9.;.
AA AC 19 11 74 42 3E 58 EB 1A E9 03 93 8D DE 72 | ....tB>X.......r
67 6C 4D 3B 05 45 A5 BB 72 FA 74 6C 3D 6D 31 D7 | glM;.E..r.tl=m1.
B1 16 9E 91 4E 78 36 88 34 15 CE 6E 09 F8 37 06 | ....Nx6.4..n..7.
2F F4 74 0C FF 4C A0 BE BF 55 08 AA 72 B0 A5 EA | /.t..L...U..r...
28 8A 23 C4 20 AE 5B 5F 46 86 65 89 63 16 36 C5 | (.#. .[_F.e.c.6.
99 8F 84 C6 2F F8 1D FA 00 85 F7 BD 06 C1 9F F2 | ..../...........
58 B7 C6 61 F4 2C 58 C7 79 C4 91 5A 78 66 2C 00 | X..a.,X.y..Zxf,.
A6 29 54 48 A0 C6 BB 12 E8 B3 41 6C 93 DD 76 A7 | .)TH......Al..v.
A2 AD BB DE 9A 59 DB F4 0F 80 27 78 27 AC 78 84 | .....Y....'x'.x.
1E 15 A1 1E 13 2F 36 38 0D 9B 04 FA 88 EC B4 6F | ...../68.......o
01 25 58 D0 8B A9 38 EF EC 1F 06 73 06 B8 CF 52 | .%X...8....s...R
D9 51 A5 5D 86 06 C1 0F BD 2E BD 43 0D BD 55 E0 | .Q.].......C..U.
41 15 0C 20 88 94 6D 5F 39 25 BF 03 B9 51 7A 74 | A.. ..m_9%...Qzt
7A D7 5D 14 75 AA 8F A2 69 AE D9 2B 93 EA 3F DA | z.].u...i..+..?.
D2 91 8C D6 81 58 7A 2F 60 76 FE 40 22 52 EE 40 | .....Xz/`v.@"R.@
37 F7 8A 66 9D 4E 4C 91 2C 7B F5 98 C4 19 AC 75 | 7..f.NL.,{.....u
D6 FD 33 3D F1 C2 01 0A FF C2 1C 9C B1 A2 01 A5 | ..3=............
C6 ED E3 D6 38 E8 B4 8E 15 FE E9 A4 55 81 21 9B | ....8.......U.!.
8B 81 55 07 4A 45 CF EF B8 96 94 A3 3E B6 11 E0 | ..U.JE......>...
FA 44 B2 B9 B2 4C EB DB AC 5A ED 81 2C 84 DE F0 | .D...L...Z..,...
C3 84 1F 1F B1 B0 3D D4 90 34 28 AF 07 42 1D 38 | ......=..4(..B.8
83 48 1A FC 0F A3 99 E2 A9 04 78 76 85 70 DC EE | .H........xv.p..
BE 06 58 2C 86 1F C7 89 C0 35 A7 F6 4F 63 4D 94 | ..X,.....5..OcM.
50 62 0C 5A D1 F3 44 F7 D6 7E 3E FE D5 5C 43 DC | Pb.Z..D..~>..\C.
03 3B F8 8D 7D 46 A2 60 D0 3E 5C A4 F4 C1 3B 3D | .;..}F.`.>\...;=
C8 58 C7 63 EF 9B 26 27 36 AC 7A B9 09 91 45 19 | .X.c..&'6.z...E.
BC A0 F8 8B 97 40 CD 9F C5 7D FB 6E 5B CF 46 9B | .....@...}.n[.F.
E8 E3 75 AE 15 36 EC 5C 32 FE 26 DA F9 AC 3F FC | ..u..6.\2.&...?.
7F 3B 97 44 28 37 F4 95 EF E4 CC 73 4B 47 DE F0 | .;.D(7.....sKG..
F5 E3 48 91 AC E0 2A 35 ED 8E 92 9C 73 28 9E 7A | ..H...*5....s(.z
A1 BE 2C 1A 11 9B A9 12 74 B4 95 FF 52 D0 BE B6 | ..,.....t...R...
0F 89 E5 72 DA 7B 4F 8A 7E 70 20 FF 98 25 3F 35 | ...r.{O.~p ..%?5
30 93 A2 39 FE 3F 8A F2 5A A2 D5 E9 3B A8 DF EB | 0..9.?..Z...;...
D4 6A 66 0C A7 2A 49 B6 6D EC A6 85 E4 B3 98 38 | .jf..*I.m......8
86 39 F0 05 CB 00 AB 82 A4 32 4C D7 D1 34 A0 59 | .9.......2L..4.Y
BC 26 CF 9D B5 E2 F7 48 9D 75 34 94 62 83 F7 F3 | .&.....H.u4.b...
DC 2B 21 D1 25 33 19 3F A0 11 57 1C AF 0A F1 51 | .+!.%3.?..W....Q
A1 F7 62 D8 DC 75 D0 89 A3 1C BD 72 5C 19 56 76 | ..b..u.....r\.Vv
6D 55 11 0D 2B 9E 68 1E F0 FF FE 11 E6 B2 68 78 | mU..+.h.......hx
D6 F1 D6 59 67 7D 9F B7 D9 67 13 68 22 48 54 A8 | ...Yg}...g.h"HT.
D4 35 E0 90 EA B8 DB 4E 66 8C 6B 8F 37 21 E7 A8 | .5.....Nf.k.7!..
33 22 46 5F CA B4 06 7F 85 86 88 6E 5A 50 D5 FB | 3"F_.......nZP..
AE 24 CA 4A 6D 74 53 8A 80 D1 A7 B1 19 46 4A 14 | .$.JmtS......FJ.
80 D3 17 79 3F DD 42 03 A1 EF 17 85 61 62 3E 8E | ...y?.B.....ab>.
28 76 C4 7C 50 A3 82 B7 F1 17 21 F7 58 8F 3B D2 | (v.|P.....!.X.;.
30 16 88 15 C3 4C 6E 64 DE 43 24 7A D9 3A CC 45 | 0....Lnd.C$z.:.E
C0 A6 F3 A8 2D 76 D8 77 2F 76 E9 56 15 85 B5 35 | ....-v.w/v.V...5
E1 68 AA 35 D6 36 25 DB 23 BB 59 08 C7 36 3A E7 | .h.5.6%.#.Y..6:.
E6 A6 AE E8 35 B3 AC 56 3E BD C6 18 21 5B EA FB | ....5..V>...![..
5F A6 8C F6 4F 91 A0 60 ED 40 10 FD 71 D4 EE A0 | _...O..`.@..q...
88 D1 27 E9 18 D5 7F 6F C6 77 5C EB A8 29 B6 7D | ..'....o.w\..).}
91 CD 75 60 16 F0 C3 9B 90 87 C6 EF 67 B3 CF E7 | ..u`........g...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
0C 8D A6 7B 60 C2 EA DF D0 28 DE 0E D9 F2 BC A2 | ...{`....(......
0A 2F 38 25 7A 82 AE 3D 65 1C 4D 13 FE C1 11 CA | ./8%z..=e.M.....
C7 4B 17 68 C7 0A F3 F7 B8 A2 A1 0C 9F BB 94 69 | .K.h...........i
57 55 B3 E2 20 14 FA 04 F4 2F 63 42 B6 46 57 78 | WU.. ..../cB.FWx
B8 CE B6 20 47 37 A6 C6 9B EB 18 03 F8 59 62 A1 | ... G7.......Yb.
39 72 7D 7B 7B 99 1F 45 6C 28 A4 7E 42 06 62 B9 | 9r}{{..El(.~B.b.
9C 97 C4 60 B2 FC 13 BD 43 38 39 76 5B DF DF 26 | ...`....C89v[..&
80 59 85 AB E1 1C 88 81 49 EC 98 CB A7 43 9C 55 | .Y......I....C.U
E9 A4 26 E1 0C 03 6E 07 03 00 F2 B7 12 38 AA 6B | ..&...n......8.k
44 C5 6E 30 2F D1 C6 4E 35 AD 2A 8D F2 E7 E8 19 | D.n0/..N5.*.....
01 6F 85 CA F2 B1 08 84 51 9B 32 4F 68 62 46 8E | .o......Q.2OhbF.
F0 1B CE 37 32 48 31 53 0D 88 7C 2B FC 40 46 6D | ...72H1S..|+.@Fm
B4 7B A9 7F 66 B9 53 C7 99 75 89 25 7B 91 2E 79 | .{..f.S..u.%{..y
BA 63 81 1F 1B C5 7C 44 DA AD 7C 01 1B 7A 15 1C | .c....|D..|..z..
82 80 25 8C 13 E3 EC 59 0D 7E 9E C3 FA 21 5C 7F | ..%....Y.~...!\.
77 B3 A3 4B 9A CB 43 A2 91 32 C1 B6 29 1A 65 D9 | w..K..C..2..).e.
AA C1 57 A6 66 F9 FD E2 C9 4F F1 DD D7 5B 3D 97 | ..W.f....O...[=.
01 42 89 AC BA 41 F4 1D C0 B1 C5 28 7E 59 74 3B | .B...A.....(~Yt;
12 C7 2D 07 AB BA CF 78 35 B4 51 CC 48 60 F1 34 | ..-....x5.Q.H`.4
32 3D C0 DE 2C 11 81 18 1A EC F4 23 B2 D2 1A 37 | 2=..,......#...7
DB E5 82 D7 E9 37 80 E5 35 E5 32 91 02 21 66 23 | .....7..5.2..!f#
12 19 B9 45 68 3E 4A FF DE 68 31 E4 12 44 5A 4A | ...Eh>J..h1..DZJ
99 6C A4 98 77 E4 96 4D 50 D1 4B A4 E6 42 5F 88 | .l..w..MP.K..B_.
3A 1B DE AE 30 3D AF D3 9F 18 7E 89 21 99 0A 27 | :...0=....~.!..'
F2 B6 EC B8 7F 88 3A 2A 52 29 E8 33 0A 58 DF 05 | ......:*R).3.X..
AB 30 C5 BB D6 71 9E F4 5A D1 67 F6 AA E3 8C 45 | .0...q..Z.g....E
EC 30 BC B7 B2 2C F3 3F 9D 97 8D 9B 7F 6E A0 ED | .0...,.?.....n..
78 F9 B7 8E 49 19 3A 7C 2A 73 1B 38 78 2C 7D CF | x...I.:|*s.8x,}.
BA DB 53 E7 26 CC 37 20 DA A1 F8 92 09 67 20 2E | ..S.&.7 .....g .
1C 8B 95 F8 72 1E E3 CE E4 F9 D3 1E C7 FB A8 07 | ....r...........
BC 7D E5 30 6F B5 81 A8 2D 9F 11 3F 5C 84 3B A3 | .}.0o...-..?\.;.
E5 CA CF FD 9C C8 B1 C1 2E 20 4D B5 23 63 B1 6F | ......... M.#c.o
6F 45 F2 29 74 4D DE E2 8E BE E0 75 C1 3B E5 82 | oE.)tM.....u.;..
DF A5 51 DF ED 1D 1C 0D 0A 5D E8 B8 45 AE 0E 5B | ..Q......]..E..[
99 71 A4 BF 19 D8 C3 BB A9 38 0A B3 D2 64 45 B4 | .q.......8...dE.
3F 20 DC 54 7A FC F2 8E E2 4D F7 6D 3E 16 EE 4F | ? .Tz....M.m>..O
C4 AC E2 B1 0E 9C 63 16 97 8A AB A1 D0 CF F7 15 | ......c.........
8B 0F 3C 21 9C BD 67 35 38 11 35 90 E3 7F 74 51 | ..<!..g58.5...tQ
D0 4A 90 C3 AD 4B 77 6D 3D 48 2D D9 EE 9B FD 5B | .J...Kwm=H-....[
3B 44 44 C7 02 F9 34 0D B7 6B 40 E5 5F EE DF 37 | ;DD...4..k@._..7
93 A8 7E 21 1A BD 47 EB 9C 04 0A 93 A8 D8 00 BA | ..~!..G.........
12 C3 B3 AE C9 CA DF BD 72 FE 7F C2 02 B3 4C 11 | ........r.....L.
F7 76 63 DB 3A E8 DF D2 0A A7 F6 05 55 1F 2F 46 | .vc.:.......U./F
FE 28 97 63 5D 60 4E 1F 60 E3 13 41 C4 77 24 FC | .(.c]`N.`..A.w$.
E5 AE D7 B3 FA 00 C0 60 58 3C CE B8 79 16 AB C7 | .......`X<..y...
25 DB 3E AD 8C F2 AD 78 9A A2 AF 9C 12 0D 7E E1 | %.>....x......~.
4E 35 90 E7 82 7B 89 FC 13 0C D4 D6 FB 06 0F B6 | N5...{..........
D6 E9 41 DB CA 94 9A 96 69 C5 83 F2 EC CC 25 A9 | ..A.....i.....%.
2B 0F A6 BB 5F 5B 98 2D D5 EF 0C 0A 54 29 E2 2D | +..._[.-....T).-
7D F4 D0 97 A9 B5 9A 85 5B 98 44 77 B6 BF 2B D7 | }.......[.Dw..+.
4A DA DB 00 51 46 05 AC 80 62 93 09 BB A4 16 D2 | J...QF...b......
7E FE F7 F5 F2 45 8D AA E0 E6 35 44 30 05 48 DB | ~....E....5D0.H.
12 91 5F 68 A3 DF 82 7B 56 86 08 22 1A 65 E7 61 | .._h...{V..".e.a
DB B4 2F 8B 70 78 7D 6F DF 14 10 EA A7 DB 60 67 | ../.px}o......`g
CC 57 88 A1 3D 7B ED DA 6E 08 36 F8 C0 21 A1 D6 | .W..={..n.6..!..
FE AC 60 7B 00 90 BD 1B 3A E3 FD F1 95 89 10 EB | ..`{....:.......
07 95 8C 06 57 C2 50 DA A3 D7 DC EC 9B 12 A1 FF | ....W.P.........
A5 EF E0 3A 54 DD B0 F2 7B 5D 39 0F 59 F5 5A 56 | ...:T...{]9.Y.ZV
D3 AE 87 1A 5C 86 F7 65 53 23 FB 09 18 C1 6D 3E | ....\..eS#....m>
81 0D 91 01 0C CB 7F 69 C8 8B B7 AF 35 5E CD 3C | .......i....5^.<
6D E0 C5 FA E9 39 D3 C4 5A 09 C6 32 70 EE 02 6F | m....9..Z..2p..o
56 BD 05 DD B1 0A 96 8F 3B 2B 59 37 5F B2 79 9E | V.......;+Y7_.y.
92 0C 47 9A 4E F6 31 E3 FF 06 A7 DF 0D 51 1E A8 | ..G.N.1......Q..
B6 1F 38 BB C2 4B D3 C7 97 60 91 E1 87 94 27 72 | ..8..K...`....'r
0D 0B A1 24 F3 3A EC 7F 95 7A C5 89 AC 30 D0 5E | ...$.:...z...0.^
69 F9 31 9C 4A F9 82 C9 4A 0F DF AA 4D 96 FD 6E | i.1.J...J...M..n
01 EA F0 95 1C 9E 92 B2 05 E4 50 30 32 82 AC F6 | ..........P02...
E7 2C 0C 0D 71 FD 88 E2 F4 03 E5 98 F3 A8 6E 7F | .,..q.........n.
AA B2 9B 97 84 D4 06 17 A6 72 D5 E1 0A 68 AE 2F | .........r...h./
92 22 65 9E FB 07 E0 BC B8 B8 A3 29 AE 3B 8F BB | ."e........).;..
94 53 24 59 8D 30 6A 89 06 43 11 CF 43 D6 C0 BD | .S$Y.0j..C..C...
13 71 8A 7C 1E E3 0D ED F0 B8 EF F5 D1 F7 0A DA | .q.|............
C1 DE 1A 79 BF 45 EF 4C 33 87 FA E0 00 71 25 F0 | ...y.E.L3....q%.
42 DE 17 39 0D 4F 78 8B 81 B4 F6 65 ED 59 CC D3 | B..9.Ox....e.Y..
55 E0 A5 2A B0 D5 85 40 E8 7E 7C B6 2E B9 8A 8C | U..*...@.~|.....
CD 60 27 7E BF 61 E8 E7 06 9C B4 C0 1E 16 19 DB | .`'~.a..........
4C 83 CA 2E 9E 72 A4 BA 24 1B 0E 23 62 56 A2 56 | L....r..$..#bV.V
33 04 3B 1D 76 7A BA 2A 8A 7F 0C 3B 11 0F 31 53 | 3.;.vz.*...;..1S
56 10 BA 9A 5E 8D 68 66 20 11 E5 E8 9A D4 B2 A8 | V...^.hf .......
32 CA B6 74 5E EC 91 54 75 DA 03 73 FA 43 77 CB | 2..t^..Tu..s.Cw.
F0 D9 B5 83 23 FF 65 52 31 C3 A8 56 4D 7C 9B D5 | ....#.eR1..VM|..
F5 93 7F 2A 5D 95 2F C3 3C 5E DA 73 E8 78 F4 84 | ...*]./.<^.s.x..
31 FA F8 ED 22 9C 48 30 94 D5 9F 06 F4 DD 53 4F | 1...".H0......SO
01 E0 BC 64 06 CF C6 3E BA A0 C4 D2 A2 BF 7A BF | ...d...>......z.
E9 57 A7 A0 56 59 E1 B6 1B 31 BD 18 9A 51 41 E9 | .W..VY...1...QA.
E6 BD DD BC 0B 27 4B 72 53 39 7E CB 1F F5 AB EE | .....'KrS9~.....
40 29 A6 82 17 BC 98 37 72 26 31 E9 60 B9 31 15 | @).....7r&1.`.1.
74 45 D4 42 02 74 AF C7 E4 9A C7 89 28 37 DF 4B | tE.B.t......(7.K
97 A9 26 EA 52 60 3A D1 4A 28 FF 89 2B 72 73 7B | ..&.R`:.J(..+rs{
5B 36 07 29 BB C4 D9 6B 52 27 DA 93 26 46 E6 C4 | [6.)...kR'..&F..

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
96 86 EF 0D 16 33 A7 2C 62 B2 A5 14 E5 F1 F7 E2 | .....3.,b.......
C6 AD 9B 7A 42 5C 2E CA 27 65 DA 23 CD D4 FD DD | ...zB\..'e.#....
4C 84 4A 0B 16 B9 41 94 0D 38 48 E0 90 46 3F 36 | L.J...A..8H..F?6
6C A0 9B 05 34 0B EF 81 67 B1 FB 3E F5 DC 39 97 | l...4...g..>..9.
29 58 08 B1 EC 66 77 03 92 03 BF F1 5A 50 63 AC | )X...fw.....ZPc.
25 9C C2 BF 12 BB 66 70 8C B3 88 0F DD D4 FD EC | %.....fp........
8B 97 EC 70 3E FF 3D 3F 54 B0 7A 85 8E 6E 6F C8 | ...p>.=?T.z..no.
BF 24 B8 7F B0 48 71 0E EE DC D3 44 8E 3D 25 DD | .$...Hq....D.=%.
C4 7C 5A C8 A4 4B 9D 6B D8 46 18 E5 70 0E 22 DF | .|Z..K.k.F..p.".
84 34 FD 93 B9 DF 2D E0 A9 F3 A6 53 88 40 38 0A | .4....-....S.@8.
B1 81 4A DF 7F B3 D6 AB 7E 1E 62 1F 91 A3 78 78 | ..J.....~.b...xx
BA 25 83 37 31 52 FF F7 09 E7 17 55 0F 75 A8 A0 | .%.71R.....U.u..
D6 66 16 CF E5 AE 01 65 A6 B1 8E 8C 40 B7 5B 86 | .f.....e....@.[.
25 48 A4 29 8E C4 6E 35 E9 E5 1C C5 F2 87 03 42 | %H.)..n5.......B
0D FA 3C 59 5E DC DE 11 C8 05 F3 0D 01 2C D2 D7 | ..<Y^........,..
46 3C 30 CE B1 BC D3 1F 2E 66 FD 43 FB 39 E3 F3 | F<0......f.C.9..
AC FC 28 1C E9 B5 2E 6E EB 45 96 55 58 29 1E 58 | ..(....n.E.UX).X
92 D4 91 3F 76 AC 5F 8F 69 92 DC C9 78 3D E3 DF | ...?v._.i...x=..
77 5F 5B 7A C0 D4 79 B9 1C 9F 3B 37 14 83 A9 7A | w_[z..y...;7...z
02 25 35 BB 4A 59 DF 20 5C E0 AD 79 8B 9D 7E 9F | .%5.JY. \..y..~.
83 D8 1F 5F 84 CC 96 8A 80 F3 8B 40 11 90 71 BC | ..._.......@..q.
CF 40 76 C0 8F B6 DA EF CE BD 7B AF 52 C3 00 6B | .@v.......{.R..k
68 EF 58 2E E3 E9 C3 7F 40 2A 5B 78 52 F9 75 0C | h.X.....@*[xR.u.
36 C7 F2 C5 A2 E1 4E 93 46 65 1A 49 D4 7D CC CA | 6.....N.Fe.I.}..
0C E2 8B E1 DD AF E1 0E 1C B0 E3 DD 8E 27 3F 97 | .............'?.
FB D7 5D 1B 78 B0 7D 2E 0B 22 10 35 C2 47 DA 8A | ..].x.}..".5.G..
80 E9 99 A9 CC 7C 9B 6C 7F 63 9B 4B 8D 04 83 47 | .....|.l.c.K...G
8D F3 E4 86 76 37 93 9A B3 A1 4F AB 32 66 F2 72 | ....v7....O.2f.r
BC A3 AA 8C 04 D9 93 05 86 0F 18 43 F9 92 58 F1 | ...........C..X.
8D 9E 1A 1E 17 95 C0 18 EB 4B 47 08 B7 EB FB 1B | .........KG.....
79 C8 B0 FA 5B 88 0E 5C A3 82 5D 5B E4 FC 28 5B | y...[..\..][..([
ED E3 95 85 C2 26 E5 60 D7 06 92 05 88 B8 F6 EA | .....&.`........
76 BE EF 8F 17 03 03 00 40 E0 59 0C F6 F2 02 33 | v.......@.Y....3
E6 23 E9 DB E1 79 83 3C 42 25 9C FE D0 8F 30 FC | .#...y.<B%....0.
68 AA 4D C9 1D 70 90 64 46 3D 7E 43 85 1A E5 BC | h.M..p.dF=~C....
F0 8F 12 AB 87 AE 03 29 AD BD EA 85 F5 A2 26 09 | .......)......&.
32 33 25 91 8E 70 C3 E8 D1 17 03 03 00 40 E7 83 | 23%..p.......@..
F3 E5 AA 72 E0 0A 48 6D 55 19 40 D6 A2 74 54 CB | ...r..HmU.@..tT.
B5 F2 93 42 4F 60 62 11 99 34 96 93 B4 7E 11 51 | ...BO`b..4...~.Q
91 CC E5 5E A7 C5 AC 92 C7 AF 47 F0 37 9E 3D A2 | ...^......G.7.=.
FB 08 CA FF 70 16 3D 5E D7 31 BE 7D F2 40 17 03 | ....p.=^.1.}.@..
03 1C 60 04 08 DA C0 D6 28 85 BD 00 BB 7E CC 17 | ..`.....(....~..
CA 46 09 E6 46 93 08 B5 33 54 D7 A7 5B 8C D6 A9 | .F..F...3T..[...
36 27 B8 C3 0E 46 6E 0A 9F 41 AA 23 99 4E 77 24 | 6'...Fn..A.#.Nw$
D4 A4 B5 FB 95 63 3C 9E 26 A7 6A 2F 97 64 7A 71 | .....c<.&.j/.dzq
3B 18 66 8F 74 7E 16 3B A6 57 18 15 FB 08 C4 8B | ;.f.t~.;.W......
19 89 18 03 02 F6 18 81 48 4F 4A 03 23 1F 2B 70 | ........HOJ.#.+p
6A 2F 43 7A F3 BA 11 09 0C 9A D5 1D 52 53 0C A0 | j/Cz........RS..
24 AD 35 AC CA 2D E0 37 31 DE 1D 23 86 28 90 EF | $.5..-.71..#.(..
94 54 86 48 F6 F0 73 56 C4 49 F8 57 83 B5 62 F9 | .T.H..sV.I.W..b.
12 70 C7 7A 84 A6 4A A4 7F 91 F2 E9 32 A4 4A 1A | .p.z..J.....2.J.
A7 F8 8B 20 16 6F 16 11 F4 10 16 80 AF 2E 46 CD | ... .o........F.
D7 83 4B D3 A3 A3 DE 7C 38 0A 39 BF 85 52 25 D9 | ..K....|8.9..R%.
65 25 D7 02 5D 9F 6D 47 D7 1A A7 FE E0 F6 FF 51 | e%..].mG.......Q
ED 40 F5 FB FE 2D 63 9B F7 D0 3B B1 95 74 9C 5C | .@...-c...;..t.\
1A 27 D8 20 17 F7 4D 41 8D F2 F0 DF AE D7 84 2C | .'. ..MA.......,
AD 92 A0 9B 27 DB 39 3E 7D B7 86 1E A5 BA 57 7B | ....'.9>}.....W{
23 0D 0B 67 1B 8E A4 CA 8A EB EE 4E B7 2E 24 BE | #..g.......N..$.
11 5D B6 ED 26 09 86 6E 50 27 28 0B 1A E4 34 17 | .]..&..nP'(...4.
85 CB 45 C8 86 C8 D2 7E E8 F4 CE 3A A6 24 C9 6A | ..E....~...:.$.j
C9 8A 5D 24 07 AF D9 6E A6 21 24 6E 2C 2B D0 4F | ..]$...n.!$n,+.O
49 3B 72 B1 D0 10 11 E4 0C 67 F0 CC B8 E5 BB BD | I;r......g......
09 EF 0E 1F 70 4B 35 F4 BD 03 23 7C 4E 1A 63 9F | ....pK5...#|N.c.
6D F9 A3 ED B7 4B E0 3E EE 22 CC 2C C5 2D 22 FF | m....K.>.".,.-".
14 D2 A7 58 85 0A 06 B8 F4 A5 CC A8 34 6C D8 98 | ...X........4l..
5C 35 83 8A 76 60 D8 24 75 43 D0 EB A7 F5 AB EF | \5..v`.$uC......
C9 7C 19 02 9E 35 88 2E 22 B5 58 4F B0 A5 C0 51 | .|...5..".XO...Q
23 C5 62 F8 A4 07 37 02 73 0B 95 8F 3D 28 71 14 | #.b...7.s...=(q.
8C F8 AD 94 0F 15 3F C3 A6 F8 B4 22 D9 F9 AB 1D | ......?...."....
C6 08 64 21 E5 1D E8 C2 B6 80 8F 26 54 3D A8 B0 | ..d!.......&T=..
AA 59 3F 4D DD 03 9F DB 50 F8 A1 AD 82 BA 55 5C | .Y?M....P.....U\
A2 4F 32 82 B2 4B E7 82 89 E1 A2 01 29 83 03 47 | .O2..K......)..G
6F 1B 46 94 20 66 39 FB 97 9F 9A DC 12 76 CF 67 | o.F. f9......v.g
3E D8 78 D3 0D 06 16 DF 5A DA 46 2F 89 8E 13 A8 | >.x.....Z.F/....
16 77 E8 DE 58 3B F4 7C 18 D1 71 2F 24 75 69 9C | .w..X;.|..q/$ui.
C8 EE 8A 0D C6 37 3F 77 35 9B 3E 23 BF D5 69 07 | .....7?w5.>#..i.
CC A9 02 C5 64 5B 05 88 7F 6C 33 98 3D 9B 62 0F | ....d[...l3.=.b.
23 EE E4 55 F3 59 DA C8 A3 FF 9D 53 7E 36 E8 D5 | #..U.Y.....S~6..
53 24 86 F9 61 A2 E5 B7 80 FC F2 8E 12 85 50 CB | S$..a.........P.
B5 BB D5 9F F6 15 58 5E 9D 3C C8 32 EF A2 C9 3A | ......X^.<.2...:
22 5B C6 72 EA B0 0D 76 D8 F1 53 BB F9 44 0A 41 | "[.r...v..S..D.A
ED 6F 1F CB 20 89 2E BC FF 63 D5 6D 23 AB A1 2A | .o.. ....c.m#..*
60 A1 F5 5A 34 94 6A 85 6D B8 A6 7F AC 8A 78 10 | `..Z4.j.m.....x.
63 76 D6 21 8A 55 E1 E0 43 02 72 4C BD EF 81 83 | cv.!.U..C.rL....
6F 1B C7 FE 17 D9 C2 B0 78 E7 E3 DB D6 29 00 95 | o.......x....)..
F7 3B 3F EC 0A EA 60 B8 3C 2F 85 0D 7A 8B 56 BC | .;?...`.</..z.V.
46 5A 91 69 14 50 87 CA DE 3A C3 C8 C9 E6 03 48 | FZ.i.P...:.....H
46 F2 A5 69 19 48 82 9F 37 91 DB 01 AF 5E FB 7D | F..i.H..7....^.}
EF 67 A5 95 CE CC 5E 8A 65 CB 0A 31 F5 77 FF 7D | .g....^.e..1.w.}
88 53 62 47 46 C0 C3 32 EB FF AB D1 23 3F 07 7D | .SbGF..2....#?.}

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
31 75 B1 E1 05 C1 BE 53 6D 95 79 18 EB 89 9E 74 | 1u.....Sm.y....t
C4 5A EA 49 AB 2F AD B7 FC 8D 30 9E 9B 90 51 52 | .Z.I./....0...QR
BA 2F B0 6A 0C 3C 21 77 4D F8 C3 CE 13 53 DA B3 | ./.j.<!wM....S..
E5 98 C3 48 C0 13 81 BF 16 73 7E FF F2 25 C7 18 | ...H.....s~..%..
7F 63 E3 BF 6F 26 8A AE CA E6 8E F5 F8 F9 C3 A7 | .c..o&..........
32 3F C3 A7 61 46 46 14 A3 2A F2 E4 64 5E A5 94 | 2?..aFF..*..d^..
15 57 34 7F 3D B7 C8 91 D3 D0 B9 9C BE 6D C7 FA | .W4.=........m..
D9 A4 C7 9D 8B C2 D8 44 F7 72 BE 9E 01 89 42 1F | .......D.r....B.
82 3B AD 4E DB FD B1 74 63 C9 E6 E5 B8 4B CF CE | .;.N...tc....K..
EE 02 27 A4 03 2F 81 E6 C5 06 EF 25 A5 29 50 B9 | ..'../.....%.)P.
54 C3 E1 F9 54 1B 53 54 60 05 56 97 D5 BF 8B 8C | T...T.ST`.V.....
EA 0B 63 43 FC 28 32 CC 83 DA 02 5D BD D5 0E 6D | ..cC.(2....]...m
CB FF 3F 76 BD 42 25 41 0D 54 04 87 D6 55 A7 5D | ..?v.B%A.T...U.]
15 00 E1 41 81 93 D3 57 BB 6E BF CD A2 8E 8B 42 | ...A...W.n.....B
5A EF AA 7C 39 D3 8F 56 BF 78 CE 68 10 41 70 6D | Z..|9..V.x.h.Apm
40 A6 CA 83 3D C4 5C F4 8E 6F DB 69 15 F4 92 0B | @...=.\..o.i....
BF 10 51 49 95 0B A1 8E 59 83 66 4D 61 9F 0D A7 | ..QI....Y.fMa...
02 D8 78 5C 69 6D BD 3A 76 03 3F D8 A1 99 53 D0 | ..x\im.:v.?...S.
1F 22 DD 6A E1 F3 4A 35 8E 85 C7 C4 CA 92 91 5E | .".j..J5.......^
F5 EF A3 BF EE 48 66 A1 6C E4 BA 81 2F 70 9C EE | .....Hf.l.../p..
56 B7 FA C4 9C 8E 70 FA 4B B4 DB 48 A2 C5 80 31 | V.....p.K..H...1
39 6C 99 93 0B FC 62 7D F0 63 43 2F 32 5E 75 2E | 9l....b}.cC/2^u.
3C 17 03 E8 D4 B3 9E DE C9 59 60 5F B1 FF 94 87 | <........Y`_....
44 7F 5C D0 82 B4 62 5F E1 7F 6E BD F7 E8 40 29 | D.\...b_..n...@)
30 5E E5 EC AE DF FB 38 C3 83 74 B6 C9 50 98 BD | 0^.....8..t..P..
28 40 E6 F7 14 74 0F C3 B6 D0 24 7C A1 6A 1D 16 | (@...t....$|.j..
1C 36 01 7B 1A 53 C4 7E 02 70 34 62 58 11 9F B4 | .6.{.S.~.p4bX...
72 ED 2F 8B A0 E0 D1 00 44 B7 60 1F 75 01 D9 ED | r./.....D.`.u...
71 72 38 72 D1 51 86 45 0F D0 F8 A1 78 42 6E AE | qr8r.Q.E....xBn.
8B 17 EA 61 15 B3 AA 34 77 FA AF C2 90 E9 AD 57 | ...a...4w......W
D1 7C 02 07 2B 69 F4 C2 85 0B D7 87 07 78 9A 46 | .|..+i.......x.F
EC CE 39 DB 6F 3C 6B EB 41 75 34 01 E2 D9 D9 C0 | ..9.o<k.Au4.....
5C 85 6F BE 3E 76 0C 1A 52 1D 2E B4 87 0A 75 E8 | \.o.>v..R.....u.
99 90 9F A7 6B 6E E2 91 14 FE 46 C4 F5 A3 1E 98 | ....kn....F.....
1C FF 7E BE 0B CB D9 FB 26 44 24 A5 09 76 48 0C | ..~.....&D$..vH.
1C 5E 6C 4F BA D3 0D 47 3E 71 CB 05 30 EA 1A 40 | .^lO...G>q..0..@
DF 25 90 82 6E 1E FF B5 C4 B4 0A E7 C5 42 76 E7 | .%..n........Bv.
29 FE 4B 2C 98 C8 26 2C 86 4F A6 6F 40 39 5C 9A | ).K,..&,.O.o@9\.
08 B0 EA BD 7B 6F 51 CB E7 64 01 76 01 C8 B1 7F | ....{oQ..d.v....
DC AD 9F 39 76 30 30 94 E6 F9 91 1E 61 24 F9 43 | ...9v00.....a$.C
74 DF 2A 14 C7 1B 2C FB 71 23 98 F9 4A FA 84 39 | t.*...,.q#..J..9
E0 59 92 2B 89 3C 5E 52 98 7F FA 29 12 90 20 8C | .Y.+.<^R...).. .
38 05 34 85 74 EE 5D F0 E7 6B A0 1E B6 95 59 9F | 8.4.t.]..k....Y.
8C 88 FF 85 B2 28 93 73 BB 8E 07 9E 64 20 B3 D6 | .....(.s....d ..
7C 54 19 63 27 72 4C 60 34 3A 46 03 93 B8 33 24 | |T.c'rL`4:F...3$
5A 33 E4 36 D2 17 EA 6C BD D7 4B 6E 14 39 50 2F | Z3.6...l..Kn.9P/
3D 47 04 9B FC 4B D0 2E F5 1E 24 6F 83 8B 74 10 | =G...K....$o..t.
8D A7 F0 C2 7A A1 B1 33 87 69 5C 65 46 FE CB BC | ....z..3.i\eF...
3B 84 F0 57 68 31 DC ED 47 ED 49 0F DD A5 84 B4 | ;..Wh1..G.I.....
F7 A0 3A 33 15 90 B4 A4 C4 79 A8 DA A7 69 E5 7B | ..:3.....y...i.{
97 C7 56 85 0A 18 26 6D 46 DA 21 69 8E 55 1F 4E | ..V...&mF.!i.U.N
B1 D7 62 96 67 AC 11 8D 84 98 1B 17 63 95 3B 48 | ..b.g.......c.;H
68 F2 AB 9B AE 9A 7D 0B E1 ED 7C 35 95 D9 80 B7 | h.....}...|5....
AD 39 9C BF 9A 8C 4A 98 C1 81 0C 06 E2 A5 69 C9 | .9....J.......i.
E1 C9 67 58 6E 96 F0 91 B0 34 DD D4 75 AB 5E 84 | ..gXn....4..u.^.
9D C5 64 11 6F 3F 49 F5 92 25 2D 91 50 A9 32 6B | ..d.o?I..%-.P.2k
46 9A A8 C4 6A E6 E1 A8 B0 4C B0 56 F0 DE 78 46 | F...j....L.V..xF
0D 9B 5E 59 A6 8E 0A 51 F4 C8 BE AF 86 FC EF 93 | ..^Y...Q........
99 87 01 FE 95 03 45 E7 E8 09 55 83 00 C4 18 F4 | ......E...U.....
42 86 D0 B6 E9 C9 E4 E8 CF FF 0E B3 39 9E C7 9A | B...........9...
31 34 1D 3D B8 3E 42 E4 E5 86 D4 3A E6 72 85 3B | 14.=.>B....:.r.;
8A 20 22 1C E5 ED 32 06 E2 95 FB 8F 34 AB B2 73 | . "...2.....4..s
65 57 D6 20 CC 6F 53 AB B9 EC 75 FE A6 3C C5 1D | eW. .oS...u..<..
36 8C 32 0F E8 DA A7 54 75 D9 3D CE EE 03 E0 27 | 6.2....Tu.=....'
9F 18 F7 38 15 C8 6C 40 F5 A4 A4 CC 78 18 35 00 | ...8..l@....x.5.
74 18 1E 02 BB 61 62 F6 43 AC 45 A5 E1 F0 D5 1E | t....ab.C.E.....
E3 29 9B F5 1C 61 50 D5 6E EA 4E 5C EE 0E 99 58 | .)...aP.n.N\...X
4B 5D BF 55 7D 60 C6 B2 00 99 09 8E F7 EE 5C 20 | K].U}`........\ 
7E 26 E8 81 36 1B 4C 20 39 D2 FA CE 0D 60 92 24 | ~&..6.L 9....`.$
01 8A 11 7E 69 69 8B A5 E1 E0 A6 94 44 AA 76 EA | ...~ii......D.v.
4E 88 7C 74 5F 3C 1A 9B 8D C4 CE A4 47 8D 3E A5 | N.|t_<......G.>.
82 43 95 53 93 23 D0 91 58 DE 3A 24 3F 0E 80 7D | .C.S.#..X.:$?..}
C9 50 98 E6 DA 0C 7B C5 22 F4 1C 9D 38 E6 0D 9E | .P....{."...8...
81 D5 0F 65 B3 39 EA A3 16 C1 B7 17 0A 32 86 BF | ...e.9.......2..
63 19 AB 6C 06 57 53 9A E9 11 E9 B1 CD AB 87 68 | c..l.WS........h
1B 42 0B 07 E8 A5 D1 49 88 F0 E8 93 82 B8 53 0F | .B.....I......S.
45 E7 84 B3 4B 61 15 82 AE 5F CE A5 9B 07 37 5D | E...Ka..._....7]
83 D8 C0 75 67 13 85 32 B8 6A 3E B5 42 28 0E 02 | ...ug..2.j>.B(..
63 7D 13 89 FB B5 16 8F EC CD B0 D3 63 12 38 65 | c}..........c.8e
84 13 5B 88 CD 00 73 78 1E F9 E5 31 69 F0 E3 E5 | ..[...sx...1i...
36 11 35 4E D2 87 65 8A F7 51 2C FB 07 9A 3D 09 | 6.5N..e..Q,...=.
4A 0A CC 03 06 E6 16 81 8A E4 FA 82 D6 AA 7B 99 | J.............{.
F9 83 D1 29 72 FA 6E 4A 65 9A 81 E6 ED 1A DC 19 | ...)r.nJe.......
E6 EF 5A 0B 6F CD B3 2F D1 00 EF 6D AB E3 49 49 | ..Z.o../...m..II
C0 C5 74 23 F0 01 2F FB A5 DA 42 DA 57 BF 5F 40 | ..t#../...B.W._@
D4 64 F3 66 C0 BA E6 32 83 F7 C2 17 E7 68 BA 3A | .d.f...2.....h.:
83 9C 1B 74 1B DA 5E D9 7E 26 0C 9B 1B 1D 47 04 | ...t..^.~&....G.
27 CC AB 9F 6C D4 2E B1 51 18 9D 52 1B 5F AD FE | '...l...Q..R._..
81 B6 B9 7D EB E2 52 20 8F E4 71 2B F8 BC 4B B6 | ...}..R ..q+..K.
9D 4B 78 77 07 25 8B C1 11 8D AD 28 22 AB 1E C0 | .Kxw.%.....("...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
F3 5E 42 98 A8 95 42 F6 BE 8D 6C AD FB 54 D2 24 | .^B...B...l..T.$
42 35 09 C0 5A CE 89 E9 C1 08 E3 E1 4B E0 E3 1D | B5..Z.......K...
9C 75 C5 CD AF 79 3D DD AD E3 4B 1C 42 56 45 52 | .u...y=...K.BVER
4B B9 D5 63 E6 0E CF 1F B3 A3 95 D3 22 B9 37 78 | K..c........".7x
2A 3B 2B E4 7C 29 45 86 28 EA D7 E5 C1 8D 69 67 | *;+.|)E.(.....ig
47 54 AB 15 58 F6 88 76 68 37 69 4E 9B 84 35 95 | GT..X..vh7iN..5.
87 F0 5B 9C 17 75 35 68 A6 A0 AA E3 4D A0 F9 D4 | ..[..u5h....M...
5E F7 FC 2A 4D 20 36 4B 58 C5 F9 C2 F0 47 5E 36 | ^..*M 6KX....G^6
40 5F F7 F9 A5 95 73 A2 F8 CD 44 02 DA F2 0D 7C | @_....s...D....|
69 79 7E 91 74 6C F2 72 05 7E A3 28 90 18 5A 28 | iy~.tl.r.~.(..Z(
30 8F 47 45 92 37 8E D7 8A 0D 8E 0F 53 D1 05 40 | 0.GE.7......S..@
4F C6 50 43 C3 1E CF D0 7B 6A 47 7F DD FC 47 98 | O.PC....{jG...G.
B6 3A C9 1F 8A 9F 22 E3 27 B2 27 48 B7 A9 BA E3 | .:....".'.'H....
76 EB 58 9A ED 32 45 D8 1D 1C 5D 57 22 64 C7 DF | v.X..2E...]W"d..
55 25 68 CE D1 DF 30 96 0C 91 9A 58 84 2D 05 95 | U%h...0....X.-..
36 05 7F C5 95 4B 57 A7 78 02 55 DE FC A2 BF 8A | 6....KW.x.U.....
DB DF 73 C9 A9 3E CD E1 D0 0A C0 7D 4A BF 36 FB | ..s..>.....}J.6.
E0 2E BE AD 42 91 91 54 72 23 43 59 AC 6C 41 7A | ....B..Tr#CY.lAz
D4 32 D8 EE AA 52 48 67 CC B8 39 A4 78 EE A8 07 | .2...RHg..9.x...
6F B6 5E F7 28 A0 F4 32 92 CA 34 51 68 91 73 72 | o.^.(..2..4Qh.sr
DF 25 F4 1D E0 A6 66 DD 8F 76 15 C1 22 6E 7B 84 | .%....f..v.."n{.
87 95 AA C1 99 6A DE 80 6E 15 04 EB 97 7D 92 99 | .....j..n....}..
82 C3 94 AE 15 E2 8A 47 75 07 53 9B A6 20 EA 17 | .......Gu.S.. ..
D7 3F 28 00 9F B4 93 58 2F 5F 05 5B AA C9 E6 23 | .?(....X/_.[...#
B2 A2 F4 90 3B B5 23 90 56 9B F0 46 46 94 58 53 | ....;.#.V..FF.XS
C0 17 8B 91 2E 24 E7 0E D0 EF 56 7C 8F BA 65 BC | .....$....V|..e.
53 AD E8 89 E3 43 C6 02 49 A5 25 B6 97 2F A6 E2 | S....C..I.%../..
AC E0 32 23 E0 F0 3F 18 20 0D F2 6D AF B6 A8 25 | ..2#..?. ..m...%
C4 54 F2 50 15 A6 B5 AB 0B 23 81 6C 13 69 18 31 | .T.P.....#.l.i.1
4D 83 38 B3 EF 53 EC 80 6C 2F 44 61 93 EF ED 1C | M.8..S..l/Da....
45 CC B4 21 1A 20 F5 09 7D 9D 0D BB D2 E5 AB 31 | E..!. ..}......1
D3 A9 B8 B9 D4 37 B3 44 86 BF 42 E5 D5 37 CD F9 | .....7.D..B..7..
5F 96 B5 8D 43 8C FA 2C 06 65 E4 55 50 7F C7 B8 | _...C..,.e.UP...
6B B2 F9 3A DE D0 A9 B6 1F 36 DA CE EE 12 0A 33 | k..:.....6.....3
7D 48 82 07 A1 23 D3 C3 13 E0 46 A5 B2 E7 EB D7 | }H...#....F.....
3A 54 71 B3 BE 4E 1F 07 40 C9 24 7B A5 18 36 93 | :Tq..N..@.${..6.
A3 E2 0A D3 B4 A5 DA 85 85 ED 26 11 40 7A 4E 17 | ..........&.@zN.
F0 22 1F EF 71 11 0B 26 55 85 60 8B 11 DD DA F5 | ."..q..&U.`.....
F5 9D C5 8A BA 1A 55 6F 00 8C 9D 6E B7 77 45 D4 | ......Uo...n.wE.
3D AA E5 F1 E5 F8 F9 43 88 FB D3 1C A4 5E FF CA | =......C.....^..
C9 8D 3E F7 65 4C FE 61 BA BD ED EF A9 25 D0 AA | ..>.eL.a.....%..
75 B4 D9 5C 69 B0 03 F3 6F E6 B0 8F 7D C0 1B F7 | u..\i...o...}...
E8 BF A0 9F 96 B7 91 F2 BB 01 AC 9A 24 89 F3 E5 | ............$...
49 D6 37 A8 BB 0C E5 13 51 4C 80 A5 AB F7 9D 8D | I.7.....QL......
FC 13 A5 6C D4 1C 33 28 18 7D 0F E0 52 90 44 EB | ...l..3(.}..R.D.
17 6E A9 5B 59 5C 02 0F 24 B7 70 BC 48 CD 0D FE | .n.[Y\..$.p.H...
1C 6D 1B 7B 8A 1E 00 63 05 26 AD 19 23 55 B2 53 | .m.{...c.&..#U.S
04 10 33 09 9F 64 D5 B1 40 96 A5 BD 7E 5D 04 86 | ..3..d..@...~]..
45 D1 1C 40 C0 10 35 BF C8 62 E8 B8 87 31 04 C7 | E..@..5..b...1..
05 51 28 20 15 07 F6 69 0D 47 B2 18 64 90 7F 0D | .Q( ...i.G..d...
46 D1 19 7F 62 D2 57 C9 D9 67 6F A9 03 F8 B7 60 | F...b.W..go....`
1E 8F BC 65 8C 6E 98 1D 28 F4 15 2D 73 CF 2B B6 | ...e.n..(..-s.+.
12 2E F8 6E E6 BD C4 5B EB C9 98 DC 88 B4 7A D2 | ...n...[......z.
D4 2B 59 42 9B BE E6 93 9F AF 05 CB 87 2D B4 26 | .+YB.........-.&
59 D4 51 DD 4C FD 1D 8C 39 05 A0 4C 61 E6 34 80 | Y.Q.L...9..La.4.
79 89 E1 86 51 DA 07 1B 45 B1 CD 35 62 1E 90 8A | y...Q...E..5b...
9E 76 81 89 70 84 3F 5F D3 BE DE C2 77 66 85 A5 | .v..p.?_....wf..
B5 04 09 A2 32 A9 54 93 6C AB EA 50 8B 9A 26 EC | ....2.T.l..P..&.
00 34 96 60 E5 26 AF 24 72 5B 2E BE E8 33 A5 78 | .4.`.&.$r[...3.x
67 FC 37 13 11 CA 4D B2 BF F9 50 DF D6 47 43 68 | g.7...M...P..GCh
83 D4 FA 20 57 CA E0 9D 64 0D 8D 07 B2 D2 8F 82 | ... W...d.......
B0 34 3E 8D E1 01 7C 49 87 7E BC A8 91 57 90 7F | .4>...|I.~...W..
D1 D3 B9 C1 6B EA 0B 16 16 29 38 CB DB 24 1F AD | ....k....)8..$..
28 95 F0 A1 53 82 4E BE E7 00 B5 8F 4A B7 20 69 | (...S.N.....J. i
B0 64 EE 00 66 92 F2 B7 A3 79 99 A5 8C 4D 01 90 | .d..f....y...M..
BB C1 1B 37 09 34 09 32 14 62 7B C6 A2 64 5A A3 | ...7.4.2.b{..dZ.
DB AC 14 7A 18 92 3F 29 07 97 B4 C6 2C AC 45 5A | ...z..?)....,.EZ
ED 28 F5 1F 3D 07 11 69 46 17 EB DC 85 09 86 29 | .(..=..iF......)
D7 7D B5 5E 66 32 AF 95 67 C8 40 E3 55 90 3F 7D | .}.^f2..g.@.U.?}
2E 85 57 35 B5 9A 6F 8E 18 E3 3C 64 74 82 44 54 | ..W5..o...<dt.DT
48 80 37 26 FC D0 55 EE 17 2D E5 14 87 C4 BF 39 | H.7&..U..-.....9
18 59 B8 3E 08 FA CC D8 6C 61 F2 0B BB F2 7B 40 | .Y.>....la....{@
8B FD 7B 00 C9 96 C1 AE BF 72 BA 91 5D 58 6C 43 | ..{......r..]XlC
41 00 E9 6D EC 7C 8E 88 92 26 4F FB 3E 83 13 D6 | A..m.|...&O.>...
77 0E 72 3D 9A 9C 59 56 D3 D5 B9 00 D7 B5 CB FA | w.r=..YV........
3B 81 E3 98 86 E8 2F F1 11 AA 41 A1 7F 4A E3 5C | ;...../...A..J.\
66 FC 42 FD DB B9 77 76 8B 2B C7 D4 02 8E 2F 43 | f.B...wv.+..../C
B5 CE 8E CA 02 AC D0 AE 05 2B 16 9D 0B 5E 99 B7 | .........+...^..
6F 02 DB 35 B6 C9 3C 10 8E 0D AC FC B8 3D BA 47 | o..5..<......=.G
AD D3 3C FD 9B 80 80 DD CD ED 05 5E D3 16 D1 90 | ..<........^....
DA 07 01 78 4A 6D 1F 03 7C 03 E1 D6 69 91 B5 98 | ...xJm..|...i...
B4 C0 5D 34 51 CF C1 EF 10 19 36 BF C2 57 D5 49 | ..]4Q.....6..W.I
78 A6 75 79 FC 3B DC 25 FE 2E 6B 40 C1 25 B4 76 | x.uy.;.%..k@.%.v
28 71 D1 15 46 25 07 DB 40 65 A4 38 22 BC 24 E5 | (q..F%..@e.8".$.
5D BB BD 49 9E 2B 20 D8 80 27 B3 4D F7 15 69 37 | ]..I.+ ..'.M..i7
C6 3B BD CF 56 51 D5 58 1B D9 DB EC 72 68 19 C6 | .;..VQ.X....rh..
5F C4 76 1C 0D 70 7D 50 13 A9 69 12 2A 49 FC D4 | _.v..p}P..i.*I..
EB 9A 5B D4 2B D1 5B 98 73 D7 F1 CA 93 8E C9 CA | ..[.+.[.s.......
93 65 C3 FB D5 33 EC 97 D4 67 08 CE D0 F3 3B 03 | .e...3...g....;.
C4 88 42 1B 04 13 90 8B 69 62 CF 29 38 4D A1 85 | ..B.....ib.)8M..

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
94 4A 7A 3C A3 EE 60 53 C7 B4 EC 26 71 06 9B 93 | .Jz<..`S...&q...
7F F5 10 C2 88 D4 6C 27 FC E0 5C 63 3D B2 10 87 | ......l'..\c=...
F6 74 2F A4 79 37 94 74 A2 95 3B 50 C2 21 B5 9E | .t/.y7.t..;P.!..
78 1A AC 40 98 D6 5F 6D C0 8F C5 07 11 1A 87 DA | x..@.._m........
07 FE 9F 6C 59 50 68 86 C8 BD EC 99 B3 64 2B 17 | ...lYPh......d+.
2B 11 80 CD 04 96 BE DD 56 46 85 01 5E 0D C8 A9 | +.......VF..^...
75 34 0F 8B 84 21 DB 05 DA 5F BF 6E 41 8E 2C 75 | u4...!..._.nA.,u
1F 6E 9F 0B 3F F2 D3 4D 25 CD 74 CA 68 99 93 7D | .n..?..M%.t.h..}
6D C4 3F D0 5D 8C F3 BE 61 C1 C6 90 DB 8F 56 66 | m.?.]...a.....Vf
61 DF A8 01 EF A7 70 99 85 8D 60 F3 9D 18 05 34 | a.....p...`....4
34 B7 1D 85 C0 F3 C7 DC DE 78 B6 70 49 88 EC A8 | 4........x.pI...
0B 6B 65 62 06 39 58 1C D4 8F 4C 16 F3 22 BF 6E | .keb.9X...L..".n
2A 3E 6B 16 CD 26 2C D6 E2 E8 FD 46 AA 7F 3C 64 | *>k..&,....F..<d
77 43 1F 74 CE A2 D2 F1 7A E7 94 08 B8 C1 77 14 | wC.t....z.....w.
33 AD 5F 7C 2B 01 2E CF 36 18 66 57 60 22 93 96 | 3._|+...6.fW`"..
58 2C 5F 65 2F 26 C0 D7 43 AC D9 F2 C1 93 F9 EE | X,_e/&..C.......
4B 2B 06 C2 86 70 A2 06 EB C0 7B EA 94 17 AB DF | K+...p....{.....
7C 00 D4 67 10 64 61 9C FD D4 1D 9C 6D F7 41 10 | |..g.da.....m.A.
2B C7 D4 DA 60 DD 4B 41 A0 F7 0F BA 11 F4 DC 1E | +...`.KA........
97 3A 17 F6 4B 36 1F 80 A8 B8 F8 76 69 96 EC C4 | .:..K6.....vi...
1E 47 48 8A 13 E3 82 9E 3A 7B 72 7C 02 0E AF 97 | .GH.....:{r|....
E8 3D 4E 3D C3 99 A3 A7 7C B4 62 97 2F 1F A2 CF | .=N=....|.b./...
20 8A D5 97 DD 8B 7A 67 76 FA C3 84 8B 94 E2 88 |  .....zgv.......
66 93 4A 04 1B 61 E3 67 28 76 97 DB FF 6D 58 47 | f.J..a.g(v...mXG
CC 5A 77 28 C2 E9 77 11 E2 00 64 84 EF 01 FB 8F | .Zw(..w...d.....
28 7E 0F EC D1 42 1E 5E 95 76 20 C2 BB 14 DD 65 | (~...B.^.v ....e
19 B2 52 B2 9A CD 8B C3 7D CA CD 2F 21 C4 F5 4A | ..R.....}../!..J
88 73 D8 2B D0 00 A1 C1 50 FA 1F CD 97 C5 0F AB | .s.+....P.......
F7 0D D5 FA A9 03 80 6A C2 55 68 72 47 3C CE 2D | .......j.UhrG<.-
D1 74 7F A3 2C DB 96 A0 7F 73 5A D0 80 32 4D 4C | .t..,....sZ..2ML
14 FA 91 56 03 94 B3 BB 27 5B CE 93 BE E4 4B F0 | ...V....'[....K.
EF EC 4F 46 43 AC 8E 0F 2F C3 43 A1 F8 D6 DF 2C | ..OFC.../.C....,
56 25 4D 9D D7 74 97 1B 78 A8 5A 6A 76 18 27 4C | V%M..t..x.Zjv.'L
D6 AF AA 8D CE BB 92 B8 D2 28 E5 73 8E 01 06 DA | .........(.s....
6D 78 6F CE BD 4B 46 28 2C 96 18 E1 D4 9F 85 CE | mxo..KF(,.......
DF 9F 50 FF 4D 19 34 BC 7F FB DA 2F FE D9 9C 0F | ..P.M.4..../....
74 2D F5 35 3B 69 98 B4 61 80 C1 9B 97 9C 02 A9 | t-.5;i..a.......
21 04 4B DE 6F 2D 4A 1D B3 CB B0 43 CF 30 90 4D | !.K.o-J....C.0.M
D3 73 2D 52 56 E6 41 1C FC B7 EE 37 AB AF 1B 01 | .s-RV.A....7....
6F EE D6 F5 19 B8 87 D5 D7 FA 2E 24 60 E5 F0 2B | o..........$`..+
52 BA E2 16 54 11 10 4F E3 84 DF 03 82 66 DF BA | R...T..O.....f..
B4 9A 36 48 55 9C A4 1E A5 1A A1 B1 64 27 CC 82 | ..6HU.......d'..
F5 4E 20 A6 C0 BD F1 BF CC 27 EA A5 C6 9A F8 51 | .N ......'.....Q
99 11 70 10 FE 2C 41 F2 BD B8 B5 D0 3A BC 05 A7 | ..p..,A.....:...
EB 65 BA BA DB 2A 77 60 59 5E 99 7C DA 1E 36 09 | .e...*w`Y^.|..6.
D8 58 E5 43 8D F9 89 F5 6A CA 5F 31 29 A3 72 18 | .X.C....j._1).r.
10 0B 00 24 2F 12 3C B7 AD 32 EA 7D C9 A2 16 D6 | ...$/.<..2.}....
90 04 4A EB DB 81 A8 19 9A 47 7D 1D C5 E2 46 07 | ..J......G}...F.
45 5D C1 BD 44 C7 6F 60 02 2B E8 BB 9F 78 4E DB | E]..D.o`.+...xN.
98 A6 3A B3 25 90 10 13 67 56 58 87 C5 2C D0 AB | ..:.%...gVX..,..
71 BA ED 9B 6D DB A3 00 11 06 89 2D 44 3A 49 71 | q...m......-D:Iq
A3 00 6A B5 E0 02 C3 ED D0 46 92 97 CC EB 38 6C | ..j......F....8l
B7 E5 0D 59 D7 E0 4D 1A 28 13 22 77 E9 2F 6A F7 | ...Y..M.(."w./j.
C8 8A BF 14 EA 14 DE 83 70 53 FD 19 72 0F 54 AD | ........pS..r.T.
C3 35 03 6A 27 EA 7A 22 90 E6 9B 57 BD 42 D3 67 | .5.j'.z"...W.B.g
EE 3F F7 38 0F 34 66 86 69 06 B8 2F 40 EA 8B E4 | .?.8.4f.i../@...
C1 8B 66 CB DA 2A E7 93 18 F6 7A F0 8E 1E 86 4D | ..f..*....z....M
0C 63 63 50 3A 65 44 FA F0 F9 B4 7C 6B 30 0A 31 | .ccP:eD....|k0.1
7A 8E D1 9F 6E D3 BC B6 85 39 5C 18 00 B8 A7 F9 | z...n....9\.....
A8 B6 88 E1 0E E0 17 7E 61 EE BF E5 49 9B 18 7D | .......~a...I..}
D0 B0 B6 0B 65 FB FA F8 1B 7F 33 E4 AA 9D 46 40 | ....e.....3...F@
3A F6 5C 5B 70 4E B5 D5 DE D4 EC 3A 4A 28 61 81 | :.\[pN.....:J(a.
A4 B0 A4 A2 54 BC E6 61 CF AA 80 04 8D E3 88 EB | ....T..a........
73 AE 93 0B 87 E8 EF 9E 24 6D 58 A5 5E A8 75 02 | s.......$mX.^.u.
DD E3 ED 37 7D A6 1E B3 6C 85 36 B2 CE B1 8F A8 | ...7}...l.6.....
CD 66 0D 98 92 67 D6 FE AB 0A 81 6A 4A 54 FB BC | .f...g.....jJT..
D2 69 EC 08 DA 76 A6 05 14 B4 79 CB FC 27 F7 EB | .i...v....y..'..
22 95 E3 31 F0 3D EE 3B A3 5D 78 AE 0B AE F2 F4 | "..1.=.;.]x.....
6F 04 D7 39 D2 45 89 F6 6C 3E DD BF 1D 93 43 78 | o..9.E..l>....Cx
EB 56 C5 DC 6E 6A BA 8D 8D 35 F5 A4 E4 38 96 A2 | .V..nj...5...8..
F1 F1 AC FE 9C 66 0B A6 AA A4 EC FA A8 57 37 01 | .....f.......W7.
DF 42 04 38 6D 7B 7A F9 34 50 AC 8D CE A6 EE AE | .B.8m{z.4P......
B3 CE B6 CD 99 03 22 46 45 E5 FB 3F 5D 53 97 1B | ......"FE..?]S..
36 BA 68 7B B2 0F 4F 9A 25 BC 09 F3 B9 A6 50 8C | 6.h{..O.%.....P.
9C 69 E8 DA B7 70 39 A9 CD 1F 06 A7 B5 DD 6B F9 | .i...p9.......k.
2D 0C 86 5F 77 3E EE C9 4A 55 7B 6D 3C F4 0B 47 | -.._w>..JU{m<..G
A3 EA 4B 8F 98 85 91 E7 C7 B9 D2 BE 6E 70 E0 06 | ..K.........np..
5D 49 DD C2 7A EF A0 94 67 3B 09 65 52 B2 F9 7B | ]I..z...g;.eR..{
BD A8 06 00 99 27 C2 97 A6 55 34 6C 64 B0 F1 4E | .....'...U4ld..N
F2 EA 55 A7 49 0E CC 51 16 EB 86 5C 51 52 2A 9B | ..U.I..Q...\QR*.
AF FB FA 3E 79 3C BA 2A 3F C8 79 E9 59 88 35 9A | ...>y<.*?.y.Y.5.
89 E2 61 0F 11 1A 67 F2 51 D0 C7 3D 6C 2F A3 44 | ..a...g.Q..=l/.D
D0 5B E2 9E 78 89 AA 76 89 C8 64 00 7B BA 13 56 | .[..x..v..d.{..V
54 DA AB B5 77 E5 7B 92 FB 6B 07 77 28 81 84 0D | T...w.{..k.w(...
DC 06 06 A6 BD 15 13 CD 98 1F 6B 4E 11 79 65 1B | ..........kN.ye.
2A 3A 6D C0 25 17 91 C1 CD E5 C4 8E DD 2D 8F 66 | *:m.%........-.f
CA FF 22 AE 74 B1 56 22 FA AB 8D C1 40 B2 FD B1 | ..".t.V"....@...
44 FF 83 F4 54 FF 12 D2 A5 EA 0F 9D 99 2C AB 59 | D...T........,.Y
C5 77 D0 B5 9C 2B D4 6A BD 6A 61 03 9F 84 BA 44 | .w...+.j.ja....D
7C 12 67 58 C3 F1 51 7A A8 77 6C 59 8E B6 E1 60 | |.gX..Qz.wlY...`

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
1440 bytes of data:
49 19 0F DB 73 12 3A 9B D8 A0 A0 58 51 2C B6 29 | I...s.:....XQ,.)
9B 99 B7 5D A1 4E AC A6 F1 BC 06 90 3A 5D D7 E2 | ...].N......:]..
52 41 C8 ED 3C 55 02 D8 EB 87 39 B4 E2 53 88 A7 | RA..<U....9..S..
2A 36 FE 7C 68 BE 6A 20 F2 17 2A 64 48 34 C1 7F | *6.|h.j ..*dH4..
0C B5 FF 93 03 EC D4 07 CE 51 2C 2E 21 40 65 50 | .........Q,.!@eP
C4 08 67 6E A4 55 56 99 0A 82 74 A4 F0 50 9E E0 | ..gn.UV...t..P..
DC 8F A9 ED 0E CD C8 3E 0B FB 6F 93 7D 79 08 8E | .......>..o.}y..
84 2B EE 83 A3 32 D4 17 99 84 51 AE 81 B5 91 6F | .+...2....Q....o
16 2F 85 C3 A2 50 EA 6D 4B 11 49 E9 9A 3C 95 C5 | ./...P.mK.I..<..
8B 38 A1 D5 9C 5D 11 DE 19 AD 69 3E 94 99 AC 0B | .8...]....i>....
8E 6C 3B 7D 86 CD 20 88 00 CA 06 1E 63 CF 34 92 | .l;}.. .....c.4.
6E 80 52 E5 E2 A7 B2 E6 AB C6 B2 83 5F 16 D1 2A | n.R........._..*
72 85 C7 E1 F9 B3 E5 9D FE 17 80 D3 58 30 BC 10 | r...........X0..
13 A8 BD A1 CD E0 1F 6E 5A 0F D4 AF FE B4 62 D7 | .......nZ.....b.
52 18 0E 92 92 0D 9A 89 06 D3 FE 31 43 49 89 97 | R..........1CI..
8C AE 87 0D 18 AF 73 81 B2 20 6B CE 93 4E 72 43 | ......s.. k..NrC
42 D2 0C 1D 80 9A D6 28 3C B2 B5 3B BA 7C B2 12 | B......(<..;.|..
A9 4F 3B 8E C4 27 A0 15 78 09 D4 48 1E A8 EA 41 | .O;..'..x..H...A
3B B1 D5 A5 93 08 77 04 50 24 07 97 CB 8E 7E 75 | ;.....w.P$....~u
6A D1 25 C2 0D 2C 14 B7 2C 55 0B 19 8A B6 0B 07 | j.%..,..,U......
87 9C F0 7F DC 7A E5 09 E5 71 EC 16 B1 F5 59 6C | .....z...q....Yl
72 13 D8 8D 06 7E EE CB 82 CE 9A CC B9 B7 AE 8E | r....~..........
00 1F 3D 1D 85 8F A8 E6 1F 5B D8 B7 42 93 09 FE | ..=......[..B...
24 CA 70 E9 57 59 5F BF 46 DE 62 7A 72 25 A7 AF | $.p.WY_.F.bzr%..
8D 8A FE 26 98 34 38 06 4E 5E 68 5E 7D D8 04 A3 | ...&.48.N^h^}...
F0 10 1C 1F 61 A4 1C 51 7A 0C FB AB 4D 9A F1 CF | ....a..Qz...M...
0A B1 D8 4D 1F 3B 03 2D 56 09 5F 00 6F 96 B4 89 | ...M.;.-V._.o...
A0 41 4B EF A1 A9 51 DB 0E E4 7C 2D 35 EB 2C B5 | .AK...Q...|-5.,.
BB A4 B0 79 6B 08 12 F9 F8 FA 3D 4D 22 CB FE 63 | ...yk.....=M"..c
EF B8 F5 CF 85 6F 38 F2 B5 8F AD 9C 55 CE 0A DC | .....o8.....U...
08 1D 33 D9 8E 18 D8 4D DD 34 CE F7 6B 1E A8 35 | ..3....M.4..k..5
E6 68 1C 23 AF B0 8E B5 E5 81 57 08 73 C4 50 C5 | .h.#......W.s.P.
2E B4 7A 28 9E EB 2F AF 2F EE 83 06 E9 63 4B 9E | ..z(.././....cK.
B0 6B 56 3C AB 64 F9 8C 46 26 0B E7 06 DA 6A 01 | .kV<.d..F&....j.
64 3B 3E 34 E4 50 04 8C 59 A5 94 0C BB 6A C2 15 | d;>4.P..Y....j..
31 55 5E F4 D6 5A 14 7E 14 0E 19 1D E2 6E 1A 6F | 1U^..Z.~.....n.o
0E 89 9D 98 97 A1 43 9D 50 65 B0 32 77 1F 92 85 | ......C.Pe.2w...
F1 00 28 A3 D1 C7 BF 86 09 A8 D6 A3 77 E8 AA A4 | ..(.........w...
6D 6D 7B 16 B0 29 40 51 12 5B A8 E1 82 A2 A1 1D | mm{..)@Q.[......
C3 17 36 43 1E 83 AB F3 E0 01 5B C2 00 6A E1 4B | ..6C......[..j.K
79 D1 EC BA BF DA F0 8E 0B 86 54 89 2C A0 D7 6E | y.........T.,..n
70 32 7E D6 F9 BC 0F 74 79 E5 48 AA D9 FF 7A 13 | p2~....ty.H...z.
4E B8 12 8E 92 D4 1C 38 5B FA C1 36 51 87 E1 79 | N......8[..6Q..y
A2 98 7A 35 E1 15 D5 41 54 07 9B CF 14 5B 5C 3E | ..z5...AT....[\>
F7 B5 7D 5A A8 63 16 1C D8 60 70 A7 22 F1 17 80 | ..}Z.c...`p."...
05 93 62 E0 17 F0 38 EB 4F AD F0 DA F2 F2 F1 ED | ..b...8.O.......
A8 5C 64 F2 94 7F 53 2F A6 3E 86 C7 A4 A0 32 46 | .\d...S/.>....2F
7A F8 18 A2 B0 31 AD 51 DE 83 A7 D8 98 96 2B 40 | z....1.Q......+@
9E BF 50 40 4C 64 E8 38 01 4D F5 7A 54 D7 FE E3 | ..P@Ld.8.M.zT...
51 67 BA D8 DB 85 0E 8C 2C AC 1B 2E AC 88 1C A6 | Qg......,.......
83 76 E5 48 2A DC 44 FB 40 0C 25 AF B7 92 45 9D | .v.H*.D.@.%...E.
2F 14 C5 9A 82 F4 20 FB DF E9 C0 BF 02 AC C9 89 | /..... .........
7B 40 1C 59 3E 8F 99 C1 18 10 2A 45 E5 AA 77 D6 | {@.Y>.....*E..w.
FA E1 C6 4E 1E E7 0D 8C 07 B7 A1 56 3D E6 AA 5D | ...N.......V=..]
1D 96 23 08 3C E7 57 E5 4A 4C B7 3D A0 BA 65 02 | ..#.<.W.JL.=..e.
C7 72 8F CD 92 FB 09 37 52 07 4A EA 56 7D 58 81 | .r.....7R.J.V}X.
5D 08 4B A8 C5 2F 01 27 BE 87 39 2F 55 B3 97 C7 | ].K../.'..9/U...
3A 43 9F A9 24 64 81 65 98 1D 11 24 15 16 57 33 | :C..$d.e...$..W3
42 CD 5A FE 1B E7 9E 87 38 28 23 8F 6D 4F EE BA | B.Z.....8(#.mO..
10 9A 62 1E 65 36 31 67 7C B9 71 F3 B9 3D EB CF | ..b.e61g|.q..=..
46 28 93 6F 02 E2 43 60 D4 B2 76 A1 F7 45 AF 95 | F(.o..C`..v..E..
CA 1C CE 46 76 D4 61 45 2C 76 B2 AF 77 88 40 37 | ...Fv.aE,v..w.@7
94 D1 2C AC 77 D2 98 10 A7 21 C5 CB B1 D0 81 99 | ..,.w....!......
4D 64 63 B1 C7 92 55 92 3A 71 AA 85 9D 9E A2 A5 | Mdc...U.:q......
45 AB FB 01 FF 11 7F 4E 27 CB E3 95 F5 8D 23 B9 | E......N'.....#.
DF 2E DE B7 C9 91 FA 0C D6 5D 84 ED B7 16 70 9F | .........]....p.
96 51 6B 07 2A 9A 00 C9 1C A5 65 0F F8 1A 25 EA | .Qk.*.....e...%.
32 DB 0A 39 2E 09 83 50 71 73 BC B3 42 B8 08 C9 | 2..9...Pqs..B...
9C 83 9F EE 6B F3 90 F6 BB 26 BD 33 D8 D0 E9 B8 | ....k....&.3....
93 35 A4 B9 28 77 25 4F 7A B4 CF BA B2 90 AF 9F | .5..(w%Oz.......
FA A3 77 E9 92 0A E7 A5 C9 F7 BD FE 38 CF D5 8C | ..w.........8...
88 3B E5 F4 F0 C4 57 AB 43 14 24 F9 63 31 F1 72 | .;....W.C.$.c1.r
31 71 9F D9 41 64 52 52 88 C7 19 77 0E 8A DE 68 | 1q..AdRR...w...h
6B B5 60 43 CA AD CE D3 7D 99 45 C5 0C 7C 0B 1C | k.`C....}.E..|..
92 C3 79 DF 34 84 28 F8 30 D3 E3 32 3B 0F 0F 06 | ..y.4.(.0..2;...
5C 27 78 67 9D 7A 8E FA C3 B0 EF 46 0E FF 6E F6 | \'xg.z.....F..n.
62 3A 71 9B B8 DC 49 BD 33 59 CE BF 69 AC C4 43 | b:q...I.3Y..i..C
26 5E E7 9D 43 AA 01 A3 84 B5 6F AA 44 5F 8A 75 | &^..C.....o.D_.u
4E C4 4A 80 40 06 13 A1 F6 98 7C B5 E7 96 60 DD | N.J.@.....|...`.
43 B7 0D B6 5F BF 14 E5 3F 49 2D 01 B0 A3 03 9F | C..._...?I-.....
51 48 91 C1 43 F4 17 E3 5A A9 14 39 B1 E3 13 A4 | QH..C...Z..9....
85 A6 44 67 5F 7B 2D E7 63 40 B8 39 FD 71 76 C0 | ..Dg_{-.c@.9.qv.
04 63 CC 8B BD 6D 64 30 A9 F0 6D 62 62 D9 4A 96 | .c...md0..mbb.J.
7C FC 09 7C 26 20 09 51 13 C4 E5 DD F2 AA 58 3D | |..|& .Q......X=
10 55 8F 8F D4 1F 2A A4 C9 6D 3D A4 1C 43 70 9F | .U....*..m=..Cp.
A8 7C 58 21 35 66 03 72 71 AA D6 6B 87 D3 54 AA | .|X!5f.rq..k..T.
79 10 CF 48 06 0E 24 25 E2 B6 DD FE 3C B8 BB 5E | y..H..$%....<..^
BB F8 95 23 E2 38 3C 04 C2 6E 46 BC F2 18 EF BE | ...#.8<..nF.....
C4 C1 DD 7B EC 25 01 03 BF 2E D7 E9 07 AB E0 CA | ...{.%..........
0B 06 21 63 6D 13 F4 AB AC 23 70 49 CF C5 D4 9C | ..!cm....#pI....

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
792 bytes of data:
E3 86 C3 87 76 4D 89 20 80 89 3E AA D1 BF E0 AE | ....vM. ..>.....
71 8F 65 04 B2 32 DE 1D 62 E3 77 72 E4 45 61 34 | q.e..2..b.wr.Ea4
88 53 21 0B 57 55 B8 82 59 24 D1 83 1B AB B4 5F | .S!.WU..Y$....._
3B 3E 72 3D CF D0 09 8A 05 BB 9C F9 65 BB 66 08 | ;>r=........e.f.
59 19 A6 4F F9 E4 02 2A 90 AC 1F 91 87 DA 92 C9 | Y..O...*........
61 6A E3 75 E9 9D E7 49 8E 15 1A A3 E4 05 FB 9B | aj.u...I........
28 25 1B 56 8C 16 B8 C2 A2 DB E1 8E 71 29 C0 58 | (%.V........q).X
53 3F A1 AF AD B4 B9 E7 D1 DA 0C 67 B0 83 32 19 | S?.........g..2.
C6 8F AF 7E 05 FA 0C 1B 5C 6D 3A A7 19 80 B0 06 | ...~....\m:.....
12 D2 76 26 53 DA 82 95 25 6A AD 65 B9 18 0C EC | ..v&S...%j.e....
51 E2 00 DC F4 DB 9A C0 42 B1 B3 79 1F C0 D4 92 | Q.......B..y....
70 07 25 EC BF DE 49 6C 17 64 D7 BE 9A 7E 23 61 | p.%...Il.d...~#a
D5 BC 98 00 DD 36 30 C3 DC EC BC 7B A1 F6 9A 82 | .....60....{....
DF 8F 28 9A 70 4B D9 EB B2 0B 76 B6 81 98 C5 67 | ..(.pK....v....g
09 53 88 B7 2F 01 A0 91 6B A6 BD D4 31 79 3E 95 | .S../...k...1y>.
A3 69 9B 50 F5 76 04 21 C3 5D D9 19 BC 94 08 A1 | .i.P.v.!.]......
7C 71 49 88 AB 20 AE 77 39 7A 63 CE E4 00 55 D3 | |qI.. .w9zc...U.
9D 33 43 92 40 92 43 5F E8 19 88 E1 BD 98 81 59 | .3C.@.C_.......Y
F6 B7 EA AC EF 03 B1 F7 E3 A2 9F C8 AE C1 F7 3A | ...............:
63 25 1F 9D C8 08 67 1F 88 A3 9E DC 54 74 DB 7C | c%....g.....Tt.|
62 33 90 8D DD C6 43 B4 8B AD 63 24 AF 45 80 86 | b3....C...c$.E..
83 48 34 BF D4 9E 44 8D BA 02 0F 87 D1 9E D8 90 | .H4...D.........
16 0C 4B 2A 8D D0 45 77 3C 52 73 9B 85 98 CA B9 | ..K*..Ew<Rs.....
93 A6 9A 00 D3 69 4D 3D BD 0C B4 77 39 E3 E5 1C | .....iM=...w9...
93 91 ED D2 11 5E F5 8E C1 A2 8F 7D 42 18 E0 12 | .....^.....}B...
C1 0B A4 15 FF 9F B3 E5 CD 03 33 16 03 52 1D 50 | ..........3..R.P
6B BD A9 E5 F2 C0 6A E7 81 BD AB 6C 18 D7 99 1B | k.....j....l....
7C 0A F0 D2 82 77 10 72 0D AA 0A F4 DA 7C 76 EF | |....w.r.....|v.
BA C6 87 21 C5 E9 F6 38 AE 3D 37 D1 2D 15 B7 2E | ...!...8.=7.-...
65 FC 21 73 14 96 28 EF 9D C9 14 7B AC 16 08 3C | e.!s..(....{...<
8A D5 47 79 A6 CB 1C 38 97 B0 4A AB A6 DA 19 1D | ..Gy...8..J.....
F5 3D 6A 12 34 73 E2 3B A3 A7 FB BE DD B9 A0 89 | .=j.4s.;........
2E 28 CB 9E F5 9D E0 8A 36 F9 64 AC 98 84 72 C9 | .(......6.d...r.
A4 AD 23 4F DD 8A B7 CF 5A 58 CD 3F 40 50 50 9E | ..#O....ZX.?@PP.
BF B2 CA CE A3 AA A9 E3 D7 7E EE 12 E9 62 F6 65 | .........~...b.e
F8 C3 6A C7 DF 52 EB 93 21 33 12 23 D3 5F EB 56 | ..j..R..!3.#._.V
CF 00 12 0F 97 86 28 89 42 C9 98 49 CA E8 B5 37 | ......(.B..I...7
56 50 A3 3A 97 37 BA 31 2A F4 26 28 27 AD 17 09 | VP.:.7.1*.&('...
2F AC 37 D8 68 73 96 CA 4E FD 2C 33 84 39 6C 15 | /.7.hs..N.,3.9l.
47 74 71 85 14 2F A4 C3 DA 83 1B 76 CB 4B 1B 8D | Gtq../.....v.K..
20 8F C5 1D D9 10 DB 6B 68 5D 15 D8 80 58 85 4A |  ......kh]...X.J
1A 0E F8 8E 08 87 00 96 76 EC 07 62 7D 0D 03 65 | ........v..b}..e
34 9F BF 8D 3F 12 2D EC 17 2C 26 F2 85 79 79 8E | 4...?.-..,&..yy.
B2 E2 5A A7 62 0A 25 3A B0 05 E3 8F 00 C9 DD 73 | ..Z.b.%:.......s
B9 0D 5F 64 B8 4B 69 35 73 A2 FF 94 CB 6B 1F 2D | .._d.Ki5s....k.-
EA E7 C6 17 03 03 00 40 16 2F F7 77 5A C7 F5 77 | .......@./.wZ..w
AF CF C6 19 2C F2 FF CD 4E B6 86 11 FD FE EF 03 | ....,...N.......
6A C0 A4 A3 4B 62 0D 02 91 AA 70 44 16 56 DD 03 | j...Kb....pD.V..
0B EF F0 A1 CB E2 10 F8 F4 5D 86 BA CD 4B 05 FD | .........]...K..
74 E9 30 5C 07 D0 8A 4A | t.0\...J

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
831 bytes of data:
17 03 03 00 40 D4 7F 7C E9 71 A4 C1 61 B3 A5 17 | ....@..|.q..a...
A7 7D 88 60 C8 9F 5D D4 88 5A F4 81 6A 34 50 BC | .}.`..]..Z..j4P.
1B 0C 55 15 68 43 1D 1C B0 A6 51 F6 02 DA D7 20 | ..U.hC....Q.... 
DE 9F 5E C4 01 47 EC BA 49 67 29 B3 A6 D3 E0 A8 | ..^..G..Ig).....
C5 2C 5F 1B FD 17 03 03 02 B0 AD C6 63 CD D2 4F | .,_.........c..O
2E 98 00 C3 CD 0B 8D F6 75 6C 11 87 EB DD 28 BE | ........ul....(.
7E AB 13 1D 63 C1 2A EB C9 88 A0 C6 AF 9F F6 47 | ~...c.*........G
53 38 A2 02 F7 95 65 13 17 B0 62 93 EF 4A C1 FA | S8....e...b..J..
84 AA 25 CE 53 73 55 A2 6B 64 02 FE 53 B6 6B 08 | ..%.SsU.kd..S.k.
7C 54 83 8B 6A 05 94 84 D5 B9 EE 29 32 E4 EF 12 | |T..j......)2...
BE ED BA 81 2D 2B F5 05 EB D2 E9 FC AF 2C A2 AC | ....-+.......,..
6A 54 2C D1 15 7D 16 A1 90 F3 DA 2F DC 92 47 98 | jT,..}...../..G.
92 C7 6B 5F CD 15 1F 8B 4F 17 2C AB FE 99 CA BF | ..k_....O.,.....
0D 0A 8D 86 AC AF B7 A1 28 02 FE 29 C0 CB BC 30 | ........(..)...0
ED 27 BC E2 DD CB 97 06 63 2E 73 DD 29 FC DA 3A | .'......c.s.)..:
71 B0 C1 9E 19 C9 2D 1C 50 3D 6D FB B5 03 A7 E6 | q.....-.P=m.....
09 67 4C B8 C0 B6 B8 64 B8 F6 42 89 51 6A 24 C8 | .gL....d..B.Qj$.
C7 94 1C C8 EE 59 D2 7F 02 0B 74 72 CD 00 2A B3 | .....Y....tr..*.
A8 CF C2 F9 76 CF 21 6D 85 F6 38 38 D9 F2 9C FB | ....v.!m..88....
37 85 CC 71 A5 8F 38 98 B3 1C E6 76 65 B3 79 9E | 7..q..8....ve.y.
30 EE 7B 98 75 9B 22 76 B4 A7 6A 30 9D 72 37 84 | 0.{.u."v..j0.r7.
FB F7 1A 64 88 93 BB D0 8B E9 7E 6C FC A6 C3 C5 | ...d......~l....
99 1D 8D AB CE 7F 71 E5 81 28 D4 89 23 D3 F6 16 | ......q..(..#...
FE 2F 4B 41 F3 F3 FD A1 51 F4 5E 25 A4 3B 56 5B | ./KA....Q.^%.;V[
C1 58 86 68 EC 29 55 E2 06 6B 40 2F D2 76 5B 9D | .X.h.)U..k@/.v[.
3F 60 92 B5 A5 A4 7B 4E 18 89 07 70 BE B2 03 EB | ?`....{N...p....
6E E0 49 65 0B 74 8D 11 B2 C1 5E E8 9B E1 F4 85 | n.Ie.t....^.....
00 68 5A 85 2A 82 C8 A3 0B FF 8A 4D 80 06 73 4F | .hZ.*......M..sO
AD 58 85 C3 79 35 64 23 FC D0 73 C5 59 61 C8 5C | .X..y5d#..s.Ya.\
6C C9 AE 10 9E B2 58 F5 C7 31 67 A6 E5 9D 50 A7 | l.....X..1g...P.
02 F0 98 72 FC C7 1B 01 CF D8 77 7C ED C5 3E CC | ...r......w|..>.
20 0A 03 F2 65 07 39 5C E1 AA 71 9D CD DB 86 16 |  ...e.9\..q.....
01 08 7D 40 75 20 27 15 E6 FD CD 7D B9 C2 7F 65 | ..}@u '....}...e
BC FC 13 4F 2B C1 FA 59 2A 5F 65 21 1D EF B4 0C | ...O+..Y*_e!....
4F 3E 09 5C 4F 8E 1D 7B CC EA A7 EB C0 42 2F 1C | O>.\O..{.....B/.
CE 98 E7 E2 00 23 54 E2 A1 A9 C8 96 45 13 4B 36 | .....#T.....E.K6
08 25 66 04 E0 43 49 36 EA 8C 83 E0 73 1B CB 87 | .%f..CI6....s...
9B 42 34 C2 9C 18 F4 7D F2 B7 D0 14 EB CE CC 5C | .B4....}.......\
FC D5 7F F7 1A 95 34 92 E0 06 89 54 33 E7 A2 1F | ......4....T3...
2E 85 6A 08 DD 60 74 FA C2 DC 9A E9 ED A2 E8 69 | ..j..`t........i
BF A2 70 9C 62 6C B3 E5 39 A9 E0 D5 36 FB E3 08 | ..p.bl..9...6...
78 25 BC 86 5C 39 D6 85 17 F0 9F 18 E8 44 31 F2 | x%..\9.......D1.
FC FF E5 B9 47 17 D6 69 DB 0C FB A9 6A 02 7E F6 | ....G..i....j.~.
36 F2 DE AA 16 FE 3B FC 4C 79 27 A9 71 71 21 B4 | 6.....;.Ly'.qq!.
94 64 E6 5B 7B 30 F7 08 0D 4D E1 65 9B 8A 2A C9 | .d.[{0...M.e..*.
92 6A FF 71 4F 0D 9B DD 5E 5B 72 07 F4 C6 61 AA | .j.qO...^[r...a.
68 A1 CB 14 85 F0 E8 C8 1B 85 FC 06 62 8E BE E7 | h...........b...
97 00 22 13 C2 ED 35 FC 25 9B 17 03 03 00 40 28 | .."...5.%.....@(
4E 1B A0 96 B0 E9 16 F4 A9 AF 71 BE 01 76 40 E6 | N.........q..v@.
AB 34 FD A9 36 E3 5A 39 26 AC 32 D2 C3 CB 3C 8D | .4..6.Z9&.2...<.
2B AA 99 F9 61 56 1B 8E C9 84 3F B3 97 D9 A8 1C | +...aV....?.....
DF BE 49 81 BB 98 C0 D9 A2 DB B7 1A A7 97 56 | ..I...........V

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
69 bytes of data:
17 03 03 00 40 7C 29 F3 8E 58 7F AD 37 9C A5 65 | ....@|)..X..7..e
A9 C6 6C 94 83 28 EB 8A BF A2 5A CF 29 22 3A 7B | ..l..(....Z.)":{
82 D4 34 6D F0 DC 00 42 51 5A 09 5A 78 6F 19 BD | ..4m...BQZ.Zxo..
2C 11 2E 89 1C BD 7C 74 19 E2 EA 61 0F B6 A8 FB | ,.....|t...a....
3C 6A B4 D6 99 | <j...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
69 bytes of data:
15 03 03 00 40 B3 5E 70 7E A2 C7 2E AE 5C AE F8 | ....@.^p~....\..
8B DC 5C 02 B7 DE 1D F8 16 D5 29 98 F4 03 48 73 | ..\.......)...Hs
6E 11 01 45 98 94 36 9A 0B EC 55 39 E0 0F 21 15 | n..E..6...U9..!.
2B 06 6E 6B E8 43 F4 3A D4 0F 9C 3D 9D 14 49 5E | +.nk.C.:...=..I^
F2 58 7F 15 CC | .X...

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:

IP Packet From: 91.189.92.10 To: 192.168.1.5
TCP Protocol. Source port: 443	Dest port: 57682
0 bytes of data:

IP Packet From: 192.168.1.5 To: 91.189.92.10
TCP Protocol. Source port: 57682	Dest port: 443
0 bytes of data:
```

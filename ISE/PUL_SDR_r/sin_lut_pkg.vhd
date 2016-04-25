--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package sin_lut_pkg is

type sin_lut_array is array (0 to 124) of integer range 0 to (2**16-1);

constant lut_array : sin_lut_array := (
32768,
34414,
36056,
37690,
39311,
40916,
42501,
44061,
45592,
47091,
48553,
49976,
51355,
52688,
53970,
55198,
56370,
57482,
58532,
59517,
60434,
61281,
62056,
62758,
63383,
63931,
64401,
64790,
65099,
65326,
65470,
65532,
65512,
65408,
65222,
64955,
64605,
64176,
63667,
63080,
62416,
61678,
60867,
59984,
59033,
58015,
56934,
55792,
54591,
53335,
52028,
50671,
49270,
47827,
46346,
44830,
43284,
41711,
40116,
38503,
36874,
35236,
33591,
31944,
30299,
28661,
27032,
25419,
23824,
22251,
20705,
19189,
17708,
16265,
14864,
13507,
12200,
10944,
9743,
8601,
7520,
6502,
5551,
4668,
3857,
3119,
2455,
1868,
1359,
930,
580,
313,
127,
23,
3,
65,
209,
436,
745,
1134,
1604,
2152,
2777,
3479,
4254,
5101,
6018,
7003,
8053,
9165,
10337,
11565,
12847,
14180,
15559,
16982,
18444,
19943,
21474,
23034,
24619,
26224,
27845,
29479,
31121);

end sin_lut_pkg;

package body sin_lut_pkg is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end sin_lut_pkg;

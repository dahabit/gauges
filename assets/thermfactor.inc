; Generated using EasyTherm 5
;
; Coolant -empty
;
; File generated for use with stock 2490 ohm resistor at R7
;
; Steinhart-Hart coefficients:  A= 1.546749E-03   B=2.057854E-04   C= 5.311555E-07
;
; Input Data:	Temp, degF	Resistance
;		    68		    2500
;		   122		     840
;		   176		     315
;

THERMFACTOR:
			;    ADC  Temp, degF
	DB	210T	;     0    Sensor Failure - use 170 degF as default
	DB	255T	;     1    430.55
	DB	255T	;     2    368.63
	DB	255T	;     3    335.39
	DB	255T	;     4    312.93
	DB	255T	;     5    296.08
	DB	255T	;     6    282.65
	DB	255T	;     7    271.51
	DB	255T	;     8    262.02
	DB	255T	;     9    253.75
	DB	255T	;    10    246.43
	DB	255T	;    11    239.87
	DB	255T	;    12    233.93
	DB	255T	;    13    228.50
	DB	255T	;    14    223.51
	DB	255T	;    15    218.88
	DB	255T	;    16    214.57
	DB	251T	;    17    210.53
	DB	247T	;    18    206.74
	DB	243T	;    19    203.17
	DB	240T	;    20    199.79
	DB	237T	;    21    196.57
	DB	234T	;    22    193.52
	DB	231T	;    23    190.60
	DB	228T	;    24    187.81
	DB	225T	;    25    185.14
	DB	223T	;    26    182.57
	DB	220T	;    27    180.10
	DB	218T	;    28    177.73
	DB	215T	;    29    175.43
	DB	213T	;    30    173.21
	DB	211T	;    31    171.07
	DB	209T	;    32    168.99
	DB	207T	;    33    166.98
	DB	205T	;    34    165.02
	DB	203T	;    35    163.12
	DB	201T	;    36    161.28
	DB	199T	;    37    159.48
	DB	198T	;    38    157.72
	DB	196T	;    39    156.01
	DB	194T	;    40    154.34
	DB	193T	;    41    152.71
	DB	191T	;    42    151.12
	DB	190T	;    43    149.56
	DB	188T	;    44    148.04
	DB	187T	;    45    146.54
	DB	185T	;    46    145.08
	DB	184T	;    47    143.65
	DB	182T	;    48    142.24
	DB	181T	;    49    140.86
	DB	180T	;    50    139.50
	DB	178T	;    51    138.17
	DB	177T	;    52    136.86
	DB	176T	;    53    135.57
	DB	174T	;    54    134.31
	DB	173T	;    55    133.06
	DB	172T	;    56    131.83
	DB	171T	;    57    130.62
	DB	169T	;    58    129.43
	DB	168T	;    59    128.26
	DB	167T	;    60    127.10
	DB	166T	;    61    125.96
	DB	165T	;    62    124.83
	DB	164T	;    63    123.72
	DB	163T	;    64    122.63
	DB	162T	;    65    121.54
	DB	160T	;    66    120.47
	DB	159T	;    67    119.42
	DB	158T	;    68    118.37
	DB	157T	;    69    117.34
	DB	156T	;    70    116.32
	DB	155T	;    71    115.30
	DB	154T	;    72    114.30
	DB	153T	;    73    113.32
	DB	152T	;    74    112.34
	DB	151T	;    75    111.37
	DB	150T	;    76    110.41
	DB	149T	;    77    109.45
	DB	149T	;    78    108.51
	DB	148T	;    79    107.58
	DB	147T	;    80    106.65
	DB	146T	;    81    105.73
	DB	145T	;    82    104.82
	DB	144T	;    83    103.92
	DB	143T	;    84    103.02
	DB	142T	;    85    102.14
	DB	141T	;    86    101.25
	DB	140T	;    87    100.38
	DB	140T	;    88     99.51
	DB	139T	;    89     98.65
	DB	138T	;    90     97.79
	DB	137T	;    91     96.94
	DB	136T	;    92     96.10
	DB	135T	;    93     95.26
	DB	134T	;    94     94.42
	DB	134T	;    95     93.59
	DB	133T	;    96     92.77
	DB	132T	;    97     91.95
	DB	131T	;    98     91.13
	DB	130T	;    99     90.32
	DB	130T	;   100     89.52
	DB	129T	;   101     88.71
	DB	128T	;   102     87.92
	DB	127T	;   103     87.12
	DB	126T	;   104     86.33
	DB	126T	;   105     85.54
	DB	125T	;   106     84.76
	DB	124T	;   107     83.98
	DB	123T	;   108     83.20
	DB	122T	;   109     82.43
	DB	122T	;   110     81.66
	DB	121T	;   111     80.89
	DB	120T	;   112     80.13
	DB	119T	;   113     79.37
	DB	119T	;   114     78.61
	DB	118T	;   115     77.85
	DB	117T	;   116     77.10
	DB	116T	;   117     76.34
	DB	116T	;   118     75.59
	DB	115T	;   119     74.84
	DB	114T	;   120     74.10
	DB	113T	;   121     73.35
	DB	113T	;   122     72.61
	DB	112T	;   123     71.87
	DB	111T	;   124     71.13
	DB	110T	;   125     70.39
	DB	110T	;   126     69.66
	DB	109T	;   127     68.92
	DB	108T	;   128     68.19
	DB	107T	;   129     67.46
	DB	107T	;   130     66.72
	DB	106T	;   131     65.99
	DB	105T	;   132     65.26
	DB	105T	;   133     64.53
	DB	104T	;   134     63.80
	DB	103T	;   135     63.08
	DB	102T	;   136     62.35
	DB	102T	;   137     61.62
	DB	101T	;   138     60.89
	DB	100T	;   139     60.17
	DB	 99T	;   140     59.44
	DB	 99T	;   141     58.71
	DB	 98T	;   142     57.99
	DB	 97T	;   143     57.26
	DB	 97T	;   144     56.53
	DB	 96T	;   145     55.80
	DB	 95T	;   146     55.08
	DB	 94T	;   147     54.35
	DB	 94T	;   148     53.62
	DB	 93T	;   149     52.89
	DB	 92T	;   150     52.16
	DB	 91T	;   151     51.43
	DB	 91T	;   152     50.69
	DB	 90T	;   153     49.96
	DB	 89T	;   154     49.22
	DB	 88T	;   155     48.49
	DB	 88T	;   156     47.75
	DB	 87T	;   157     47.01
	DB	 86T	;   158     46.27
	DB	 86T	;   159     45.53
	DB	 85T	;   160     44.78
	DB	 84T	;   161     44.04
	DB	 83T	;   162     43.29
	DB	 83T	;   163     42.54
	DB	 82T	;   164     41.78
	DB	 81T	;   165     41.03
	DB	 80T	;   166     40.27
	DB	 80T	;   167     39.51
	DB	 79T	;   168     38.75
	DB	 78T	;   169     37.98
	DB	 77T	;   170     37.21
	DB	 76T	;   171     36.44
	DB	 76T	;   172     35.66
	DB	 75T	;   173     34.88
	DB	 74T	;   174     34.10
	DB	 73T	;   175     33.31
	DB	 73T	;   176     32.52
	DB	 72T	;   177     31.73
	DB	 71T	;   178     30.93
	DB	 70T	;   179     30.13
	DB	 69T	;   180     29.32
	DB	 69T	;   181     28.51
	DB	 68T	;   182     27.69
	DB	 67T	;   183     26.87
	DB	 66T	;   184     26.04
	DB	 65T	;   185     25.20
	DB	 64T	;   186     24.37
	DB	 64T	;   187     23.52
	DB	 63T	;   188     22.67
	DB	 62T	;   189     21.81
	DB	 61T	;   190     20.95
	DB	 60T	;   191     20.07
	DB	 59T	;   192     19.20
	DB	 58T	;   193     18.31
	DB	 57T	;   194     17.41
	DB	 57T	;   195     16.51
	DB	 56T	;   196     15.60
	DB	 55T	;   197     14.68
	DB	 54T	;   198     13.75
	DB	 53T	;   199     12.82
	DB	 52T	;   200     11.87
	DB	 51T	;   201     10.91
	DB	 50T	;   202      9.94
	DB	 49T	;   203      8.96
	DB	 48T	;   204      7.97
	DB	 47T	;   205      6.97
	DB	 46T	;   206      5.95
	DB	 45T	;   207      4.92
	DB	 44T	;   208      3.88
	DB	 43T	;   209      2.82
	DB	 42T	;   210      1.74
	DB	 41T	;   211       .66
	DB	 40T	;   212      -.45
	DB	 38T	;   213     -1.57
	DB	 37T	;   214     -2.71
	DB	 36T	;   215     -3.87
	DB	 35T	;   216     -5.05
	DB	 34T	;   217     -6.25
	DB	 33T	;   218     -7.47
	DB	 31T	;   219     -8.72
	DB	 30T	;   220     -9.99
	DB	 29T	;   221    -11.29
	DB	 27T	;   222    -12.61
	DB	 26T	;   223    -13.97
	DB	 25T	;   224    -15.35
	DB	 23T	;   225    -16.77
	DB	 22T	;   226    -18.23
	DB	 20T	;   227    -19.72
	DB	 19T	;   228    -21.25
	DB	 17T	;   229    -22.82
	DB	 16T	;   230    -24.44
	DB	 14T	;   231    -26.11
	DB	 12T	;   232    -27.84
	DB	 10T	;   233    -29.62
	DB	  9T	;   234    -31.47
	DB	  7T	;   235    -33.38
	DB	  5T	;   236    -35.37
	DB	  3T	;   237    -37.45
	DB	  0T	;   238    -39.61
	DB	  0T	;   239    -41.88
	DB	  0T	;   240    -44.26
	DB	  0T	;   241    -46.77
	DB	  0T	;   242    -49.43
	DB	  0T	;   243    -52.25
	DB	  0T	;   244    -55.27
	DB	  0T	;   245    -58.50
	DB	  0T	;   246    -62.01
	DB	  0T	;   247    -65.83
	DB	  0T	;   248    -70.04
	DB	  0T	;   249    -74.74
	DB	  0T	;   250    -80.07
	DB	  0T	;   251    -86.26
	DB	  0T	;   252    -93.67
	DB	  0T	;   253   -102.96
	DB	  0T	;   254   -115.61
	DB	210T	;   255    Sensor Failure - use 170 degF as default

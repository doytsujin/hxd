struct Style {
	char *esc1, *esc2;
} styles[256] = {
#define _H { "\x1b[33m",   "\x1b[33m" } /* ctrl chars */
#define _L { "\x1b[34m",   "\x1b[34m" } /* ctrl chars */
	[0]   = { "\x1b[90m",   "\x1b[90m" }, /*  NUL */
	[1]   = _L, [2]   = _L, [3]   = _L, [4]   = _L, [5]   = _L,
	[6]   = _L, [7]   = _L,
	[8]   = { "\x1b[31m",   "\x1b[31m" }, /* BKSP */
	[9]   = { "\x1b[35m",   "\x1b[35m" }, /*  TAB */
	[10]  = { "\x1b[90m", "\x1b[1;37m" }, /*   LF */
	[11]  = _L, [12]  = _L, [13]  = _L, [14]  = _L, [15]  = _L,
	[16]  = _L, [17]  = _L, [18]  = _L, [19]  = _L, [20]  = _L,
	[21]  = _L, [22]  = _L, [23]  = _L, [24]  = _L, [25]  = _L,
	[26]  = _L, [27]  = _L, [28]  = _L, [29]  = _L, [30]  = _L,
	[31]  = _L,
	[127] = { "\x1b[31m",   "\x1b[31m" }, /* DEL */
	[128] = _H, [129] = _H, [130] = _H, [131] = _H, [132] = _H,
	[133] = _H, [134] = _H, [135] = _H, [136] = _H, [137] = _H,
	[138] = _H, [139] = _H, [140] = _H, [141] = _H, [142] = _H,
	[143] = _H, [144] = _H, [145] = _H, [146] = _H, [147] = _H,
	[148] = _H, [149] = _H, [150] = _H, [151] = _H, [152] = _H,
	[153] = _H, [154] = _H, [155] = _H, [156] = _H, [157] = _H,
	[158] = _H, [159] = _H, [160] = _H, [161] = _H, [162] = _H,
	[163] = _H, [164] = _H, [165] = _H, [166] = _H, [167] = _H,
	[168] = _H, [169] = _H, [170] = _H, [171] = _H, [172] = _H,
	[173] = _H, [174] = _H, [175] = _H, [176] = _H, [177] = _H,
	[178] = _H, [179] = _H, [180] = _H, [181] = _H, [182] = _H,
	[183] = _H, [184] = _H, [185] = _H, [186] = _H, [187] = _H,
	[188] = _H, [189] = _H, [190] = _H, [191] = _H, [192] = _H,
	[193] = _H, [194] = _H, [195] = _H, [196] = _H, [197] = _H,
	[198] = _H, [199] = _H, [200] = _H, [201] = _H, [202] = _H,
	[203] = _H, [204] = _H, [205] = _H, [206] = _H, [207] = _H,
	[208] = _H, [209] = _H, [210] = _H, [211] = _H, [212] = _H,
	[213] = _H, [214] = _H, [215] = _H, [216] = _H, [217] = _H,
	[218] = _H, [219] = _H, [220] = _H, [221] = _H, [222] = _H,
	[223] = _H, [224] = _H, [225] = _H, [226] = _H, [227] = _H,
	[228] = _H, [229] = _H, [230] = _H, [231] = _H, [232] = _H,
	[233] = _H, [234] = _H, [235] = _H, [236] = _H, [237] = _H,
	[238] = _H, [239] = _H, [240] = _H, [241] = _H, [242] = _H,
	[243] = _H, [244] = _H, [245] = _H, [246] = _H, [247] = _H,
	[248] = _H, [249] = _H, [250] = _H, [251] = _H, [252] = _H,
	[253] = _H, [254] = _H, [255] = _H,
#undef _H
#undef _L
};

/* Character for space was ␠, changed back to ' ' for
 * readability */
static char *t_cntrls[] = {
	[0  ] = "␀", [1  ] = "␁", [2  ] = "␂", [3  ] = "␃",
	[4  ] = "␄", [5  ] = "␅", [6  ] = "␆", [7  ] = "␇",
	[8  ] = "␈", [9  ] = "␉", [10 ] = "␊", [11 ] = "␋",
	[12 ] = "␌", [13 ] = "·", [14 ] = "␎", [15 ] = "␏",
	[16 ] = "␐", [17 ] = "␑", [18 ] = "␒", [19 ] = "␓",
	[20 ] = "␔", [21 ] = "␕", [22 ] = "␖", [23 ] = "␗",
	[24 ] = "␘", [25 ] = "␙", [26 ] = "␚", [27 ] = "␛",
	[28 ] = "␜", [29 ] = "␝", [30 ] = "␞", [31 ] = "␟",
	[32 ] = " ", [127] = "␡"
};

static char *t_cp437[] = {
	[0  ] = "␀", [1  ] = "☺", [2  ] = "☻", [3  ] = "♥", [4  ] = "♦",
	[5  ] = "♣", [6  ] = "♠", [7  ] = "•", [8  ] = "◛", [9  ] = "○",
	[10 ] = "◙", [11 ] = "♂", [12 ] = "♀", [13 ] = "♪", [14 ] = "♫",
	[15 ] = "☼", [16 ] = "►", [17 ] = "◄", [18 ] = "↕", [19 ] = "‼",
	[20 ] = "¶", [21 ] = "§", [22 ] = "▬", [23 ] = "↨", [24 ] = "↑",
	[25 ] = "↓", [26 ] = "→", [27 ] = "←", [28 ] = "∟", [29 ] = "↔",
	[30 ] = "▲", [31 ] = "▼", [32 ] = " ", [33 ] = "!", [34 ] = "\"",
	[35 ] = "#", [36 ] = "$", [37 ] = "%", [38 ] = "&", [39 ] = "'",
	[40 ] = "(", [41 ] = ")", [42 ] = "*", [43 ] = "+", [44 ] = ",",
	[45 ] = "-", [46 ] = ".", [47 ] = "/", [48 ] = "0", [49 ] = "1",
	[50 ] = "2", [51 ] = "3", [52 ] = "4", [53 ] = "5", [54 ] = "6",
	[55 ] = "7", [56 ] = "8", [57 ] = "9", [58 ] = ":", [59 ] = ";",
	[60 ] = "<", [61 ] = "=", [62 ] = ">", [63 ] = "?", [64 ] = "@",
	[65 ] = "A", [66 ] = "B", [67 ] = "C", [68 ] = "D", [69 ] = "E",
	[70 ] = "F", [71 ] = "G", [72 ] = "H", [73 ] = "I", [74 ] = "J",
	[75 ] = "K", [76 ] = "L", [77 ] = "M", [78 ] = "N", [79 ] = "O",
	[80 ] = "P", [81 ] = "Q", [82 ] = "R", [83 ] = "S", [84 ] = "T",
	[85 ] = "U", [86 ] = "V", [87 ] = "W", [88 ] = "X", [89 ] = "Y",
	[90 ] = "Z", [91 ] = "[", [92 ] = "\\", [93 ] = "]", [94 ] = "^",
	[95 ] = "_", [96 ] = "`", [97 ] = "a", [98 ] = "b", [99 ] = "c",
	[100] = "d", [101] = "e", [102] = "f", [103] = "g", [104] = "h",
	[105] = "i", [106] = "j", [107] = "k", [108] = "l", [109] = "m",
	[110] = "n", [111] = "o", [112] = "p", [113] = "q", [114] = "r",
	[115] = "s", [116] = "t", [117] = "u", [118] = "v", [119] = "w",
	[120] = "x", [121] = "y", [122] = "z", [123] = "{", [124] = "|",
	[125] = "}", [126] = "~", [127] = "⌂", [128] = "Ç", [129] = "ü",
	[130] = "é", [131] = "â", [132] = "ä", [133] = "à", [134] = "å",
	[135] = "ç", [136] = "ê", [137] = "ë", [138] = "è", [139] = "ï",
	[140] = "î", [141] = "ì", [142] = "Ä", [143] = "Å", [144] = "É",
	[145] = "æ", [146] = "Æ", [147] = "ô", [148] = "ö", [149] = "ò",
	[150] = "û", [151] = "ù", [152] = "ÿ", [153] = "Ö", [154] = "Ü",
	[155] = "¢", [156] = "£", [157] = "¥", [158] = "₧", [159] = "ƒ",
	[160] = "á", [161] = "í", [162] = "ó", [163] = "ú", [164] = "ñ",
	[165] = "Ñ", [166] = "ª", [167] = "º", [168] = "¿", [169] = "⌐",
	[170] = "¬", [171] = "½", [172] = "¼", [173] = "¡", [174] = "«",
	[175] = "»", [176] = "░", [177] = "▒", [178] = "▓", [179] = "│",
	[180] = "┤", [181] = "╡", [182] = "╢", [183] = "╖", [184] = "╕",
	[185] = "╣", [186] = "║", [187] = "╗", [188] = "╝", [189] = "╜",
	[190] = "╛", [191] = "┐", [192] = "└", [193] = "┴", [194] = "┬",
	[195] = "├", [196] = "─", [197] = "┼", [198] = "╞", [199] = "╟",
	[200] = "╚", [201] = "╔", [202] = "╩", [203] = "╦", [204] = "╠",
	[205] = "═", [206] = "╬", [207] = "╧", [208] = "╨", [209] = "╤",
	[210] = "╥", [211] = "╙", [212] = "╘", [213] = "╒", [214] = "╓",
	[215] = "╫", [216] = "╪", [217] = "┘", [218] = "┌", [219] = "█",
	[220] = "▄", [221] = "▌", [222] = "▐", [223] = "▀", [224] = "α",
	[225] = "ß", [226] = "Γ", [227] = "π", [228] = "Σ", [229] = "σ",
	[230] = "µ", [231] = "τ", [232] = "Φ", [233] = "Θ", [234] = "Ω",
	[235] = "δ", [236] = "∞", [237] = "φ", [238] = "ε", [239] = "∩",
	[240] = "≡", [241] = "±", [242] = "≥", [243] = "≤", [244] = "⌠",
	[245] = "⌡", [246] = "÷", [247] = "≈", [248] = "°", [249] = "∙",
	[250] = "·", [251] = "√", [252] = "ⁿ", [253] = "²", [254] = "■",
	[255] = "□"
};

static char *t_default[] = {
	[0  ] = "0", [1  ] = "·", [2  ] = "·", [3  ] = "·", [4  ] = "·",
	[5  ] = "·", [6  ] = "·", [7  ] = "·", [8  ] = "·", [9  ] = "»",
	[10 ] = "_", [11 ] = "·", [12 ] = "·", [13 ] = "·", [14 ] = "·",
	[15 ] = "·", [16 ] = "·", [17 ] = "·", [18 ] = "·", [19 ] = "·",
	[20 ] = "·", [21 ] = "·", [22 ] = "·", [23 ] = "·", [24 ] = "·",
	[25 ] = "·", [26 ] = "·", [27 ] = "·", [28 ] = "·", [29 ] = "·",
	[30 ] = "·", [31 ] = "·", [32 ] = " ", [33 ] = "!", [34 ] = "\"",
	[35 ] = "#", [36 ] = "$", [37 ] = "%", [38 ] = "&", [39 ] = "'",
	[40 ] = "(", [41 ] = ")", [42 ] = "*", [43 ] = "+", [44 ] = ",",
	[45 ] = "-", [46 ] = ".", [47 ] = "/", [48 ] = "0", [49 ] = "1",
	[50 ] = "2", [51 ] = "3", [52 ] = "4", [53 ] = "5", [54 ] = "6",
	[55 ] = "7", [56 ] = "8", [57 ] = "9", [58 ] = ":", [59 ] = ";",
	[60 ] = "<", [61 ] = "=", [62 ] = ">", [63 ] = "?", [64 ] = "@",
	[65 ] = "A", [66 ] = "B", [67 ] = "C", [68 ] = "D", [69 ] = "E",
	[70 ] = "F", [71 ] = "G", [72 ] = "H", [73 ] = "I", [74 ] = "J",
	[75 ] = "K", [76 ] = "L", [77 ] = "M", [78 ] = "N", [79 ] = "O",
	[80 ] = "P", [81 ] = "Q", [82 ] = "R", [83 ] = "S", [84 ] = "T",
	[85 ] = "U", [86 ] = "V", [87 ] = "W", [88 ] = "X", [89 ] = "Y",
	[90 ] = "Z", [91 ] = "[", [92 ] = "\\", [93 ] = "]", [94 ] = "^",
	[95 ] = "_", [96 ] = "`", [97 ] = "a", [98 ] = "b", [99 ] = "c",
	[100] = "d", [101] = "e", [102] = "f", [103] = "g", [104] = "h",
	[105] = "i", [106] = "j", [107] = "k", [108] = "l", [109] = "m",
	[110] = "n", [111] = "o", [112] = "p", [113] = "q", [114] = "r",
	[115] = "s", [116] = "t", [117] = "u", [118] = "v", [119] = "w",
	[120] = "x", [121] = "y", [122] = "z", [123] = "{", [124] = "|",
	[125] = "}", [126] = "~", [127] = "·", [128] = "×", [129] = "×",
	[130] = "×", [131] = "×", [132] = "×", [133] = "×", [134] = "×",
	[135] = "×", [136] = "×", [137] = "×", [138] = "×", [139] = "×",
	[140] = "×", [141] = "×", [142] = "×", [143] = "×", [144] = "×",
	[145] = "×", [146] = "×", [147] = "×", [148] = "×", [149] = "×",
	[150] = "×", [151] = "×", [152] = "×", [153] = "×", [154] = "×",
	[155] = "×", [156] = "×", [157] = "×", [158] = "×", [159] = "×",
	[160] = "×", [161] = "×", [162] = "×", [163] = "×", [164] = "×",
	[165] = "×", [166] = "×", [167] = "×", [168] = "×", [169] = "×",
	[170] = "×", [171] = "×", [172] = "×", [173] = "×", [174] = "×",
	[175] = "×", [176] = "×", [177] = "×", [178] = "×", [179] = "×",
	[180] = "×", [181] = "×", [182] = "×", [183] = "×", [184] = "×",
	[185] = "×", [186] = "×", [187] = "×", [188] = "×", [189] = "×",
	[190] = "×", [191] = "×", [192] = "×", [193] = "×", [194] = "×",
	[195] = "×", [196] = "×", [197] = "×", [198] = "×", [199] = "×",
	[200] = "×", [201] = "×", [202] = "×", [203] = "×", [204] = "×",
	[205] = "×", [206] = "×", [207] = "×", [208] = "×", [209] = "×",
	[210] = "×", [211] = "×", [212] = "×", [213] = "×", [214] = "×",
	[215] = "×", [216] = "×", [217] = "×", [218] = "×", [219] = "×",
	[220] = "×", [221] = "×", [222] = "×", [223] = "×", [224] = "×",
	[225] = "×", [226] = "×", [227] = "×", [228] = "×", [229] = "×",
	[230] = "×", [231] = "×", [232] = "×", [233] = "×", [234] = "×",
	[235] = "×", [236] = "×", [237] = "×", [238] = "×", [239] = "×",
	[240] = "×", [241] = "×", [242] = "×", [243] = "×", [244] = "×",
	[245] = "×", [246] = "×", [247] = "×", [248] = "×", [249] = "×",
	[250] = "×", [251] = "×", [252] = "×", [253] = "×", [254] = "×",
	[255] = "×"
};

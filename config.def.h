/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

/* * 配色方案: Catppuccin Mocha 改版
 * 既保持了 Geek 的深色护眼，又加入了粉色(Pink)作为输入反馈
 */
static const char *colorname[NUMCOLS] = {
    [BACKGROUND] = "#2C3040",   /* 极夜深蓝背景 */
    [INIT] =   "#F2F0F0",       /* 初始化/等待 */
    [INPUT] =  "#E89CAD",       /* 输入中*/
    [FAILED] = "#C45C66",       /* 错误 */
    [CAPS] =   "#6D5852",       /* CapsLock */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* * 
 * Pixel Art: "waytohill"
 */
static const int logosize = 45;
static const int logow = 35;    /* 刚好容纳所有字符和间距的宽度 */
static const int logoh = 5;

static XRectangle rectangles[] = {
    /* --- W (5x5) --- 
     * 宽厚稳重，三柱擎天
     */
    {0,0,1,4}, {2,0,1,4}, {4,0,1,4}, /* 三竖 */
    {0,4,5,1},                       /* 底座 */

    /* --- A (3x5) --- 
     * x=6
     */
    {6,1,1,4}, {8,1,1,4}, /* 两腿 */
    {6,0,3,1},            /* 顶盖 */
    {6,2,3,1},            /* 中横 */

    /* --- Y (3x5) --- 
     * x=10
     */
    {10,0,1,3}, {12,0,1,3}, /* 两臂 */
    {11,2,1,3},             /* 支柱 */

    /* --- T (3x5) --- 
     * x=14
     */
    {14,0,3,1}, /* 顶横 */
    {15,1,1,4}, /* 竖线 */

    /* --- O (3x5) --- 
     * x=18
     */
    {18,0,3,1}, {18,4,3,1}, /* 上下 */
    {18,1,1,3}, {20,1,1,3}, /* 左右 */

    /* --- H (3x5) --- 
     * x=22
     */
    {22,0,1,5}, {24,0,1,5}, /* 两竖 */
    {22,2,3,1},             /* 中横 */

    /* --- I (1x5) --- 
     * x=26
     * 唯一一个单像素宽的字母，保持极简
     */
    {26,0,1,5},

    /* --- L (3x5) --- 
     * x=28
     */
    {28,0,1,5}, /* 竖 */
    {28,4,3,1}, /* 底 */

    /* --- L (3x5) --- 
     * x=32
     */
    {32,0,1,5}, /* 竖 */
    {32,4,3,1}, /* 底 */
};

/*Enable blur*/
/* 建议开启，配合像素画Logo效果极佳 */
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;

//
//  ViewController.m
//  Button Fun
//
//  Created by Queen on 17/4/3.
//  Copyright © 2017年 QiangWang. All rights reserved.
//

#import "ViewController.h"

#define vMonth 0 //月份
#define vDay 1  //日期
@interface ViewController ()
/*@property (strong,nonatomic)NSArray *characterNmaes;
*/
@property(strong,nonatomic)NSArray *vMonthsSel;
@property(strong,nonatomic)NSArray *vDaysSel;
@property(strong,nonatomic)NSDictionary *vBirth;
@property (weak, nonatomic) IBOutlet UILabel *genderLabel;
@property(strong,nonatomic)NSString *gender;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Do any additional setup after loading the view, typically from a nib.
    self.vMonthsSel=@[@"1.20到2.18",@"2.19到3.20",@"3.21到4.19",@"4.20到5.20",@"5.21到6.21",@"6.22到7.22",@"7.23到8.22",@"8.23到9.22",@"9.23到10.23",@"10.24到11.22",@"11.23到12.21",@"12.22到1.19"];
    
    
    //控件默认显示的内容要初始化！！！
    _genderLabel.text=@"男";
    self.gender=@"男";
    
    /*self.vDaysSel=@[@"1",@"2",@"3",@"4",@"5",@"6",@"7",@"8",@"9",@"10",@"11",@"12",@"13",@"14",@"15",@"16",@"17",@"18",@"19",@"20",@"21",@"22",@"23",@"24",@"25",@"26",@"27",@"28",@"29",@"30",@"31"];
     */
    /*
    self.vBirth=@{@"1.20到2.18":@"水瓶座♒️",@"2.19到3.20":@"双鱼座♓️",@"3.21到4.19":@"白羊座♈️",@"4.20到5.20":@"金牛座♉️",@"5.21到6.21":@"双子座♊️",@"6.22到7.22":@"巨蟹座♋️",@"7.23到8.22":@"狮子座♌️",@"8.23到9.22":@"处女座♍️",@"9.23到10.23":@"天秤座♎️",@"10.24到11.22":@"天蝎座♏️",@"11.23到12.21":@"射手座♐️",@"12.22到1.19":@"摩羯座♑️"};
    //self.allDays1=[self.vBirth allKeys];
    NSArray *allDays=[self.vBirth allKeys];
    NSArray *sortedDays=[allDays sortedArrayUsingSelector:@selector(compare:)];
    //self.sortedDays1=[allDays sortedArrayUsingSelector:@selector(compare:)];
    self.vDaysSel=sortedDays;
    NSString *selectedDay=self.vMonthsSel[0];
    self.vDaysSel=self.vBirth[selectedDay];
     */
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
    self.gender=NULL;
    self.vMonthsSel=NULL;
    self.vDaysSel=NULL;
    self.vBirth=NULL;
}

- (IBAction)buttonPressed:(UIButton *)sender {
    {
        NSString *title=[sender titleForState:UIControlStateNormal];//1、通过sender参数得到被点击按钮的标题
        
        NSString *plainText=[NSString stringWithFormat:@"%@ button pressed.",title];//2、把上一步的按钮标题和字符串拼接
    
        _statusLabel.text=plainText;//3、把2中新的字符串赋给标签的text属性 完成！
            };
}
- (IBAction)buttonPress:(UIButton *)sender {
    NSInteger row=[self.singlePicker selectedRowInComponent:0];
    NSString *selected=self.vMonthsSel[row];
    NSInteger vmonRow=[self.singlePicker selectedRowInComponent:vMonth];
    
     //弹对话框的程序
    /*
     NSString *title=[[NSString alloc] initWithFormat:@"You selected %@!",selected];
    UIAlertController *alert=[UIAlertController alertControllerWithTitle:title message:@"Thank you" preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *action=[UIAlertAction actionWithTitle:@"you are welcome" style:UIAlertActionStyleDefault handler:nil];
    [alert addAction:action];
    [self presentViewController:alert animated:YES completion:nil];
     
    */
    //
    /*
    NSInteger vmonRow=[self.singlePicker selectedRowInComponent:vMonth];
    
    NSInteger vdayRow=[self.singlePicker selectedRowInComponent:vDay];
    
    NSString *monsel=self.vMonthsSel[vmonRow];
    NSString *daysel=self.vDaysSel[vdayRow];
    
    NSString *message=[[NSString alloc]initWithFormat:@"你是：%@,出生在%@期间.",monsel,daysel];
    UIAlertController *alert=[UIAlertController alertControllerWithTitle:@"生日快乐"
                                                                 message:message preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *action=[UIAlertAction actionWithTitle:@"😄" style:UIAlertActionStyleDefault handler:nil];
    [alert addAction:action];
    [self presentViewController:alert animated:YES completion:nil];
     */
    //_textView1.text=self.sortedDays1[2];// self.vBirth[@"1.20到2.18"];// @"测试测试";
    //_textView1.text=vmonRow;
    
    NSArray *vxz=@[@"特点：自由博爱; 掌管宫位：第十一宫; 阴阳性：阳性; 最大特征：求知; 主管星：天王星; 颜色：古铜色; 珠宝：黑珍珠; 幸运号码：22; 金属：蛋白石",
                   @"特点：热情活力掌管宫位：第一宫阴阳性：阳性最大特征：控制主管星：火星颜色：红色珠宝：红宝石幸运号码：5金属：铁"
                   ];
    NSMutableString *string1=[NSMutableString stringWithCapacity:1024];
    [string1 appendString:@"您的性别是:"];
    [string1 appendString:self.gender];//[string1 appendString:gender];
    switch(vmonRow)
    {
            /*
             @"1.20到2.18":@"水瓶座♒️",@"2.19到3.20":@"双鱼座♓️",@"3.21到4.19":@"白羊座♈️",@"4.20到5.20":@"金牛座♉️",@"5.21到6.21":@"双子座♊️",@"6.22到7.22":@"巨蟹座♋️",@"7.23到8.22":@"狮子座♌️",@"8.23到9.22":@"处女座♍️",@"9.23到10.23":@"天秤座♎️",@"10.24到11.22":@"天蝎座♏️",@"11.23到12.21":@"射手座♐️",@"12.22到1.19":@"摩羯座♑️"
             */
            
        case 0:[string1 appendString:@" 您的星座是：水瓶座"];_textView1.text=string1;break;
        case 1:[string1 appendString:@" 您的星座是：双鱼座"];_textView1.text=string1;break;
        case 2:[string1 appendString:@" 您的星座是：白羊座"];_textView1.text=string1;break;
        case 3:[string1 appendString:@" 您的星座是：金牛座"];_textView1.text=string1;break;
        case 4:[string1 appendString:@" 您的星座是：双子座"];_textView1.text=string1;break;
        case 5:[string1 appendString:@" 您的星座是：巨蟹座"];_textView1.text=string1;break;
        case 6:[string1 appendString:@" 您的星座是：狮子座"];_textView1.text=string1;break;
        case 7:[string1 appendString:@" 您的星座是：处女座"];_textView1.text=string1;break;
        case 8:[string1 appendString:@" 您的星座是：天秤座"];_textView1.text=string1;break;
        case 9:[string1 appendString:@" 您的星座是：天蝎座"];_textView1.text=string1;break;
        case 10:[string1 appendString:@" 您的星座是：射手座"];_textView1.text=string1;break;
        case 11:[string1 appendString:@" 您的星座是：摩羯座"];_textView1.text=string1;break;    }
}

- (IBAction)switchChanged:(UISwitch *)sender {
    BOOL setting=sender.isOn;
    [self.leftSwitch setOn:setting animated:YES];
    if(setting==YES)
    {
        //_genderLabel.text=@"女";
        _genderLabel.text=@"男";
         self.gender=@"男";
    }
    else{
        _genderLabel.text=@"女";
        self.gender=@"女";
    }
}
#pragma mark-
-   (NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView{
    return 1;
}
-   (NSInteger)pickerView:(UIPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component{
    //return [self.characterNmaes count];
    if(component==vMonth){return [self.vMonthsSel count];}
    else{
        return [self.vDaysSel count];
    }
}
#pragma mark
-   (NSString *) pickerView:(UIPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component{
    //return self.characterNmaes[row];
    
    if(component==vMonth){
        return self.vMonthsSel[row];
    }
    else{
        return self.vDaysSel[row];
    }

}

/*-   (void)pickerView:(UIPickerView *)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component{
    if(component==vMonth){
        NSString *seledDays=self.vMonthsSel[row];
        self.vDaysSel=self.vBirth[seledDays];
        [self.singlePicker reloadComponent:vDay];
        [self.singlePicker selectRow:0 inComponent:vDay animated:YES];
    }
 
}*/
@end

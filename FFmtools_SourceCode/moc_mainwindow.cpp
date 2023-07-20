/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ffmtoolsApplication/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[109];
    char stringdata0[2586];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "videoStream1CheckBoxSignal"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "videoStream2CheckBoxSignal"
QT_MOC_LITERAL(4, 66, 26), // "audioStream1CheckBoxSignal"
QT_MOC_LITERAL(5, 93, 26), // "audioStream2CheckBoxSignal"
QT_MOC_LITERAL(6, 120, 24), // "videoDash1CheckBoxSignal"
QT_MOC_LITERAL(7, 145, 24), // "videoDash2CheckBoxSignal"
QT_MOC_LITERAL(8, 170, 24), // "videoDash3CheckBoxSignal"
QT_MOC_LITERAL(9, 195, 24), // "videoDash4CheckBoxSignal"
QT_MOC_LITERAL(10, 220, 24), // "videoDash5CheckBoxSignal"
QT_MOC_LITERAL(11, 245, 24), // "videoDash6CheckBoxSignal"
QT_MOC_LITERAL(12, 270, 24), // "videoDash7CheckBoxSignal"
QT_MOC_LITERAL(13, 295, 24), // "audioDash1CheckBoxSignal"
QT_MOC_LITERAL(14, 320, 24), // "audioDash2CheckBoxSignal"
QT_MOC_LITERAL(15, 345, 24), // "audioDash3CheckBoxSignal"
QT_MOC_LITERAL(16, 370, 29), // "on_videoSource1Browse_clicked"
QT_MOC_LITERAL(17, 400, 29), // "on_videoSource2Browse_clicked"
QT_MOC_LITERAL(18, 430, 29), // "on_audioSource1Browse_clicked"
QT_MOC_LITERAL(19, 460, 29), // "on_audioSource2Browse_clicked"
QT_MOC_LITERAL(20, 490, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(21, 513, 23), // "on_ffplayButton_clicked"
QT_MOC_LITERAL(22, 537, 24), // "on_ffprobeButton_clicked"
QT_MOC_LITERAL(23, 562, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(24, 584, 28), // "on_destinationBrowse_clicked"
QT_MOC_LITERAL(25, 613, 11), // "replaceFile"
QT_MOC_LITERAL(26, 625, 36), // "on_codecVideoBox_currentIndex..."
QT_MOC_LITERAL(27, 662, 6), // "format"
QT_MOC_LITERAL(28, 669, 36), // "on_codecAudioBox_currentIndex..."
QT_MOC_LITERAL(29, 706, 12), // "videoStreams"
QT_MOC_LITERAL(30, 719, 12), // "audioStreams"
QT_MOC_LITERAL(31, 732, 13), // "setVideoCodec"
QT_MOC_LITERAL(32, 746, 17), // "setVideoContainer"
QT_MOC_LITERAL(33, 764, 15), // "setVideoBitrate"
QT_MOC_LITERAL(34, 780, 18), // "setSpinBoxReadOnly"
QT_MOC_LITERAL(35, 799, 12), // "setFrameSize"
QT_MOC_LITERAL(36, 812, 14), // "setVideoFilter"
QT_MOC_LITERAL(37, 827, 12), // "setFrameRate"
QT_MOC_LITERAL(38, 840, 12), // "setVideoTime"
QT_MOC_LITERAL(39, 853, 33), // "videoStream1CheckBox_stateCha..."
QT_MOC_LITERAL(40, 887, 33), // "videoStream2CheckBox_stateCha..."
QT_MOC_LITERAL(41, 921, 26), // "videoSource1BoxTextChanged"
QT_MOC_LITERAL(42, 948, 4), // "text"
QT_MOC_LITERAL(43, 953, 26), // "videoSource2BoxTextChanged"
QT_MOC_LITERAL(44, 980, 17), // "selectVideoStream"
QT_MOC_LITERAL(45, 998, 14), // "setPixelFormat"
QT_MOC_LITERAL(46, 1013, 13), // "setAudioCodec"
QT_MOC_LITERAL(47, 1027, 15), // "setAudioBitrate"
QT_MOC_LITERAL(48, 1043, 17), // "setAudioFrequency"
QT_MOC_LITERAL(49, 1061, 16), // "setAudioChannels"
QT_MOC_LITERAL(50, 1078, 17), // "selectAudioStream"
QT_MOC_LITERAL(51, 1096, 33), // "audioStream1CheckBox_stateCha..."
QT_MOC_LITERAL(52, 1130, 33), // "audioStream2CheckBox_stateCha..."
QT_MOC_LITERAL(53, 1164, 26), // "audioSource1BoxTextChanged"
QT_MOC_LITERAL(54, 1191, 26), // "audioSource2BoxTextChanged"
QT_MOC_LITERAL(55, 1218, 29), // "on_clearVideoSettings_clicked"
QT_MOC_LITERAL(56, 1248, 29), // "on_clearAudioSettings_clicked"
QT_MOC_LITERAL(57, 1278, 18), // "setNoAudioCheckBox"
QT_MOC_LITERAL(58, 1297, 18), // "setNoVideoCheckBox"
QT_MOC_LITERAL(59, 1316, 11), // "clearMemory"
QT_MOC_LITERAL(60, 1328, 18), // "setBuffer1ReadOnly"
QT_MOC_LITERAL(61, 1347, 18), // "setBuffer2ReadOnly"
QT_MOC_LITERAL(62, 1366, 18), // "setBuffer3ReadOnly"
QT_MOC_LITERAL(63, 1385, 18), // "setBuffer4ReadOnly"
QT_MOC_LITERAL(64, 1404, 18), // "setBuffer5ReadOnly"
QT_MOC_LITERAL(65, 1423, 18), // "setBuffer6ReadOnly"
QT_MOC_LITERAL(66, 1442, 18), // "setBuffer7ReadOnly"
QT_MOC_LITERAL(67, 1461, 21), // "mpegdashVideoCommand1"
QT_MOC_LITERAL(68, 1483, 21), // "mpegdashVideoCommand2"
QT_MOC_LITERAL(69, 1505, 21), // "mpegdashVideoCommand3"
QT_MOC_LITERAL(70, 1527, 21), // "mpegdashVideoCommand4"
QT_MOC_LITERAL(71, 1549, 21), // "mpegdashVideoCommand5"
QT_MOC_LITERAL(72, 1571, 21), // "mpegdashVideoCommand6"
QT_MOC_LITERAL(73, 1593, 21), // "mpegdashVideoCommand7"
QT_MOC_LITERAL(74, 1615, 21), // "mpegdashAudioCommand1"
QT_MOC_LITERAL(75, 1637, 21), // "mpegdashAudioCommand2"
QT_MOC_LITERAL(76, 1659, 21), // "mpegdashAudioCommand3"
QT_MOC_LITERAL(77, 1681, 30), // "on_mpegdashStartButton_clicked"
QT_MOC_LITERAL(78, 1712, 29), // "on_mpegdashStopButton_clicked"
QT_MOC_LITERAL(79, 1742, 27), // "onProcessFinishedDoublePass"
QT_MOC_LITERAL(80, 1770, 8), // "exitCode"
QT_MOC_LITERAL(81, 1779, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(82, 1800, 10), // "exitStatus"
QT_MOC_LITERAL(83, 1811, 28), // "onProcessFinishedDashVideo12"
QT_MOC_LITERAL(84, 1840, 27), // "onProcessFinishedDashVideo2"
QT_MOC_LITERAL(85, 1868, 28), // "onProcessFinishedDashVideo22"
QT_MOC_LITERAL(86, 1897, 27), // "onProcessFinishedDashVideo3"
QT_MOC_LITERAL(87, 1925, 28), // "onProcessFinishedDashVideo32"
QT_MOC_LITERAL(88, 1954, 27), // "onProcessFinishedDashVideo4"
QT_MOC_LITERAL(89, 1982, 28), // "onProcessFinishedDashVideo42"
QT_MOC_LITERAL(90, 2011, 27), // "onProcessFinishedDashVideo5"
QT_MOC_LITERAL(91, 2039, 28), // "onProcessFinishedDashVideo52"
QT_MOC_LITERAL(92, 2068, 27), // "onProcessFinishedDashVideo6"
QT_MOC_LITERAL(93, 2096, 28), // "onProcessFinishedDashVideo62"
QT_MOC_LITERAL(94, 2125, 27), // "onProcessFinishedDashVideo7"
QT_MOC_LITERAL(95, 2153, 28), // "onProcessFinishedDashVideo72"
QT_MOC_LITERAL(96, 2182, 27), // "onProcessFinishedDashAudio1"
QT_MOC_LITERAL(97, 2210, 27), // "onProcessFinishedDashAudio2"
QT_MOC_LITERAL(98, 2238, 27), // "onProcessFinishedDashAudio3"
QT_MOC_LITERAL(99, 2266, 31), // "dashVideoCheckBox1_stateChanged"
QT_MOC_LITERAL(100, 2298, 31), // "dashVideoCheckBox2_stateChanged"
QT_MOC_LITERAL(101, 2330, 31), // "dashVideoCheckBox3_stateChanged"
QT_MOC_LITERAL(102, 2362, 31), // "dashVideoCheckBox4_stateChanged"
QT_MOC_LITERAL(103, 2394, 31), // "dashVideoCheckBox5_stateChanged"
QT_MOC_LITERAL(104, 2426, 31), // "dashVideoCheckBox6_stateChanged"
QT_MOC_LITERAL(105, 2458, 31), // "dashVideoCheckBox7_stateChanged"
QT_MOC_LITERAL(106, 2490, 31), // "dashAudioCheckBox1_stateChanged"
QT_MOC_LITERAL(107, 2522, 31), // "dashAudioCheckBox2_stateChanged"
QT_MOC_LITERAL(108, 2554, 31) // "dashAudioCheckBox3_stateChanged"

    },
    "MainWindow\0videoStream1CheckBoxSignal\0"
    "\0videoStream2CheckBoxSignal\0"
    "audioStream1CheckBoxSignal\0"
    "audioStream2CheckBoxSignal\0"
    "videoDash1CheckBoxSignal\0"
    "videoDash2CheckBoxSignal\0"
    "videoDash3CheckBoxSignal\0"
    "videoDash4CheckBoxSignal\0"
    "videoDash5CheckBoxSignal\0"
    "videoDash6CheckBoxSignal\0"
    "videoDash7CheckBoxSignal\0"
    "audioDash1CheckBoxSignal\0"
    "audioDash2CheckBoxSignal\0"
    "audioDash3CheckBoxSignal\0"
    "on_videoSource1Browse_clicked\0"
    "on_videoSource2Browse_clicked\0"
    "on_audioSource1Browse_clicked\0"
    "on_audioSource2Browse_clicked\0"
    "on_startButton_clicked\0on_ffplayButton_clicked\0"
    "on_ffprobeButton_clicked\0on_stopButton_clicked\0"
    "on_destinationBrowse_clicked\0replaceFile\0"
    "on_codecVideoBox_currentIndexChanged\0"
    "format\0on_codecAudioBox_currentIndexChanged\0"
    "videoStreams\0audioStreams\0setVideoCodec\0"
    "setVideoContainer\0setVideoBitrate\0"
    "setSpinBoxReadOnly\0setFrameSize\0"
    "setVideoFilter\0setFrameRate\0setVideoTime\0"
    "videoStream1CheckBox_stateChanged\0"
    "videoStream2CheckBox_stateChanged\0"
    "videoSource1BoxTextChanged\0text\0"
    "videoSource2BoxTextChanged\0selectVideoStream\0"
    "setPixelFormat\0setAudioCodec\0"
    "setAudioBitrate\0setAudioFrequency\0"
    "setAudioChannels\0selectAudioStream\0"
    "audioStream1CheckBox_stateChanged\0"
    "audioStream2CheckBox_stateChanged\0"
    "audioSource1BoxTextChanged\0"
    "audioSource2BoxTextChanged\0"
    "on_clearVideoSettings_clicked\0"
    "on_clearAudioSettings_clicked\0"
    "setNoAudioCheckBox\0setNoVideoCheckBox\0"
    "clearMemory\0setBuffer1ReadOnly\0"
    "setBuffer2ReadOnly\0setBuffer3ReadOnly\0"
    "setBuffer4ReadOnly\0setBuffer5ReadOnly\0"
    "setBuffer6ReadOnly\0setBuffer7ReadOnly\0"
    "mpegdashVideoCommand1\0mpegdashVideoCommand2\0"
    "mpegdashVideoCommand3\0mpegdashVideoCommand4\0"
    "mpegdashVideoCommand5\0mpegdashVideoCommand6\0"
    "mpegdashVideoCommand7\0mpegdashAudioCommand1\0"
    "mpegdashAudioCommand2\0mpegdashAudioCommand3\0"
    "on_mpegdashStartButton_clicked\0"
    "on_mpegdashStopButton_clicked\0"
    "onProcessFinishedDoublePass\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "onProcessFinishedDashVideo12\0"
    "onProcessFinishedDashVideo2\0"
    "onProcessFinishedDashVideo22\0"
    "onProcessFinishedDashVideo3\0"
    "onProcessFinishedDashVideo32\0"
    "onProcessFinishedDashVideo4\0"
    "onProcessFinishedDashVideo42\0"
    "onProcessFinishedDashVideo5\0"
    "onProcessFinishedDashVideo52\0"
    "onProcessFinishedDashVideo6\0"
    "onProcessFinishedDashVideo62\0"
    "onProcessFinishedDashVideo7\0"
    "onProcessFinishedDashVideo72\0"
    "onProcessFinishedDashAudio1\0"
    "onProcessFinishedDashAudio2\0"
    "onProcessFinishedDashAudio3\0"
    "dashVideoCheckBox1_stateChanged\0"
    "dashVideoCheckBox2_stateChanged\0"
    "dashVideoCheckBox3_stateChanged\0"
    "dashVideoCheckBox4_stateChanged\0"
    "dashVideoCheckBox5_stateChanged\0"
    "dashVideoCheckBox6_stateChanged\0"
    "dashVideoCheckBox7_stateChanged\0"
    "dashAudioCheckBox1_stateChanged\0"
    "dashAudioCheckBox2_stateChanged\0"
    "dashAudioCheckBox3_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     102,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  524,    2, 0x06 /* Public */,
       3,    1,  527,    2, 0x06 /* Public */,
       4,    1,  530,    2, 0x06 /* Public */,
       5,    1,  533,    2, 0x06 /* Public */,
       6,    1,  536,    2, 0x06 /* Public */,
       7,    1,  539,    2, 0x06 /* Public */,
       8,    1,  542,    2, 0x06 /* Public */,
       9,    1,  545,    2, 0x06 /* Public */,
      10,    1,  548,    2, 0x06 /* Public */,
      11,    1,  551,    2, 0x06 /* Public */,
      12,    1,  554,    2, 0x06 /* Public */,
      13,    1,  557,    2, 0x06 /* Public */,
      14,    1,  560,    2, 0x06 /* Public */,
      15,    1,  563,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  566,    2, 0x08 /* Private */,
      17,    0,  567,    2, 0x08 /* Private */,
      18,    0,  568,    2, 0x08 /* Private */,
      19,    0,  569,    2, 0x08 /* Private */,
      20,    0,  570,    2, 0x08 /* Private */,
      21,    0,  571,    2, 0x08 /* Private */,
      22,    0,  572,    2, 0x08 /* Private */,
      23,    0,  573,    2, 0x08 /* Private */,
      24,    0,  574,    2, 0x08 /* Private */,
      25,    0,  575,    2, 0x08 /* Private */,
      26,    1,  576,    2, 0x08 /* Private */,
      28,    1,  579,    2, 0x08 /* Private */,
      29,    0,  582,    2, 0x08 /* Private */,
      30,    0,  583,    2, 0x08 /* Private */,
      31,    0,  584,    2, 0x08 /* Private */,
      32,    0,  585,    2, 0x08 /* Private */,
      33,    0,  586,    2, 0x08 /* Private */,
      34,    0,  587,    2, 0x08 /* Private */,
      35,    0,  588,    2, 0x08 /* Private */,
      36,    0,  589,    2, 0x08 /* Private */,
      37,    0,  590,    2, 0x08 /* Private */,
      38,    0,  591,    2, 0x08 /* Private */,
      39,    0,  592,    2, 0x08 /* Private */,
      40,    0,  593,    2, 0x08 /* Private */,
      41,    1,  594,    2, 0x08 /* Private */,
      43,    1,  597,    2, 0x08 /* Private */,
      44,    0,  600,    2, 0x08 /* Private */,
      45,    0,  601,    2, 0x08 /* Private */,
      46,    0,  602,    2, 0x08 /* Private */,
      47,    0,  603,    2, 0x08 /* Private */,
      48,    0,  604,    2, 0x08 /* Private */,
      49,    0,  605,    2, 0x08 /* Private */,
      50,    0,  606,    2, 0x08 /* Private */,
      51,    0,  607,    2, 0x08 /* Private */,
      52,    0,  608,    2, 0x08 /* Private */,
      53,    1,  609,    2, 0x08 /* Private */,
      54,    1,  612,    2, 0x08 /* Private */,
      55,    0,  615,    2, 0x08 /* Private */,
      56,    0,  616,    2, 0x08 /* Private */,
      57,    0,  617,    2, 0x08 /* Private */,
      58,    0,  618,    2, 0x08 /* Private */,
      59,    0,  619,    2, 0x08 /* Private */,
      60,    0,  620,    2, 0x08 /* Private */,
      61,    0,  621,    2, 0x08 /* Private */,
      62,    0,  622,    2, 0x08 /* Private */,
      63,    0,  623,    2, 0x08 /* Private */,
      64,    0,  624,    2, 0x08 /* Private */,
      65,    0,  625,    2, 0x08 /* Private */,
      66,    0,  626,    2, 0x08 /* Private */,
      67,    0,  627,    2, 0x08 /* Private */,
      68,    0,  628,    2, 0x08 /* Private */,
      69,    0,  629,    2, 0x08 /* Private */,
      70,    0,  630,    2, 0x08 /* Private */,
      71,    0,  631,    2, 0x08 /* Private */,
      72,    0,  632,    2, 0x08 /* Private */,
      73,    0,  633,    2, 0x08 /* Private */,
      74,    0,  634,    2, 0x08 /* Private */,
      75,    0,  635,    2, 0x08 /* Private */,
      76,    0,  636,    2, 0x08 /* Private */,
      77,    0,  637,    2, 0x08 /* Private */,
      78,    0,  638,    2, 0x08 /* Private */,
      79,    2,  639,    2, 0x08 /* Private */,
      83,    0,  644,    2, 0x08 /* Private */,
      84,    0,  645,    2, 0x08 /* Private */,
      85,    0,  646,    2, 0x08 /* Private */,
      86,    0,  647,    2, 0x08 /* Private */,
      87,    0,  648,    2, 0x08 /* Private */,
      88,    0,  649,    2, 0x08 /* Private */,
      89,    0,  650,    2, 0x08 /* Private */,
      90,    0,  651,    2, 0x08 /* Private */,
      91,    0,  652,    2, 0x08 /* Private */,
      92,    0,  653,    2, 0x08 /* Private */,
      93,    0,  654,    2, 0x08 /* Private */,
      94,    0,  655,    2, 0x08 /* Private */,
      95,    0,  656,    2, 0x08 /* Private */,
      96,    0,  657,    2, 0x08 /* Private */,
      97,    0,  658,    2, 0x08 /* Private */,
      98,    0,  659,    2, 0x08 /* Private */,
      99,    0,  660,    2, 0x08 /* Private */,
     100,    0,  661,    2, 0x08 /* Private */,
     101,    0,  662,    2, 0x08 /* Private */,
     102,    0,  663,    2, 0x08 /* Private */,
     103,    0,  664,    2, 0x08 /* Private */,
     104,    0,  665,    2, 0x08 /* Private */,
     105,    0,  666,    2, 0x08 /* Private */,
     106,    0,  667,    2, 0x08 /* Private */,
     107,    0,  668,    2, 0x08 /* Private */,
     108,    0,  669,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 81,   80,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->videoStream1CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->videoStream2CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->audioStream1CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->audioStream2CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->videoDash1CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->videoDash2CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->videoDash3CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->videoDash4CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->videoDash5CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->videoDash6CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->videoDash7CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->audioDash1CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->audioDash2CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->audioDash3CheckBoxSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_videoSource1Browse_clicked(); break;
        case 15: _t->on_videoSource2Browse_clicked(); break;
        case 16: _t->on_audioSource1Browse_clicked(); break;
        case 17: _t->on_audioSource2Browse_clicked(); break;
        case 18: _t->on_startButton_clicked(); break;
        case 19: _t->on_ffplayButton_clicked(); break;
        case 20: _t->on_ffprobeButton_clicked(); break;
        case 21: _t->on_stopButton_clicked(); break;
        case 22: _t->on_destinationBrowse_clicked(); break;
        case 23: _t->replaceFile(); break;
        case 24: _t->on_codecVideoBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->on_codecAudioBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->videoStreams(); break;
        case 27: _t->audioStreams(); break;
        case 28: _t->setVideoCodec(); break;
        case 29: _t->setVideoContainer(); break;
        case 30: _t->setVideoBitrate(); break;
        case 31: _t->setSpinBoxReadOnly(); break;
        case 32: _t->setFrameSize(); break;
        case 33: _t->setVideoFilter(); break;
        case 34: _t->setFrameRate(); break;
        case 35: _t->setVideoTime(); break;
        case 36: _t->videoStream1CheckBox_stateChanged(); break;
        case 37: _t->videoStream2CheckBox_stateChanged(); break;
        case 38: _t->videoSource1BoxTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->videoSource2BoxTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->selectVideoStream(); break;
        case 41: _t->setPixelFormat(); break;
        case 42: _t->setAudioCodec(); break;
        case 43: _t->setAudioBitrate(); break;
        case 44: _t->setAudioFrequency(); break;
        case 45: _t->setAudioChannels(); break;
        case 46: _t->selectAudioStream(); break;
        case 47: _t->audioStream1CheckBox_stateChanged(); break;
        case 48: _t->audioStream2CheckBox_stateChanged(); break;
        case 49: _t->audioSource1BoxTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 50: _t->audioSource2BoxTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 51: _t->on_clearVideoSettings_clicked(); break;
        case 52: _t->on_clearAudioSettings_clicked(); break;
        case 53: _t->setNoAudioCheckBox(); break;
        case 54: _t->setNoVideoCheckBox(); break;
        case 55: _t->clearMemory(); break;
        case 56: _t->setBuffer1ReadOnly(); break;
        case 57: _t->setBuffer2ReadOnly(); break;
        case 58: _t->setBuffer3ReadOnly(); break;
        case 59: _t->setBuffer4ReadOnly(); break;
        case 60: _t->setBuffer5ReadOnly(); break;
        case 61: _t->setBuffer6ReadOnly(); break;
        case 62: _t->setBuffer7ReadOnly(); break;
        case 63: _t->mpegdashVideoCommand1(); break;
        case 64: _t->mpegdashVideoCommand2(); break;
        case 65: _t->mpegdashVideoCommand3(); break;
        case 66: _t->mpegdashVideoCommand4(); break;
        case 67: _t->mpegdashVideoCommand5(); break;
        case 68: _t->mpegdashVideoCommand6(); break;
        case 69: _t->mpegdashVideoCommand7(); break;
        case 70: _t->mpegdashAudioCommand1(); break;
        case 71: _t->mpegdashAudioCommand2(); break;
        case 72: _t->mpegdashAudioCommand3(); break;
        case 73: _t->on_mpegdashStartButton_clicked(); break;
        case 74: _t->on_mpegdashStopButton_clicked(); break;
        case 75: _t->onProcessFinishedDoublePass((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 76: _t->onProcessFinishedDashVideo12(); break;
        case 77: _t->onProcessFinishedDashVideo2(); break;
        case 78: _t->onProcessFinishedDashVideo22(); break;
        case 79: _t->onProcessFinishedDashVideo3(); break;
        case 80: _t->onProcessFinishedDashVideo32(); break;
        case 81: _t->onProcessFinishedDashVideo4(); break;
        case 82: _t->onProcessFinishedDashVideo42(); break;
        case 83: _t->onProcessFinishedDashVideo5(); break;
        case 84: _t->onProcessFinishedDashVideo52(); break;
        case 85: _t->onProcessFinishedDashVideo6(); break;
        case 86: _t->onProcessFinishedDashVideo62(); break;
        case 87: _t->onProcessFinishedDashVideo7(); break;
        case 88: _t->onProcessFinishedDashVideo72(); break;
        case 89: _t->onProcessFinishedDashAudio1(); break;
        case 90: _t->onProcessFinishedDashAudio2(); break;
        case 91: _t->onProcessFinishedDashAudio3(); break;
        case 92: _t->dashVideoCheckBox1_stateChanged(); break;
        case 93: _t->dashVideoCheckBox2_stateChanged(); break;
        case 94: _t->dashVideoCheckBox3_stateChanged(); break;
        case 95: _t->dashVideoCheckBox4_stateChanged(); break;
        case 96: _t->dashVideoCheckBox5_stateChanged(); break;
        case 97: _t->dashVideoCheckBox6_stateChanged(); break;
        case 98: _t->dashVideoCheckBox7_stateChanged(); break;
        case 99: _t->dashAudioCheckBox1_stateChanged(); break;
        case 100: _t->dashAudioCheckBox2_stateChanged(); break;
        case 101: _t->dashAudioCheckBox3_stateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoStream1CheckBoxSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoStream2CheckBoxSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::audioStream1CheckBoxSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::audioStream2CheckBoxSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoDash1CheckBoxSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoDash2CheckBoxSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoDash3CheckBoxSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoDash4CheckBoxSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoDash5CheckBoxSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoDash6CheckBoxSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::videoDash7CheckBoxSignal)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::audioDash1CheckBoxSignal)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::audioDash2CheckBoxSignal)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::audioDash3CheckBoxSignal)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 102)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 102;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 102)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 102;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::videoStream1CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::videoStream2CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::audioStream1CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::audioStream2CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::videoDash1CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::videoDash2CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::videoDash3CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::videoDash4CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::videoDash5CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::videoDash6CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::videoDash7CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::audioDash1CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::audioDash2CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::audioDash3CheckBoxSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

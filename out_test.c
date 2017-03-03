#include <stdio.h>
#include <stdlib.h>
#define DO_SHOW 1
#include "arch/cisc.h"
#include "arch/debug_macros.h"
int main() {
#define SOB_TRUE 5
#define SOB_FALSE 3
#define SOB_NIL 2
#define SOB_VOID 1
#define LOC_ENV 0
#define LOC_NUM_ARGS 1
#define SYM_TAB_START 385 
START_MACHINE;
JUMP(LETS_START);
#include "arch/char.lib"
#include "arch/io.lib"
#include "arch/scheme.lib"
#include "arch/math.lib"
#include "arch/string.lib"
#include "arch/system.lib"
#include "arch/project_proc.lib"
ERROR:
HALT;
LETS_START:
PUSH(0);
PUSH(0);
PUSH(0);
PUSH(FP);
MOV(FP, SP);
MOV(IND(0), IMM(625));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(10)), IMM(799345));
MOV(IND(IMM(11)), IMM(8));
MOV(IND(IMM(12)), IMM(115));
MOV(IND(IMM(13)), IMM(101));
MOV(IND(IMM(14)), IMM(116));
MOV(IND(IMM(15)), IMM(45));
MOV(IND(IMM(16)), IMM(99));
MOV(IND(IMM(17)), IMM(97));
MOV(IND(IMM(18)), IMM(114));
MOV(IND(IMM(19)), IMM(33));
MOV(IND(IMM(20)), IMM(799345));
MOV(IND(IMM(21)), IMM(8));
MOV(IND(IMM(22)), IMM(115));
MOV(IND(IMM(23)), IMM(101));
MOV(IND(IMM(24)), IMM(116));
MOV(IND(IMM(25)), IMM(45));
MOV(IND(IMM(26)), IMM(99));
MOV(IND(IMM(27)), IMM(100));
MOV(IND(IMM(28)), IMM(114));
MOV(IND(IMM(29)), IMM(33));
MOV(IND(IMM(30)), IMM(799345));
MOV(IND(IMM(31)), IMM(3));
MOV(IND(IMM(32)), IMM(101));
MOV(IND(IMM(33)), IMM(113));
MOV(IND(IMM(34)), IMM(63));
MOV(IND(IMM(35)), IMM(799345));
MOV(IND(IMM(36)), IMM(14));
MOV(IND(IMM(37)), IMM(115));
MOV(IND(IMM(38)), IMM(116));
MOV(IND(IMM(39)), IMM(114));
MOV(IND(IMM(40)), IMM(105));
MOV(IND(IMM(41)), IMM(110));
MOV(IND(IMM(42)), IMM(103));
MOV(IND(IMM(43)), IMM(45));
MOV(IND(IMM(44)), IMM(62));
MOV(IND(IMM(45)), IMM(115));
MOV(IND(IMM(46)), IMM(121));
MOV(IND(IMM(47)), IMM(109));
MOV(IND(IMM(48)), IMM(98));
MOV(IND(IMM(49)), IMM(111));
MOV(IND(IMM(50)), IMM(108));
MOV(IND(IMM(51)), IMM(799345));
MOV(IND(IMM(52)), IMM(14));
MOV(IND(IMM(53)), IMM(115));
MOV(IND(IMM(54)), IMM(121));
MOV(IND(IMM(55)), IMM(109));
MOV(IND(IMM(56)), IMM(98));
MOV(IND(IMM(57)), IMM(111));
MOV(IND(IMM(58)), IMM(108));
MOV(IND(IMM(59)), IMM(45));
MOV(IND(IMM(60)), IMM(62));
MOV(IND(IMM(61)), IMM(115));
MOV(IND(IMM(62)), IMM(116));
MOV(IND(IMM(63)), IMM(114));
MOV(IND(IMM(64)), IMM(105));
MOV(IND(IMM(65)), IMM(110));
MOV(IND(IMM(66)), IMM(103));
MOV(IND(IMM(67)), IMM(799345));
MOV(IND(IMM(68)), IMM(6));
MOV(IND(IMM(69)), IMM(108));
MOV(IND(IMM(70)), IMM(101));
MOV(IND(IMM(71)), IMM(110));
MOV(IND(IMM(72)), IMM(103));
MOV(IND(IMM(73)), IMM(116));
MOV(IND(IMM(74)), IMM(104));
MOV(IND(IMM(75)), IMM(799345));
MOV(IND(IMM(76)), IMM(5));
MOV(IND(IMM(77)), IMM(97));
MOV(IND(IMM(78)), IMM(112));
MOV(IND(IMM(79)), IMM(112));
MOV(IND(IMM(80)), IMM(108));
MOV(IND(IMM(81)), IMM(121));
MOV(IND(IMM(82)), IMM(799345));
MOV(IND(IMM(83)), IMM(6));
MOV(IND(IMM(84)), IMM(118));
MOV(IND(IMM(85)), IMM(101));
MOV(IND(IMM(86)), IMM(99));
MOV(IND(IMM(87)), IMM(116));
MOV(IND(IMM(88)), IMM(111));
MOV(IND(IMM(89)), IMM(114));
MOV(IND(IMM(90)), IMM(799345));
MOV(IND(IMM(91)), IMM(4));
MOV(IND(IMM(92)), IMM(108));
MOV(IND(IMM(93)), IMM(105));
MOV(IND(IMM(94)), IMM(115));
MOV(IND(IMM(95)), IMM(116));
MOV(IND(IMM(96)), IMM(799345));
MOV(IND(IMM(97)), IMM(3));
MOV(IND(IMM(98)), IMM(99));
MOV(IND(IMM(99)), IMM(100));
MOV(IND(IMM(100)), IMM(114));
MOV(IND(IMM(101)), IMM(799345));
MOV(IND(IMM(102)), IMM(3));
MOV(IND(IMM(103)), IMM(99));
MOV(IND(IMM(104)), IMM(97));
MOV(IND(IMM(105)), IMM(114));
MOV(IND(IMM(106)), IMM(799345));
MOV(IND(IMM(107)), IMM(4));
MOV(IND(IMM(108)), IMM(99));
MOV(IND(IMM(109)), IMM(111));
MOV(IND(IMM(110)), IMM(110));
MOV(IND(IMM(111)), IMM(115));
MOV(IND(IMM(112)), IMM(799345));
MOV(IND(IMM(113)), IMM(11));
MOV(IND(IMM(114)), IMM(109));
MOV(IND(IMM(115)), IMM(97));
MOV(IND(IMM(116)), IMM(107));
MOV(IND(IMM(117)), IMM(101));
MOV(IND(IMM(118)), IMM(45));
MOV(IND(IMM(119)), IMM(118));
MOV(IND(IMM(120)), IMM(101));
MOV(IND(IMM(121)), IMM(99));
MOV(IND(IMM(122)), IMM(116));
MOV(IND(IMM(123)), IMM(111));
MOV(IND(IMM(124)), IMM(114));
MOV(IND(IMM(125)), IMM(799345));
MOV(IND(IMM(126)), IMM(11));
MOV(IND(IMM(127)), IMM(118));
MOV(IND(IMM(128)), IMM(101));
MOV(IND(IMM(129)), IMM(99));
MOV(IND(IMM(130)), IMM(116));
MOV(IND(IMM(131)), IMM(111));
MOV(IND(IMM(132)), IMM(114));
MOV(IND(IMM(133)), IMM(45));
MOV(IND(IMM(134)), IMM(115));
MOV(IND(IMM(135)), IMM(101));
MOV(IND(IMM(136)), IMM(116));
MOV(IND(IMM(137)), IMM(33));
MOV(IND(IMM(138)), IMM(799345));
MOV(IND(IMM(139)), IMM(10));
MOV(IND(IMM(140)), IMM(118));
MOV(IND(IMM(141)), IMM(101));
MOV(IND(IMM(142)), IMM(99));
MOV(IND(IMM(143)), IMM(116));
MOV(IND(IMM(144)), IMM(111));
MOV(IND(IMM(145)), IMM(114));
MOV(IND(IMM(146)), IMM(45));
MOV(IND(IMM(147)), IMM(114));
MOV(IND(IMM(148)), IMM(101));
MOV(IND(IMM(149)), IMM(102));
MOV(IND(IMM(150)), IMM(799345));
MOV(IND(IMM(151)), IMM(13));
MOV(IND(IMM(152)), IMM(118));
MOV(IND(IMM(153)), IMM(101));
MOV(IND(IMM(154)), IMM(99));
MOV(IND(IMM(155)), IMM(116));
MOV(IND(IMM(156)), IMM(111));
MOV(IND(IMM(157)), IMM(114));
MOV(IND(IMM(158)), IMM(45));
MOV(IND(IMM(159)), IMM(108));
MOV(IND(IMM(160)), IMM(101));
MOV(IND(IMM(161)), IMM(110));
MOV(IND(IMM(162)), IMM(103));
MOV(IND(IMM(163)), IMM(116));
MOV(IND(IMM(164)), IMM(104));
MOV(IND(IMM(165)), IMM(799345));
MOV(IND(IMM(166)), IMM(11));
MOV(IND(IMM(167)), IMM(109));
MOV(IND(IMM(168)), IMM(97));
MOV(IND(IMM(169)), IMM(107));
MOV(IND(IMM(170)), IMM(101));
MOV(IND(IMM(171)), IMM(45));
MOV(IND(IMM(172)), IMM(115));
MOV(IND(IMM(173)), IMM(116));
MOV(IND(IMM(174)), IMM(114));
MOV(IND(IMM(175)), IMM(105));
MOV(IND(IMM(176)), IMM(110));
MOV(IND(IMM(177)), IMM(103));
MOV(IND(IMM(178)), IMM(799345));
MOV(IND(IMM(179)), IMM(11));
MOV(IND(IMM(180)), IMM(115));
MOV(IND(IMM(181)), IMM(116));
MOV(IND(IMM(182)), IMM(114));
MOV(IND(IMM(183)), IMM(105));
MOV(IND(IMM(184)), IMM(110));
MOV(IND(IMM(185)), IMM(103));
MOV(IND(IMM(186)), IMM(45));
MOV(IND(IMM(187)), IMM(115));
MOV(IND(IMM(188)), IMM(101));
MOV(IND(IMM(189)), IMM(116));
MOV(IND(IMM(190)), IMM(33));
MOV(IND(IMM(191)), IMM(799345));
MOV(IND(IMM(192)), IMM(10));
MOV(IND(IMM(193)), IMM(115));
MOV(IND(IMM(194)), IMM(116));
MOV(IND(IMM(195)), IMM(114));
MOV(IND(IMM(196)), IMM(105));
MOV(IND(IMM(197)), IMM(110));
MOV(IND(IMM(198)), IMM(103));
MOV(IND(IMM(199)), IMM(45));
MOV(IND(IMM(200)), IMM(114));
MOV(IND(IMM(201)), IMM(101));
MOV(IND(IMM(202)), IMM(102));
MOV(IND(IMM(203)), IMM(799345));
MOV(IND(IMM(204)), IMM(13));
MOV(IND(IMM(205)), IMM(115));
MOV(IND(IMM(206)), IMM(116));
MOV(IND(IMM(207)), IMM(114));
MOV(IND(IMM(208)), IMM(105));
MOV(IND(IMM(209)), IMM(110));
MOV(IND(IMM(210)), IMM(103));
MOV(IND(IMM(211)), IMM(45));
MOV(IND(IMM(212)), IMM(108));
MOV(IND(IMM(213)), IMM(101));
MOV(IND(IMM(214)), IMM(110));
MOV(IND(IMM(215)), IMM(103));
MOV(IND(IMM(216)), IMM(116));
MOV(IND(IMM(217)), IMM(104));
MOV(IND(IMM(218)), IMM(799345));
MOV(IND(IMM(219)), IMM(13));
MOV(IND(IMM(220)), IMM(105));
MOV(IND(IMM(221)), IMM(110));
MOV(IND(IMM(222)), IMM(116));
MOV(IND(IMM(223)), IMM(101));
MOV(IND(IMM(224)), IMM(103));
MOV(IND(IMM(225)), IMM(101));
MOV(IND(IMM(226)), IMM(114));
MOV(IND(IMM(227)), IMM(45));
MOV(IND(IMM(228)), IMM(62));
MOV(IND(IMM(229)), IMM(99));
MOV(IND(IMM(230)), IMM(104));
MOV(IND(IMM(231)), IMM(97));
MOV(IND(IMM(232)), IMM(114));
MOV(IND(IMM(233)), IMM(799345));
MOV(IND(IMM(234)), IMM(13));
MOV(IND(IMM(235)), IMM(99));
MOV(IND(IMM(236)), IMM(104));
MOV(IND(IMM(237)), IMM(97));
MOV(IND(IMM(238)), IMM(114));
MOV(IND(IMM(239)), IMM(45));
MOV(IND(IMM(240)), IMM(62));
MOV(IND(IMM(241)), IMM(105));
MOV(IND(IMM(242)), IMM(110));
MOV(IND(IMM(243)), IMM(116));
MOV(IND(IMM(244)), IMM(101));
MOV(IND(IMM(245)), IMM(103));
MOV(IND(IMM(246)), IMM(101));
MOV(IND(IMM(247)), IMM(114));
MOV(IND(IMM(248)), IMM(799345));
MOV(IND(IMM(249)), IMM(1));
MOV(IND(IMM(250)), IMM(61));
MOV(IND(IMM(251)), IMM(799345));
MOV(IND(IMM(252)), IMM(1));
MOV(IND(IMM(253)), IMM(62));
MOV(IND(IMM(254)), IMM(799345));
MOV(IND(IMM(255)), IMM(1));
MOV(IND(IMM(256)), IMM(60));
MOV(IND(IMM(257)), IMM(799345));
MOV(IND(IMM(258)), IMM(1));
MOV(IND(IMM(259)), IMM(47));
MOV(IND(IMM(260)), IMM(799345));
MOV(IND(IMM(261)), IMM(1));
MOV(IND(IMM(262)), IMM(42));
MOV(IND(IMM(263)), IMM(799345));
MOV(IND(IMM(264)), IMM(1));
MOV(IND(IMM(265)), IMM(45));
MOV(IND(IMM(266)), IMM(799345));
MOV(IND(IMM(267)), IMM(1));
MOV(IND(IMM(268)), IMM(43));
MOV(IND(IMM(269)), IMM(799345));
MOV(IND(IMM(270)), IMM(10));
MOV(IND(IMM(271)), IMM(112));
MOV(IND(IMM(272)), IMM(114));
MOV(IND(IMM(273)), IMM(111));
MOV(IND(IMM(274)), IMM(99));
MOV(IND(IMM(275)), IMM(101));
MOV(IND(IMM(276)), IMM(100));
MOV(IND(IMM(277)), IMM(117));
MOV(IND(IMM(278)), IMM(114));
MOV(IND(IMM(279)), IMM(101));
MOV(IND(IMM(280)), IMM(63));
MOV(IND(IMM(281)), IMM(799345));
MOV(IND(IMM(282)), IMM(7));
MOV(IND(IMM(283)), IMM(118));
MOV(IND(IMM(284)), IMM(101));
MOV(IND(IMM(285)), IMM(99));
MOV(IND(IMM(286)), IMM(116));
MOV(IND(IMM(287)), IMM(111));
MOV(IND(IMM(288)), IMM(114));
MOV(IND(IMM(289)), IMM(63));
MOV(IND(IMM(290)), IMM(799345));
MOV(IND(IMM(291)), IMM(5));
MOV(IND(IMM(292)), IMM(122));
MOV(IND(IMM(293)), IMM(101));
MOV(IND(IMM(294)), IMM(114));
MOV(IND(IMM(295)), IMM(111));
MOV(IND(IMM(296)), IMM(63));
MOV(IND(IMM(297)), IMM(799345));
MOV(IND(IMM(298)), IMM(7));
MOV(IND(IMM(299)), IMM(115));
MOV(IND(IMM(300)), IMM(121));
MOV(IND(IMM(301)), IMM(109));
MOV(IND(IMM(302)), IMM(98));
MOV(IND(IMM(303)), IMM(111));
MOV(IND(IMM(304)), IMM(108));
MOV(IND(IMM(305)), IMM(63));
MOV(IND(IMM(306)), IMM(799345));
MOV(IND(IMM(307)), IMM(7));
MOV(IND(IMM(308)), IMM(115));
MOV(IND(IMM(309)), IMM(116));
MOV(IND(IMM(310)), IMM(114));
MOV(IND(IMM(311)), IMM(105));
MOV(IND(IMM(312)), IMM(110));
MOV(IND(IMM(313)), IMM(103));
MOV(IND(IMM(314)), IMM(63));
MOV(IND(IMM(315)), IMM(799345));
MOV(IND(IMM(316)), IMM(5));
MOV(IND(IMM(317)), IMM(112));
MOV(IND(IMM(318)), IMM(97));
MOV(IND(IMM(319)), IMM(105));
MOV(IND(IMM(320)), IMM(114));
MOV(IND(IMM(321)), IMM(63));
MOV(IND(IMM(322)), IMM(799345));
MOV(IND(IMM(323)), IMM(5));
MOV(IND(IMM(324)), IMM(110));
MOV(IND(IMM(325)), IMM(117));
MOV(IND(IMM(326)), IMM(108));
MOV(IND(IMM(327)), IMM(108));
MOV(IND(IMM(328)), IMM(63));
MOV(IND(IMM(329)), IMM(799345));
MOV(IND(IMM(330)), IMM(5));
MOV(IND(IMM(331)), IMM(99));
MOV(IND(IMM(332)), IMM(104));
MOV(IND(IMM(333)), IMM(97));
MOV(IND(IMM(334)), IMM(114));
MOV(IND(IMM(335)), IMM(63));
MOV(IND(IMM(336)), IMM(799345));
MOV(IND(IMM(337)), IMM(8));
MOV(IND(IMM(338)), IMM(98));
MOV(IND(IMM(339)), IMM(111));
MOV(IND(IMM(340)), IMM(111));
MOV(IND(IMM(341)), IMM(108));
MOV(IND(IMM(342)), IMM(101));
MOV(IND(IMM(343)), IMM(97));
MOV(IND(IMM(344)), IMM(110));
MOV(IND(IMM(345)), IMM(63));
MOV(IND(IMM(346)), IMM(799345));
MOV(IND(IMM(347)), IMM(8));
MOV(IND(IMM(348)), IMM(105));
MOV(IND(IMM(349)), IMM(110));
MOV(IND(IMM(350)), IMM(116));
MOV(IND(IMM(351)), IMM(101));
MOV(IND(IMM(352)), IMM(103));
MOV(IND(IMM(353)), IMM(101));
MOV(IND(IMM(354)), IMM(114));
MOV(IND(IMM(355)), IMM(63));
MOV(IND(IMM(356)), IMM(799345));
MOV(IND(IMM(357)), IMM(7));
MOV(IND(IMM(358)), IMM(110));
MOV(IND(IMM(359)), IMM(117));
MOV(IND(IMM(360)), IMM(109));
MOV(IND(IMM(361)), IMM(98));
MOV(IND(IMM(362)), IMM(101));
MOV(IND(IMM(363)), IMM(114));
MOV(IND(IMM(364)), IMM(63));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(INDD(385, 0), IMM(368031));
MOV(INDD(385, 1), IMM(388));
MOV(INDD(385, 2), IMM(390));
MOV(INDD(385, 3), IMM(10));
PUSH(LABEL(SET_CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(385, 4), R0);
MOV(INDD(390, 0), IMM(368031));
MOV(INDD(390, 1), IMM(393));
MOV(INDD(390, 2), IMM(395));
MOV(INDD(390, 3), IMM(20));
PUSH(LABEL(SET_CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(390, 4), R0);
MOV(INDD(395, 0), IMM(368031));
MOV(INDD(395, 1), IMM(398));
MOV(INDD(395, 2), IMM(400));
MOV(INDD(395, 3), IMM(30));
PUSH(LABEL(EQ)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(395, 4), R0);
MOV(INDD(400, 0), IMM(368031));
MOV(INDD(400, 1), IMM(403));
MOV(INDD(400, 2), IMM(405));
MOV(INDD(400, 3), IMM(35));
PUSH(LABEL(STRING_TO_SYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(400, 4), R0);
MOV(INDD(405, 0), IMM(368031));
MOV(INDD(405, 1), IMM(408));
MOV(INDD(405, 2), IMM(410));
MOV(INDD(405, 3), IMM(51));
PUSH(LABEL(SYMBOL_TO_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(405, 4), R0);
MOV(INDD(410, 0), IMM(368031));
MOV(INDD(410, 1), IMM(413));
MOV(INDD(410, 2), IMM(415));
MOV(INDD(410, 3), IMM(67));
MOV(R0, 0);MOV(INDD(410, 4), R0);
MOV(INDD(415, 0), IMM(368031));
MOV(INDD(415, 1), IMM(418));
MOV(INDD(415, 2), IMM(420));
MOV(INDD(415, 3), IMM(75));
PUSH(LABEL(APPLY_TC)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(415, 4), R0);
MOV(INDD(420, 0), IMM(368031));
MOV(INDD(420, 1), IMM(423));
MOV(INDD(420, 2), IMM(425));
MOV(INDD(420, 3), IMM(82));
MOV(R0, 0);MOV(INDD(420, 4), R0);
MOV(INDD(425, 0), IMM(368031));
MOV(INDD(425, 1), IMM(428));
MOV(INDD(425, 2), IMM(430));
MOV(INDD(425, 3), IMM(90));
MOV(R0, 0);MOV(INDD(425, 4), R0);
MOV(INDD(430, 0), IMM(368031));
MOV(INDD(430, 1), IMM(433));
MOV(INDD(430, 2), IMM(435));
MOV(INDD(430, 3), IMM(96));
PUSH(LABEL(CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(430, 4), R0);
MOV(INDD(435, 0), IMM(368031));
MOV(INDD(435, 1), IMM(438));
MOV(INDD(435, 2), IMM(440));
MOV(INDD(435, 3), IMM(101));
PUSH(LABEL(CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(435, 4), R0);
MOV(INDD(440, 0), IMM(368031));
MOV(INDD(440, 1), IMM(443));
MOV(INDD(440, 2), IMM(445));
MOV(INDD(440, 3), IMM(106));
PUSH(LABEL(CONS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(440, 4), R0);
MOV(INDD(445, 0), IMM(368031));
MOV(INDD(445, 1), IMM(448));
MOV(INDD(445, 2), IMM(450));
MOV(INDD(445, 3), IMM(112));
PUSH(LABEL(MAKE_VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(445, 4), R0);
MOV(INDD(450, 0), IMM(368031));
MOV(INDD(450, 1), IMM(453));
MOV(INDD(450, 2), IMM(455));
MOV(INDD(450, 3), IMM(125));
PUSH(LABEL(VECTOR_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(450, 4), R0);
MOV(INDD(455, 0), IMM(368031));
MOV(INDD(455, 1), IMM(458));
MOV(INDD(455, 2), IMM(460));
MOV(INDD(455, 3), IMM(138));
PUSH(LABEL(VECTOR_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(455, 4), R0);
MOV(INDD(460, 0), IMM(368031));
MOV(INDD(460, 1), IMM(463));
MOV(INDD(460, 2), IMM(465));
MOV(INDD(460, 3), IMM(150));
PUSH(LABEL(VECTOR_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(460, 4), R0);
MOV(INDD(465, 0), IMM(368031));
MOV(INDD(465, 1), IMM(468));
MOV(INDD(465, 2), IMM(470));
MOV(INDD(465, 3), IMM(165));
PUSH(LABEL(MAKE_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(465, 4), R0);
MOV(INDD(470, 0), IMM(368031));
MOV(INDD(470, 1), IMM(473));
MOV(INDD(470, 2), IMM(475));
MOV(INDD(470, 3), IMM(178));
PUSH(LABEL(STRING_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(470, 4), R0);
MOV(INDD(475, 0), IMM(368031));
MOV(INDD(475, 1), IMM(478));
MOV(INDD(475, 2), IMM(480));
MOV(INDD(475, 3), IMM(191));
PUSH(LABEL(STRING_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(475, 4), R0);
MOV(INDD(480, 0), IMM(368031));
MOV(INDD(480, 1), IMM(483));
MOV(INDD(480, 2), IMM(485));
MOV(INDD(480, 3), IMM(203));
PUSH(LABEL(STRING_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(480, 4), R0);
MOV(INDD(485, 0), IMM(368031));
MOV(INDD(485, 1), IMM(488));
MOV(INDD(485, 2), IMM(490));
MOV(INDD(485, 3), IMM(218));
PUSH(LABEL(INTEGER_TO_CHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(485, 4), R0);
MOV(INDD(490, 0), IMM(368031));
MOV(INDD(490, 1), IMM(493));
MOV(INDD(490, 2), IMM(495));
MOV(INDD(490, 3), IMM(233));
PUSH(LABEL(CHAR_TO_INTEGER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(490, 4), R0);
MOV(INDD(495, 0), IMM(368031));
MOV(INDD(495, 1), IMM(498));
MOV(INDD(495, 2), IMM(500));
MOV(INDD(495, 3), IMM(248));
PUSH(LABEL(VARIADIC_EQUAL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(495, 4), R0);
MOV(INDD(500, 0), IMM(368031));
MOV(INDD(500, 1), IMM(503));
MOV(INDD(500, 2), IMM(505));
MOV(INDD(500, 3), IMM(251));
PUSH(LABEL(VARIADIC_GT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(500, 4), R0);
MOV(INDD(505, 0), IMM(368031));
MOV(INDD(505, 1), IMM(508));
MOV(INDD(505, 2), IMM(510));
MOV(INDD(505, 3), IMM(254));
PUSH(LABEL(VARIADIC_LT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(505, 4), R0);
MOV(INDD(510, 0), IMM(368031));
MOV(INDD(510, 1), IMM(513));
MOV(INDD(510, 2), IMM(515));
MOV(INDD(510, 3), IMM(257));
PUSH(LABEL(VARIADIC_DIV)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(510, 4), R0);
MOV(INDD(515, 0), IMM(368031));
MOV(INDD(515, 1), IMM(518));
MOV(INDD(515, 2), IMM(520));
MOV(INDD(515, 3), IMM(260));
PUSH(LABEL(VARIADIC_MUL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(515, 4), R0);
MOV(INDD(520, 0), IMM(368031));
MOV(INDD(520, 1), IMM(523));
MOV(INDD(520, 2), IMM(525));
MOV(INDD(520, 3), IMM(263));
PUSH(LABEL(VARIADIC_MINUS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(520, 4), R0);
MOV(INDD(525, 0), IMM(368031));
MOV(INDD(525, 1), IMM(528));
MOV(INDD(525, 2), IMM(530));
MOV(INDD(525, 3), IMM(266));
PUSH(LABEL(VARIADIC_PLUS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(525, 4), R0);
MOV(INDD(530, 0), IMM(368031));
MOV(INDD(530, 1), IMM(533));
MOV(INDD(530, 2), IMM(535));
MOV(INDD(530, 3), IMM(269));
PUSH(LABEL(IS_PROCEDURE)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(530, 4), R0);
MOV(INDD(535, 0), IMM(368031));
MOV(INDD(535, 1), IMM(538));
MOV(INDD(535, 2), IMM(540));
MOV(INDD(535, 3), IMM(281));
PUSH(LABEL(IS_VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(535, 4), R0);
MOV(INDD(540, 0), IMM(368031));
MOV(INDD(540, 1), IMM(543));
MOV(INDD(540, 2), IMM(545));
MOV(INDD(540, 3), IMM(290));
PUSH(LABEL(IS_ZERO_MY)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(540, 4), R0);
MOV(INDD(545, 0), IMM(368031));
MOV(INDD(545, 1), IMM(548));
MOV(INDD(545, 2), IMM(550));
MOV(INDD(545, 3), IMM(297));
PUSH(LABEL(IS_SYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(545, 4), R0);
MOV(INDD(550, 0), IMM(368031));
MOV(INDD(550, 1), IMM(553));
MOV(INDD(550, 2), IMM(555));
MOV(INDD(550, 3), IMM(306));
PUSH(LABEL(IS_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(550, 4), R0);
MOV(INDD(555, 0), IMM(368031));
MOV(INDD(555, 1), IMM(558));
MOV(INDD(555, 2), IMM(560));
MOV(INDD(555, 3), IMM(315));
PUSH(LABEL(IS_PAIR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(555, 4), R0);
MOV(INDD(560, 0), IMM(368031));
MOV(INDD(560, 1), IMM(563));
MOV(INDD(560, 2), IMM(565));
MOV(INDD(560, 3), IMM(322));
PUSH(LABEL(IS_NULL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(560, 4), R0);
MOV(INDD(565, 0), IMM(368031));
MOV(INDD(565, 1), IMM(568));
MOV(INDD(565, 2), IMM(570));
MOV(INDD(565, 3), IMM(329));
PUSH(LABEL(IS_CHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(565, 4), R0);
MOV(INDD(570, 0), IMM(368031));
MOV(INDD(570, 1), IMM(573));
MOV(INDD(570, 2), IMM(575));
MOV(INDD(570, 3), IMM(336));
PUSH(LABEL(IS_BOOLEAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(570, 4), R0);
MOV(INDD(575, 0), IMM(368031));
MOV(INDD(575, 1), IMM(578));
MOV(INDD(575, 2), IMM(580));
MOV(INDD(575, 3), IMM(346));
PUSH(LABEL(IS_INTEGER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(575, 4), R0);
MOV(INDD(580, 0), IMM(368031));
MOV(INDD(580, 1), IMM(583));
MOV(INDD(580, 2), IMM(585));
MOV(INDD(580, 3), IMM(356));
PUSH(LABEL(IS_NUMBER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(580, 4), R0);
MOV(INDD(580, 2), 2);



/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop34:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit34);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop34);
LabelEnvLoopExit34: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop34:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit34);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop34);
LabelparamsoopExit34: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody34)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd34);
LabelClosureBody34:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- P-Var: --- */
MOV(R0, FPARG(2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd34:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);




/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop30:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit30);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop30);
LabelEnvLoopExit30: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop30:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit30);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop30);
LabelparamsoopExit30: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody30)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd30);
LabelClosureBody30:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop31:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit31);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop31);
LabelEnvLoopExit31: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop31:
CMP(R5,IMM(4));
JUMP_GE(LabelparamsoopExit31);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop31);
LabelparamsoopExit31: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody31)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd31);
LabelClosureBody31:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(3));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop32:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit32);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop32);
LabelEnvLoopExit32: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop32:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit32);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop32);
LabelparamsoopExit32: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody32)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd32);
LabelClosureBody32:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(3));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(4));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 3; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop33:
CMP(R5,IMM(3));
JUMP_GE(LabelEnvLoopExit33);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop33);
LabelEnvLoopExit33: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop33:
CMP(R5,IMM(5));
JUMP_GE(LabelparamsoopExit33);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop33);
LabelparamsoopExit33: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody33)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd33);
LabelClosureBody33:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(2)));
MOV(R3,INDD(R2,IMM(1)));
MOV(R0,R3);
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd33:
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop19:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit19);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop19);
LabelTailExit19:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd32:
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(4)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop18:
CMP(R4, IMM(6));
JUMP_EQ(LabelTailExit18);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop18);
LabelTailExit18:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd31:
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop17:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit17);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop17);
LabelTailExit17:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd30:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);




/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop29:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit29);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop29);
LabelEnvLoopExit29: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop29:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit29);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop29);
LabelparamsoopExit29: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody29)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd29);
LabelClosureBody29:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- P-Var: --- */
MOV(R0, FPARG(2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd29:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop28:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit28);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop28);
LabelEnvLoopExit28: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop28:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit28);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop28);
LabelparamsoopExit28: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody28)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd28);
LabelClosureBody28:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop16:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit16);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop16);
LabelTailExit16:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd28:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop25:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit25);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop25);
LabelEnvLoopExit25: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop25:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit25);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop25);
LabelparamsoopExit25: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody25)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd25);
LabelClosureBody25:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop26:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit26);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop26);
LabelEnvLoopExit26: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop26:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit26);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop26);
LabelparamsoopExit26: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody26)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd26);
LabelClosureBody26:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop27:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit27);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop27);
LabelEnvLoopExit27: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop27:
CMP(R5,IMM(4));
JUMP_GE(LabelparamsoopExit27);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop27);
LabelparamsoopExit27: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody27)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd27);
LabelClosureBody27:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(1)));
MOV(R0,R3);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop15:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit15);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop15);
LabelTailExit15:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd27:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd26:

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop14:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit14);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop14);
LabelTailExit14:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd25:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop23:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit23);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop23);
LabelEnvLoopExit23: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop23:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit23);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop23);
LabelparamsoopExit23: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody23)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd23);
LabelClosureBody23:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop24:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit24);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop24);
LabelEnvLoopExit24: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop24:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit24);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop24);
LabelparamsoopExit24: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody24)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd24);
LabelClosureBody24:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- P-Var: --- */
MOV(R0, FPARG(2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd24:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd23:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);




/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop22:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit22);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop22);
LabelEnvLoopExit22: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop22:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit22);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop22);
LabelparamsoopExit22: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody22)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd22);
LabelClosureBody22:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- P-Var: --- */
MOV(R0, FPARG(2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd22:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop21:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit21);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop21);
LabelEnvLoopExit21: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop21:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit21);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop21);
LabelparamsoopExit21: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody21)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd21);
LabelClosureBody21:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop13:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit13);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop13);
LabelTailExit13:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd21:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop18:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit18);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop18);
LabelEnvLoopExit18: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop18:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit18);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop18);
LabelparamsoopExit18: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody18)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd18);
LabelClosureBody18:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop19:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit19);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop19);
LabelEnvLoopExit19: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop19:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit19);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop19);
LabelparamsoopExit19: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody19)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd19);
LabelClosureBody19:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop20:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit20);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop20);
LabelEnvLoopExit20: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop20:
CMP(R5,IMM(4));
JUMP_GE(LabelparamsoopExit20);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop20);
LabelparamsoopExit20: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody20)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd20);
LabelClosureBody20:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(1)));
MOV(R0,R3);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop12:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit12);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop12);
LabelTailExit12:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd20:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd19:

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop11:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit11);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop11);
LabelTailExit11:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd18:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop16:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit16);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop16);
LabelEnvLoopExit16: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop16:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit16);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop16);
LabelparamsoopExit16: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody16)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd16);
LabelClosureBody16:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop17:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit17);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop17);
LabelEnvLoopExit17: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop17:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit17);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop17);
LabelparamsoopExit17: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody17)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd17);
LabelClosureBody17:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop10:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit10);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop10);
LabelTailExit10:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd17:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd16:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);




/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop15:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit15);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop15);
LabelEnvLoopExit15: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop15:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit15);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop15);
LabelparamsoopExit15: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody15)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd15);
LabelClosureBody15:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- P-Var: --- */
MOV(R0, FPARG(2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd15:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop14:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit14);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop14);
LabelEnvLoopExit14: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop14:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit14);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop14);
LabelparamsoopExit14: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody14)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd14);
LabelClosureBody14:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop9:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit9);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop9);
LabelTailExit9:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd14:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop11:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit11);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop11);
LabelEnvLoopExit11: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop11:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit11);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop11);
LabelparamsoopExit11: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody11)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd11);
LabelClosureBody11:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop12:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit12);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop12);
LabelEnvLoopExit12: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop12:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit12);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop12);
LabelparamsoopExit12: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody12)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd12);
LabelClosureBody12:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop13:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit13);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop13);
LabelEnvLoopExit13: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop13:
CMP(R5,IMM(4));
JUMP_GE(LabelparamsoopExit13);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop13);
LabelparamsoopExit13: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody13)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd13);
LabelClosureBody13:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(1)));
MOV(R0,R3);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop8:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit8);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop8);
LabelTailExit8:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd13:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd12:

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop7:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit7);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop7);
LabelTailExit7:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd11:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop9:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit9);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop9);
LabelEnvLoopExit9: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop9:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit9);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop9);
LabelparamsoopExit9: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody9)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd9);
LabelClosureBody9:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop10:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit10);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop10);
LabelEnvLoopExit10: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop10:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit10);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop10);
LabelparamsoopExit10: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody10)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd10);
LabelClosureBody10:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop6:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit6);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop6);
LabelTailExit6:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd10:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd9:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);




/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop8:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit8);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop8);
LabelEnvLoopExit8: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop8:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit8);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop8);
LabelparamsoopExit8: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody8)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd8);
LabelClosureBody8:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- P-Var: --- */
MOV(R0, FPARG(2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd8:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop7:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit7);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop7);
LabelEnvLoopExit7: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop7:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit7);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop7);
LabelparamsoopExit7: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody7)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd7);
LabelClosureBody7:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop5:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit5);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop5);
LabelTailExit5:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd7:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop4:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit4);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop4);
LabelEnvLoopExit4: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop4:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit4);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop4);
LabelparamsoopExit4: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody4)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd4);
LabelClosureBody4:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop5:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit5);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop5);
LabelEnvLoopExit5: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop5:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit5);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop5);
LabelparamsoopExit5: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody5)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd5);
LabelClosureBody5:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop6:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit6);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop6);
LabelEnvLoopExit6: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop6:
CMP(R5,IMM(4));
JUMP_GE(LabelparamsoopExit6);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop6);
LabelparamsoopExit6: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody6)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd6);
LabelClosureBody6:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(1)));
MOV(R0,R3);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop4:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit4);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop4);
LabelTailExit4:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd6:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd5:

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop3:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit3);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop3);
LabelTailExit3:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd4:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop2:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit2);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop2);
LabelEnvLoopExit2: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop2:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit2);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop2);
LabelparamsoopExit2: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody2)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd2);
LabelClosureBody2:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop3:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit3);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop3);
LabelEnvLoopExit3: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop3:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit3);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop3);
LabelparamsoopExit3: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody3)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd3);
LabelClosureBody3:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop2:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit2);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop2);
LabelTailExit2:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd3:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd2:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop1:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit1);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop1);
LabelEnvLoopExit1: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop1:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit1);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop1);
LabelparamsoopExit1: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody1)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd1);
LabelClosureBody1:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop1:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit1);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop1);
LabelTailExit1:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd1:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);

POP(FP);
DROP(IMM(3));
PROG_ENDING:
STOP_MACHINE;
return 0;
}
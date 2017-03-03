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

/* In constants .. */
MOV(R0,IMM(3));
CALL(PRINT_R0);

POP(FP);
DROP(IMM(3));
PROG_ENDING:
STOP_MACHINE;
return 0;
}

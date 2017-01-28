#include <stdio.h>
#include <stdlib.h>
#include "arch/cisc.h"
int main() {
#define SOB_TRUE 5
#define SOB_FALSE 3
#define SOB_NIL 2
#define SOB_VOID 1
#define LOC_ENV 0
#define LOC_NUM_ARGS 1
#define SYM_TAB_START 424 
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
MOV(IND(0), IMM(707));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(10)), IMM(799345));
MOV(IND(IMM(11)), IMM(1));
MOV(IND(IMM(12)), IMM(97));
MOV(IND(IMM(13)), IMM(799345));
MOV(IND(IMM(14)), IMM(1));
MOV(IND(IMM(15)), IMM(101));
MOV(IND(IMM(16)), IMM(799345));
MOV(IND(IMM(17)), IMM(3));
MOV(IND(IMM(18)), IMM(98));
MOV(IND(IMM(19)), IMM(111));
MOV(IND(IMM(20)), IMM(98));
MOV(IND(IMM(21)), IMM(799345));
MOV(IND(IMM(22)), IMM(4));
MOV(IND(IMM(23)), IMM(116));
MOV(IND(IMM(24)), IMM(101));
MOV(IND(IMM(25)), IMM(115));
MOV(IND(IMM(26)), IMM(116));
MOV(IND(IMM(27)), IMM(799345));
MOV(IND(IMM(28)), IMM(2));
MOV(IND(IMM(29)), IMM(99));
MOV(IND(IMM(30)), IMM(50));
MOV(IND(IMM(31)), IMM(799345));
MOV(IND(IMM(32)), IMM(2));
MOV(IND(IMM(33)), IMM(99));
MOV(IND(IMM(34)), IMM(49));
MOV(IND(IMM(35)), IMM(799345));
MOV(IND(IMM(36)), IMM(12));
MOV(IND(IMM(37)), IMM(109));
MOV(IND(IMM(38)), IMM(97));
MOV(IND(IMM(39)), IMM(107));
MOV(IND(IMM(40)), IMM(101));
MOV(IND(IMM(41)), IMM(45));
MOV(IND(IMM(42)), IMM(99));
MOV(IND(IMM(43)), IMM(111));
MOV(IND(IMM(44)), IMM(117));
MOV(IND(IMM(45)), IMM(110));
MOV(IND(IMM(46)), IMM(116));
MOV(IND(IMM(47)), IMM(101));
MOV(IND(IMM(48)), IMM(114));
MOV(IND(IMM(49)), IMM(799345));
MOV(IND(IMM(50)), IMM(8));
MOV(IND(IMM(51)), IMM(115));
MOV(IND(IMM(52)), IMM(101));
MOV(IND(IMM(53)), IMM(116));
MOV(IND(IMM(54)), IMM(45));
MOV(IND(IMM(55)), IMM(99));
MOV(IND(IMM(56)), IMM(97));
MOV(IND(IMM(57)), IMM(114));
MOV(IND(IMM(58)), IMM(33));
MOV(IND(IMM(59)), IMM(799345));
MOV(IND(IMM(60)), IMM(8));
MOV(IND(IMM(61)), IMM(115));
MOV(IND(IMM(62)), IMM(101));
MOV(IND(IMM(63)), IMM(116));
MOV(IND(IMM(64)), IMM(45));
MOV(IND(IMM(65)), IMM(99));
MOV(IND(IMM(66)), IMM(100));
MOV(IND(IMM(67)), IMM(114));
MOV(IND(IMM(68)), IMM(33));
MOV(IND(IMM(69)), IMM(799345));
MOV(IND(IMM(70)), IMM(3));
MOV(IND(IMM(71)), IMM(101));
MOV(IND(IMM(72)), IMM(113));
MOV(IND(IMM(73)), IMM(63));
MOV(IND(IMM(74)), IMM(799345));
MOV(IND(IMM(75)), IMM(14));
MOV(IND(IMM(76)), IMM(115));
MOV(IND(IMM(77)), IMM(116));
MOV(IND(IMM(78)), IMM(114));
MOV(IND(IMM(79)), IMM(105));
MOV(IND(IMM(80)), IMM(110));
MOV(IND(IMM(81)), IMM(103));
MOV(IND(IMM(82)), IMM(45));
MOV(IND(IMM(83)), IMM(62));
MOV(IND(IMM(84)), IMM(115));
MOV(IND(IMM(85)), IMM(121));
MOV(IND(IMM(86)), IMM(109));
MOV(IND(IMM(87)), IMM(98));
MOV(IND(IMM(88)), IMM(111));
MOV(IND(IMM(89)), IMM(108));
MOV(IND(IMM(90)), IMM(799345));
MOV(IND(IMM(91)), IMM(14));
MOV(IND(IMM(92)), IMM(115));
MOV(IND(IMM(93)), IMM(121));
MOV(IND(IMM(94)), IMM(109));
MOV(IND(IMM(95)), IMM(98));
MOV(IND(IMM(96)), IMM(111));
MOV(IND(IMM(97)), IMM(108));
MOV(IND(IMM(98)), IMM(45));
MOV(IND(IMM(99)), IMM(62));
MOV(IND(IMM(100)), IMM(115));
MOV(IND(IMM(101)), IMM(116));
MOV(IND(IMM(102)), IMM(114));
MOV(IND(IMM(103)), IMM(105));
MOV(IND(IMM(104)), IMM(110));
MOV(IND(IMM(105)), IMM(103));
MOV(IND(IMM(106)), IMM(799345));
MOV(IND(IMM(107)), IMM(6));
MOV(IND(IMM(108)), IMM(108));
MOV(IND(IMM(109)), IMM(101));
MOV(IND(IMM(110)), IMM(110));
MOV(IND(IMM(111)), IMM(103));
MOV(IND(IMM(112)), IMM(116));
MOV(IND(IMM(113)), IMM(104));
MOV(IND(IMM(114)), IMM(799345));
MOV(IND(IMM(115)), IMM(5));
MOV(IND(IMM(116)), IMM(97));
MOV(IND(IMM(117)), IMM(112));
MOV(IND(IMM(118)), IMM(112));
MOV(IND(IMM(119)), IMM(108));
MOV(IND(IMM(120)), IMM(121));
MOV(IND(IMM(121)), IMM(799345));
MOV(IND(IMM(122)), IMM(6));
MOV(IND(IMM(123)), IMM(118));
MOV(IND(IMM(124)), IMM(101));
MOV(IND(IMM(125)), IMM(99));
MOV(IND(IMM(126)), IMM(116));
MOV(IND(IMM(127)), IMM(111));
MOV(IND(IMM(128)), IMM(114));
MOV(IND(IMM(129)), IMM(799345));
MOV(IND(IMM(130)), IMM(4));
MOV(IND(IMM(131)), IMM(108));
MOV(IND(IMM(132)), IMM(105));
MOV(IND(IMM(133)), IMM(115));
MOV(IND(IMM(134)), IMM(116));
MOV(IND(IMM(135)), IMM(799345));
MOV(IND(IMM(136)), IMM(3));
MOV(IND(IMM(137)), IMM(99));
MOV(IND(IMM(138)), IMM(100));
MOV(IND(IMM(139)), IMM(114));
MOV(IND(IMM(140)), IMM(799345));
MOV(IND(IMM(141)), IMM(3));
MOV(IND(IMM(142)), IMM(99));
MOV(IND(IMM(143)), IMM(97));
MOV(IND(IMM(144)), IMM(114));
MOV(IND(IMM(145)), IMM(799345));
MOV(IND(IMM(146)), IMM(4));
MOV(IND(IMM(147)), IMM(99));
MOV(IND(IMM(148)), IMM(111));
MOV(IND(IMM(149)), IMM(110));
MOV(IND(IMM(150)), IMM(115));
MOV(IND(IMM(151)), IMM(799345));
MOV(IND(IMM(152)), IMM(11));
MOV(IND(IMM(153)), IMM(109));
MOV(IND(IMM(154)), IMM(97));
MOV(IND(IMM(155)), IMM(107));
MOV(IND(IMM(156)), IMM(101));
MOV(IND(IMM(157)), IMM(45));
MOV(IND(IMM(158)), IMM(118));
MOV(IND(IMM(159)), IMM(101));
MOV(IND(IMM(160)), IMM(99));
MOV(IND(IMM(161)), IMM(116));
MOV(IND(IMM(162)), IMM(111));
MOV(IND(IMM(163)), IMM(114));
MOV(IND(IMM(164)), IMM(799345));
MOV(IND(IMM(165)), IMM(11));
MOV(IND(IMM(166)), IMM(118));
MOV(IND(IMM(167)), IMM(101));
MOV(IND(IMM(168)), IMM(99));
MOV(IND(IMM(169)), IMM(116));
MOV(IND(IMM(170)), IMM(111));
MOV(IND(IMM(171)), IMM(114));
MOV(IND(IMM(172)), IMM(45));
MOV(IND(IMM(173)), IMM(115));
MOV(IND(IMM(174)), IMM(101));
MOV(IND(IMM(175)), IMM(116));
MOV(IND(IMM(176)), IMM(33));
MOV(IND(IMM(177)), IMM(799345));
MOV(IND(IMM(178)), IMM(10));
MOV(IND(IMM(179)), IMM(118));
MOV(IND(IMM(180)), IMM(101));
MOV(IND(IMM(181)), IMM(99));
MOV(IND(IMM(182)), IMM(116));
MOV(IND(IMM(183)), IMM(111));
MOV(IND(IMM(184)), IMM(114));
MOV(IND(IMM(185)), IMM(45));
MOV(IND(IMM(186)), IMM(114));
MOV(IND(IMM(187)), IMM(101));
MOV(IND(IMM(188)), IMM(102));
MOV(IND(IMM(189)), IMM(799345));
MOV(IND(IMM(190)), IMM(13));
MOV(IND(IMM(191)), IMM(118));
MOV(IND(IMM(192)), IMM(101));
MOV(IND(IMM(193)), IMM(99));
MOV(IND(IMM(194)), IMM(116));
MOV(IND(IMM(195)), IMM(111));
MOV(IND(IMM(196)), IMM(114));
MOV(IND(IMM(197)), IMM(45));
MOV(IND(IMM(198)), IMM(108));
MOV(IND(IMM(199)), IMM(101));
MOV(IND(IMM(200)), IMM(110));
MOV(IND(IMM(201)), IMM(103));
MOV(IND(IMM(202)), IMM(116));
MOV(IND(IMM(203)), IMM(104));
MOV(IND(IMM(204)), IMM(799345));
MOV(IND(IMM(205)), IMM(11));
MOV(IND(IMM(206)), IMM(109));
MOV(IND(IMM(207)), IMM(97));
MOV(IND(IMM(208)), IMM(107));
MOV(IND(IMM(209)), IMM(101));
MOV(IND(IMM(210)), IMM(45));
MOV(IND(IMM(211)), IMM(115));
MOV(IND(IMM(212)), IMM(116));
MOV(IND(IMM(213)), IMM(114));
MOV(IND(IMM(214)), IMM(105));
MOV(IND(IMM(215)), IMM(110));
MOV(IND(IMM(216)), IMM(103));
MOV(IND(IMM(217)), IMM(799345));
MOV(IND(IMM(218)), IMM(11));
MOV(IND(IMM(219)), IMM(115));
MOV(IND(IMM(220)), IMM(116));
MOV(IND(IMM(221)), IMM(114));
MOV(IND(IMM(222)), IMM(105));
MOV(IND(IMM(223)), IMM(110));
MOV(IND(IMM(224)), IMM(103));
MOV(IND(IMM(225)), IMM(45));
MOV(IND(IMM(226)), IMM(115));
MOV(IND(IMM(227)), IMM(101));
MOV(IND(IMM(228)), IMM(116));
MOV(IND(IMM(229)), IMM(33));
MOV(IND(IMM(230)), IMM(799345));
MOV(IND(IMM(231)), IMM(10));
MOV(IND(IMM(232)), IMM(115));
MOV(IND(IMM(233)), IMM(116));
MOV(IND(IMM(234)), IMM(114));
MOV(IND(IMM(235)), IMM(105));
MOV(IND(IMM(236)), IMM(110));
MOV(IND(IMM(237)), IMM(103));
MOV(IND(IMM(238)), IMM(45));
MOV(IND(IMM(239)), IMM(114));
MOV(IND(IMM(240)), IMM(101));
MOV(IND(IMM(241)), IMM(102));
MOV(IND(IMM(242)), IMM(799345));
MOV(IND(IMM(243)), IMM(13));
MOV(IND(IMM(244)), IMM(115));
MOV(IND(IMM(245)), IMM(116));
MOV(IND(IMM(246)), IMM(114));
MOV(IND(IMM(247)), IMM(105));
MOV(IND(IMM(248)), IMM(110));
MOV(IND(IMM(249)), IMM(103));
MOV(IND(IMM(250)), IMM(45));
MOV(IND(IMM(251)), IMM(108));
MOV(IND(IMM(252)), IMM(101));
MOV(IND(IMM(253)), IMM(110));
MOV(IND(IMM(254)), IMM(103));
MOV(IND(IMM(255)), IMM(116));
MOV(IND(IMM(256)), IMM(104));
MOV(IND(IMM(257)), IMM(799345));
MOV(IND(IMM(258)), IMM(13));
MOV(IND(IMM(259)), IMM(105));
MOV(IND(IMM(260)), IMM(110));
MOV(IND(IMM(261)), IMM(116));
MOV(IND(IMM(262)), IMM(101));
MOV(IND(IMM(263)), IMM(103));
MOV(IND(IMM(264)), IMM(101));
MOV(IND(IMM(265)), IMM(114));
MOV(IND(IMM(266)), IMM(45));
MOV(IND(IMM(267)), IMM(62));
MOV(IND(IMM(268)), IMM(99));
MOV(IND(IMM(269)), IMM(104));
MOV(IND(IMM(270)), IMM(97));
MOV(IND(IMM(271)), IMM(114));
MOV(IND(IMM(272)), IMM(799345));
MOV(IND(IMM(273)), IMM(13));
MOV(IND(IMM(274)), IMM(99));
MOV(IND(IMM(275)), IMM(104));
MOV(IND(IMM(276)), IMM(97));
MOV(IND(IMM(277)), IMM(114));
MOV(IND(IMM(278)), IMM(45));
MOV(IND(IMM(279)), IMM(62));
MOV(IND(IMM(280)), IMM(105));
MOV(IND(IMM(281)), IMM(110));
MOV(IND(IMM(282)), IMM(116));
MOV(IND(IMM(283)), IMM(101));
MOV(IND(IMM(284)), IMM(103));
MOV(IND(IMM(285)), IMM(101));
MOV(IND(IMM(286)), IMM(114));
MOV(IND(IMM(287)), IMM(799345));
MOV(IND(IMM(288)), IMM(1));
MOV(IND(IMM(289)), IMM(61));
MOV(IND(IMM(290)), IMM(799345));
MOV(IND(IMM(291)), IMM(1));
MOV(IND(IMM(292)), IMM(62));
MOV(IND(IMM(293)), IMM(799345));
MOV(IND(IMM(294)), IMM(1));
MOV(IND(IMM(295)), IMM(60));
MOV(IND(IMM(296)), IMM(799345));
MOV(IND(IMM(297)), IMM(1));
MOV(IND(IMM(298)), IMM(47));
MOV(IND(IMM(299)), IMM(799345));
MOV(IND(IMM(300)), IMM(1));
MOV(IND(IMM(301)), IMM(42));
MOV(IND(IMM(302)), IMM(799345));
MOV(IND(IMM(303)), IMM(1));
MOV(IND(IMM(304)), IMM(45));
MOV(IND(IMM(305)), IMM(799345));
MOV(IND(IMM(306)), IMM(1));
MOV(IND(IMM(307)), IMM(43));
MOV(IND(IMM(308)), IMM(799345));
MOV(IND(IMM(309)), IMM(10));
MOV(IND(IMM(310)), IMM(112));
MOV(IND(IMM(311)), IMM(114));
MOV(IND(IMM(312)), IMM(111));
MOV(IND(IMM(313)), IMM(99));
MOV(IND(IMM(314)), IMM(101));
MOV(IND(IMM(315)), IMM(100));
MOV(IND(IMM(316)), IMM(117));
MOV(IND(IMM(317)), IMM(114));
MOV(IND(IMM(318)), IMM(101));
MOV(IND(IMM(319)), IMM(63));
MOV(IND(IMM(320)), IMM(799345));
MOV(IND(IMM(321)), IMM(7));
MOV(IND(IMM(322)), IMM(118));
MOV(IND(IMM(323)), IMM(101));
MOV(IND(IMM(324)), IMM(99));
MOV(IND(IMM(325)), IMM(116));
MOV(IND(IMM(326)), IMM(111));
MOV(IND(IMM(327)), IMM(114));
MOV(IND(IMM(328)), IMM(63));
MOV(IND(IMM(329)), IMM(799345));
MOV(IND(IMM(330)), IMM(5));
MOV(IND(IMM(331)), IMM(122));
MOV(IND(IMM(332)), IMM(101));
MOV(IND(IMM(333)), IMM(114));
MOV(IND(IMM(334)), IMM(111));
MOV(IND(IMM(335)), IMM(63));
MOV(IND(IMM(336)), IMM(799345));
MOV(IND(IMM(337)), IMM(7));
MOV(IND(IMM(338)), IMM(115));
MOV(IND(IMM(339)), IMM(121));
MOV(IND(IMM(340)), IMM(109));
MOV(IND(IMM(341)), IMM(98));
MOV(IND(IMM(342)), IMM(111));
MOV(IND(IMM(343)), IMM(108));
MOV(IND(IMM(344)), IMM(63));
MOV(IND(IMM(345)), IMM(799345));
MOV(IND(IMM(346)), IMM(7));
MOV(IND(IMM(347)), IMM(115));
MOV(IND(IMM(348)), IMM(116));
MOV(IND(IMM(349)), IMM(114));
MOV(IND(IMM(350)), IMM(105));
MOV(IND(IMM(351)), IMM(110));
MOV(IND(IMM(352)), IMM(103));
MOV(IND(IMM(353)), IMM(63));
MOV(IND(IMM(354)), IMM(799345));
MOV(IND(IMM(355)), IMM(5));
MOV(IND(IMM(356)), IMM(112));
MOV(IND(IMM(357)), IMM(97));
MOV(IND(IMM(358)), IMM(105));
MOV(IND(IMM(359)), IMM(114));
MOV(IND(IMM(360)), IMM(63));
MOV(IND(IMM(361)), IMM(799345));
MOV(IND(IMM(362)), IMM(5));
MOV(IND(IMM(363)), IMM(110));
MOV(IND(IMM(364)), IMM(117));
MOV(IND(IMM(365)), IMM(108));
MOV(IND(IMM(366)), IMM(108));
MOV(IND(IMM(367)), IMM(63));
MOV(IND(IMM(368)), IMM(799345));
MOV(IND(IMM(369)), IMM(5));
MOV(IND(IMM(370)), IMM(99));
MOV(IND(IMM(371)), IMM(104));
MOV(IND(IMM(372)), IMM(97));
MOV(IND(IMM(373)), IMM(114));
MOV(IND(IMM(374)), IMM(63));
MOV(IND(IMM(375)), IMM(799345));
MOV(IND(IMM(376)), IMM(8));
MOV(IND(IMM(377)), IMM(98));
MOV(IND(IMM(378)), IMM(111));
MOV(IND(IMM(379)), IMM(111));
MOV(IND(IMM(380)), IMM(108));
MOV(IND(IMM(381)), IMM(101));
MOV(IND(IMM(382)), IMM(97));
MOV(IND(IMM(383)), IMM(110));
MOV(IND(IMM(384)), IMM(63));
MOV(IND(IMM(385)), IMM(799345));
MOV(IND(IMM(386)), IMM(8));
MOV(IND(IMM(387)), IMM(105));
MOV(IND(IMM(388)), IMM(110));
MOV(IND(IMM(389)), IMM(116));
MOV(IND(IMM(390)), IMM(101));
MOV(IND(IMM(391)), IMM(103));
MOV(IND(IMM(392)), IMM(101));
MOV(IND(IMM(393)), IMM(114));
MOV(IND(IMM(394)), IMM(63));
MOV(IND(IMM(395)), IMM(799345));
MOV(IND(IMM(396)), IMM(7));
MOV(IND(IMM(397)), IMM(110));
MOV(IND(IMM(398)), IMM(117));
MOV(IND(IMM(399)), IMM(109));
MOV(IND(IMM(400)), IMM(98));
MOV(IND(IMM(401)), IMM(101));
MOV(IND(IMM(402)), IMM(114));
MOV(IND(IMM(403)), IMM(63));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(679)), IMM(945311));
MOV(IND(IMM(680)), IMM(5));
MOV(IND(IMM(681)), IMM(945311));
MOV(IND(IMM(682)), IMM(13));
MOV(IND(IMM(683)), IMM(945311));
MOV(IND(IMM(684)), IMM(0));
MOV(IND(IMM(685)), IMM(945311));
MOV(IND(IMM(686)), IMM(1));
MOV(INDD(424, 0), IMM(368031));
MOV(INDD(424, 1), IMM(427));
MOV(INDD(424, 2), IMM(429));
MOV(INDD(424, 3), IMM(10));
MOV(R0, 0);MOV(INDD(424, 4), R0);
MOV(INDD(429, 0), IMM(368031));
MOV(INDD(429, 1), IMM(432));
MOV(INDD(429, 2), IMM(434));
MOV(INDD(429, 3), IMM(13));
MOV(R0, 0);MOV(INDD(429, 4), R0);
MOV(INDD(434, 0), IMM(368031));
MOV(INDD(434, 1), IMM(437));
MOV(INDD(434, 2), IMM(439));
MOV(INDD(434, 3), IMM(16));
MOV(R0, 0);MOV(INDD(434, 4), R0);
MOV(INDD(439, 0), IMM(368031));
MOV(INDD(439, 1), IMM(442));
MOV(INDD(439, 2), IMM(444));
MOV(INDD(439, 3), IMM(21));
MOV(R0, 0);MOV(INDD(439, 4), R0);
MOV(INDD(444, 0), IMM(368031));
MOV(INDD(444, 1), IMM(447));
MOV(INDD(444, 2), IMM(449));
MOV(INDD(444, 3), IMM(27));
MOV(R0, 0);MOV(INDD(444, 4), R0);
MOV(INDD(449, 0), IMM(368031));
MOV(INDD(449, 1), IMM(452));
MOV(INDD(449, 2), IMM(454));
MOV(INDD(449, 3), IMM(31));
MOV(R0, 0);MOV(INDD(449, 4), R0);
MOV(INDD(454, 0), IMM(368031));
MOV(INDD(454, 1), IMM(457));
MOV(INDD(454, 2), IMM(459));
MOV(INDD(454, 3), IMM(35));
MOV(R0, 0);MOV(INDD(454, 4), R0);
MOV(INDD(459, 0), IMM(368031));
MOV(INDD(459, 1), IMM(462));
MOV(INDD(459, 2), IMM(464));
MOV(INDD(459, 3), IMM(49));
PUSH(LABEL(SET_CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(459, 4), R0);
MOV(INDD(464, 0), IMM(368031));
MOV(INDD(464, 1), IMM(467));
MOV(INDD(464, 2), IMM(469));
MOV(INDD(464, 3), IMM(59));
PUSH(LABEL(SET_CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(464, 4), R0);
MOV(INDD(469, 0), IMM(368031));
MOV(INDD(469, 1), IMM(472));
MOV(INDD(469, 2), IMM(474));
MOV(INDD(469, 3), IMM(69));
PUSH(LABEL(EQ)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(469, 4), R0);
MOV(INDD(474, 0), IMM(368031));
MOV(INDD(474, 1), IMM(477));
MOV(INDD(474, 2), IMM(479));
MOV(INDD(474, 3), IMM(74));
PUSH(LABEL(STRING_TO_SYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(474, 4), R0);
MOV(INDD(479, 0), IMM(368031));
MOV(INDD(479, 1), IMM(482));
MOV(INDD(479, 2), IMM(484));
MOV(INDD(479, 3), IMM(90));
PUSH(LABEL(SYMBOL_TO_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(479, 4), R0);
MOV(INDD(484, 0), IMM(368031));
MOV(INDD(484, 1), IMM(487));
MOV(INDD(484, 2), IMM(489));
MOV(INDD(484, 3), IMM(106));
MOV(R0, 0);MOV(INDD(484, 4), R0);
MOV(INDD(489, 0), IMM(368031));
MOV(INDD(489, 1), IMM(492));
MOV(INDD(489, 2), IMM(494));
MOV(INDD(489, 3), IMM(114));
PUSH(LABEL(APPLY_TC)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(489, 4), R0);
MOV(INDD(494, 0), IMM(368031));
MOV(INDD(494, 1), IMM(497));
MOV(INDD(494, 2), IMM(499));
MOV(INDD(494, 3), IMM(121));
MOV(R0, 0);MOV(INDD(494, 4), R0);
MOV(INDD(499, 0), IMM(368031));
MOV(INDD(499, 1), IMM(502));
MOV(INDD(499, 2), IMM(504));
MOV(INDD(499, 3), IMM(129));
MOV(R0, 0);MOV(INDD(499, 4), R0);
MOV(INDD(504, 0), IMM(368031));
MOV(INDD(504, 1), IMM(507));
MOV(INDD(504, 2), IMM(509));
MOV(INDD(504, 3), IMM(135));
PUSH(LABEL(CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(504, 4), R0);
MOV(INDD(509, 0), IMM(368031));
MOV(INDD(509, 1), IMM(512));
MOV(INDD(509, 2), IMM(514));
MOV(INDD(509, 3), IMM(140));
PUSH(LABEL(CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(509, 4), R0);
MOV(INDD(514, 0), IMM(368031));
MOV(INDD(514, 1), IMM(517));
MOV(INDD(514, 2), IMM(519));
MOV(INDD(514, 3), IMM(145));
PUSH(LABEL(CONS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(514, 4), R0);
MOV(INDD(519, 0), IMM(368031));
MOV(INDD(519, 1), IMM(522));
MOV(INDD(519, 2), IMM(524));
MOV(INDD(519, 3), IMM(151));
PUSH(LABEL(MAKE_VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(519, 4), R0);
MOV(INDD(524, 0), IMM(368031));
MOV(INDD(524, 1), IMM(527));
MOV(INDD(524, 2), IMM(529));
MOV(INDD(524, 3), IMM(164));
PUSH(LABEL(VECTOR_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(524, 4), R0);
MOV(INDD(529, 0), IMM(368031));
MOV(INDD(529, 1), IMM(532));
MOV(INDD(529, 2), IMM(534));
MOV(INDD(529, 3), IMM(177));
PUSH(LABEL(VECTOR_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(529, 4), R0);
MOV(INDD(534, 0), IMM(368031));
MOV(INDD(534, 1), IMM(537));
MOV(INDD(534, 2), IMM(539));
MOV(INDD(534, 3), IMM(189));
PUSH(LABEL(VECTOR_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(534, 4), R0);
MOV(INDD(539, 0), IMM(368031));
MOV(INDD(539, 1), IMM(542));
MOV(INDD(539, 2), IMM(544));
MOV(INDD(539, 3), IMM(204));
PUSH(LABEL(MAKE_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(539, 4), R0);
MOV(INDD(544, 0), IMM(368031));
MOV(INDD(544, 1), IMM(547));
MOV(INDD(544, 2), IMM(549));
MOV(INDD(544, 3), IMM(217));
PUSH(LABEL(STRING_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(544, 4), R0);
MOV(INDD(549, 0), IMM(368031));
MOV(INDD(549, 1), IMM(552));
MOV(INDD(549, 2), IMM(554));
MOV(INDD(549, 3), IMM(230));
PUSH(LABEL(STRING_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(549, 4), R0);
MOV(INDD(554, 0), IMM(368031));
MOV(INDD(554, 1), IMM(557));
MOV(INDD(554, 2), IMM(559));
MOV(INDD(554, 3), IMM(242));
PUSH(LABEL(STRING_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(554, 4), R0);
MOV(INDD(559, 0), IMM(368031));
MOV(INDD(559, 1), IMM(562));
MOV(INDD(559, 2), IMM(564));
MOV(INDD(559, 3), IMM(257));
PUSH(LABEL(INTEGER_TO_CHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(559, 4), R0);
MOV(INDD(564, 0), IMM(368031));
MOV(INDD(564, 1), IMM(567));
MOV(INDD(564, 2), IMM(569));
MOV(INDD(564, 3), IMM(272));
PUSH(LABEL(CHAR_TO_INTEGER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(564, 4), R0);
MOV(INDD(569, 0), IMM(368031));
MOV(INDD(569, 1), IMM(572));
MOV(INDD(569, 2), IMM(574));
MOV(INDD(569, 3), IMM(287));
PUSH(LABEL(VARIADIC_EQUAL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(569, 4), R0);
MOV(INDD(574, 0), IMM(368031));
MOV(INDD(574, 1), IMM(577));
MOV(INDD(574, 2), IMM(579));
MOV(INDD(574, 3), IMM(290));
PUSH(LABEL(VARIADIC_GT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(574, 4), R0);
MOV(INDD(579, 0), IMM(368031));
MOV(INDD(579, 1), IMM(582));
MOV(INDD(579, 2), IMM(584));
MOV(INDD(579, 3), IMM(293));
PUSH(LABEL(VARIADIC_LT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(579, 4), R0);
MOV(INDD(584, 0), IMM(368031));
MOV(INDD(584, 1), IMM(587));
MOV(INDD(584, 2), IMM(589));
MOV(INDD(584, 3), IMM(296));
PUSH(LABEL(VARIADIC_DIV)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(584, 4), R0);
MOV(INDD(589, 0), IMM(368031));
MOV(INDD(589, 1), IMM(592));
MOV(INDD(589, 2), IMM(594));
MOV(INDD(589, 3), IMM(299));
PUSH(LABEL(VARIADIC_MUL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(589, 4), R0);
MOV(INDD(594, 0), IMM(368031));
MOV(INDD(594, 1), IMM(597));
MOV(INDD(594, 2), IMM(599));
MOV(INDD(594, 3), IMM(302));
PUSH(LABEL(VARIADIC_MINUS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(594, 4), R0);
MOV(INDD(599, 0), IMM(368031));
MOV(INDD(599, 1), IMM(602));
MOV(INDD(599, 2), IMM(604));
MOV(INDD(599, 3), IMM(305));
PUSH(LABEL(VARIADIC_PLUS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(599, 4), R0);
MOV(INDD(604, 0), IMM(368031));
MOV(INDD(604, 1), IMM(607));
MOV(INDD(604, 2), IMM(609));
MOV(INDD(604, 3), IMM(308));
PUSH(LABEL(IS_PROCEDURE)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(604, 4), R0);
MOV(INDD(609, 0), IMM(368031));
MOV(INDD(609, 1), IMM(612));
MOV(INDD(609, 2), IMM(614));
MOV(INDD(609, 3), IMM(320));
PUSH(LABEL(IS_VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(609, 4), R0);
MOV(INDD(614, 0), IMM(368031));
MOV(INDD(614, 1), IMM(617));
MOV(INDD(614, 2), IMM(619));
MOV(INDD(614, 3), IMM(329));
PUSH(LABEL(IS_ZERO_MY)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(614, 4), R0);
MOV(INDD(619, 0), IMM(368031));
MOV(INDD(619, 1), IMM(622));
MOV(INDD(619, 2), IMM(624));
MOV(INDD(619, 3), IMM(336));
PUSH(LABEL(IS_SYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(619, 4), R0);
MOV(INDD(624, 0), IMM(368031));
MOV(INDD(624, 1), IMM(627));
MOV(INDD(624, 2), IMM(629));
MOV(INDD(624, 3), IMM(345));
PUSH(LABEL(IS_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(624, 4), R0);
MOV(INDD(629, 0), IMM(368031));
MOV(INDD(629, 1), IMM(632));
MOV(INDD(629, 2), IMM(634));
MOV(INDD(629, 3), IMM(354));
PUSH(LABEL(IS_PAIR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(629, 4), R0);
MOV(INDD(634, 0), IMM(368031));
MOV(INDD(634, 1), IMM(637));
MOV(INDD(634, 2), IMM(639));
MOV(INDD(634, 3), IMM(361));
PUSH(LABEL(IS_NULL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(634, 4), R0);
MOV(INDD(639, 0), IMM(368031));
MOV(INDD(639, 1), IMM(642));
MOV(INDD(639, 2), IMM(644));
MOV(INDD(639, 3), IMM(368));
PUSH(LABEL(IS_CHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(639, 4), R0);
MOV(INDD(644, 0), IMM(368031));
MOV(INDD(644, 1), IMM(647));
MOV(INDD(644, 2), IMM(649));
MOV(INDD(644, 3), IMM(375));
PUSH(LABEL(IS_BOOLEAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(644, 4), R0);
MOV(INDD(649, 0), IMM(368031));
MOV(INDD(649, 1), IMM(652));
MOV(INDD(649, 2), IMM(654));
MOV(INDD(649, 3), IMM(385));
PUSH(LABEL(IS_INTEGER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(649, 4), R0);
MOV(INDD(654, 0), IMM(368031));
MOV(INDD(654, 1), IMM(657));
MOV(INDD(654, 2), IMM(659));
MOV(INDD(654, 3), IMM(395));
PUSH(LABEL(IS_NUMBER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(654, 4), R0);
MOV(INDD(654, 2), 2);
/* --- Define: -- */


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
CMP(R1, IMM(0));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(683));
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
LabelEnvLoop3:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit3);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop3);
LabelEnvLoopExit3: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop3:
CMP(R5,IMM(2));
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
LabelEnvLoop4:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit4);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop4);
LabelEnvLoopExit4: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop4:
CMP(R5,IMM(3));
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
CMP(R1, IMM(0));
JUMP_NE(ERROR);
/* CodeGen:*/
MOV(R0, SOB_VOID);

/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd4:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd3:
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
LabelClosureEnd2:

MOV(ADDR(458), R0);
MOV(R0, SOB_VOID);

CALL(PRINT_R0);
/* --- Define: -- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(458)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

MOV(ADDR(453), R0);
MOV(R0, SOB_VOID);

CALL(PRINT_R0);
/* --- Define: -- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(458)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

MOV(ADDR(448), R0);
MOV(R0, SOB_VOID);

CALL(PRINT_R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(453)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(453)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(453)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(448)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(453)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);
/* --- Define: -- */


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
CMP(R1, IMM(0));
JUMP_NE(ERROR);
/* CodeGen:*/
MOV(R0, SOB_VOID);



/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- F-Var: --- */
MOV(R1, IMM(438)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);

PUSH(R0);
/* In constants .. */
MOV(R0,IMM(685));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(603)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop1:
CMP(R4, IMM(5));
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

MOV(ADDR(443), R0);
MOV(R0, SOB_VOID);

CALL(PRINT_R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
PUSH(IMM(0)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(443)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
MOV(R0,IMM(434));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(424));
PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(518)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CALL(PRINT_R0);
MOV(R0, SOB_VOID);

CALL(PRINT_R0);

POP(FP);
DROP(IMM(3));
STOP_MACHINE;
HALT;
}

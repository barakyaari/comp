#include <stdio.h>
#include <stdlib.h>
#define DO_SHOW 1
#include "arch/cisc.h"
#include "arch/debug_macros.h"
int main() {
#define TRUE 5
#define FALSE 3
#define SOB_NIL 2
#define SOB_VOID 1
#define LOC_ENV 0
#define NUMOFARGS 1
#define SYM_TAB_START 489 
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
MOV(IND(0), IMM(804));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(10)), IMM(799345));
MOV(IND(IMM(11)), IMM(3));
MOV(IND(IMM(12)), IMM(110));
MOV(IND(IMM(13)), IMM(111));
MOV(IND(IMM(14)), IMM(116));
MOV(IND(IMM(15)), IMM(799345));
MOV(IND(IMM(16)), IMM(3));
MOV(IND(IMM(17)), IMM(109));
MOV(IND(IMM(18)), IMM(97));
MOV(IND(IMM(19)), IMM(112));
MOV(IND(IMM(20)), IMM(799345));
MOV(IND(IMM(21)), IMM(6));
MOV(IND(IMM(22)), IMM(97));
MOV(IND(IMM(23)), IMM(112));
MOV(IND(IMM(24)), IMM(112));
MOV(IND(IMM(25)), IMM(101));
MOV(IND(IMM(26)), IMM(110));
MOV(IND(IMM(27)), IMM(100));
MOV(IND(IMM(28)), IMM(799345));
MOV(IND(IMM(29)), IMM(6));
MOV(IND(IMM(30)), IMM(99));
MOV(IND(IMM(31)), IMM(97));
MOV(IND(IMM(32)), IMM(97));
MOV(IND(IMM(33)), IMM(97));
MOV(IND(IMM(34)), IMM(97));
MOV(IND(IMM(35)), IMM(114));
MOV(IND(IMM(36)), IMM(799345));
MOV(IND(IMM(37)), IMM(6));
MOV(IND(IMM(38)), IMM(99));
MOV(IND(IMM(39)), IMM(100));
MOV(IND(IMM(40)), IMM(100));
MOV(IND(IMM(41)), IMM(100));
MOV(IND(IMM(42)), IMM(100));
MOV(IND(IMM(43)), IMM(114));
MOV(IND(IMM(44)), IMM(799345));
MOV(IND(IMM(45)), IMM(6));
MOV(IND(IMM(46)), IMM(99));
MOV(IND(IMM(47)), IMM(97));
MOV(IND(IMM(48)), IMM(100));
MOV(IND(IMM(49)), IMM(100));
MOV(IND(IMM(50)), IMM(100));
MOV(IND(IMM(51)), IMM(114));
MOV(IND(IMM(52)), IMM(799345));
MOV(IND(IMM(53)), IMM(6));
MOV(IND(IMM(54)), IMM(99));
MOV(IND(IMM(55)), IMM(97));
MOV(IND(IMM(56)), IMM(97));
MOV(IND(IMM(57)), IMM(100));
MOV(IND(IMM(58)), IMM(100));
MOV(IND(IMM(59)), IMM(114));
MOV(IND(IMM(60)), IMM(799345));
MOV(IND(IMM(61)), IMM(6));
MOV(IND(IMM(62)), IMM(99));
MOV(IND(IMM(63)), IMM(97));
MOV(IND(IMM(64)), IMM(97));
MOV(IND(IMM(65)), IMM(97));
MOV(IND(IMM(66)), IMM(100));
MOV(IND(IMM(67)), IMM(114));
MOV(IND(IMM(68)), IMM(799345));
MOV(IND(IMM(69)), IMM(5));
MOV(IND(IMM(70)), IMM(99));
MOV(IND(IMM(71)), IMM(97));
MOV(IND(IMM(72)), IMM(97));
MOV(IND(IMM(73)), IMM(97));
MOV(IND(IMM(74)), IMM(114));
MOV(IND(IMM(75)), IMM(799345));
MOV(IND(IMM(76)), IMM(5));
MOV(IND(IMM(77)), IMM(99));
MOV(IND(IMM(78)), IMM(100));
MOV(IND(IMM(79)), IMM(100));
MOV(IND(IMM(80)), IMM(100));
MOV(IND(IMM(81)), IMM(114));
MOV(IND(IMM(82)), IMM(799345));
MOV(IND(IMM(83)), IMM(5));
MOV(IND(IMM(84)), IMM(99));
MOV(IND(IMM(85)), IMM(97));
MOV(IND(IMM(86)), IMM(100));
MOV(IND(IMM(87)), IMM(100));
MOV(IND(IMM(88)), IMM(114));
MOV(IND(IMM(89)), IMM(799345));
MOV(IND(IMM(90)), IMM(5));
MOV(IND(IMM(91)), IMM(99));
MOV(IND(IMM(92)), IMM(97));
MOV(IND(IMM(93)), IMM(97));
MOV(IND(IMM(94)), IMM(100));
MOV(IND(IMM(95)), IMM(114));
MOV(IND(IMM(96)), IMM(799345));
MOV(IND(IMM(97)), IMM(4));
MOV(IND(IMM(98)), IMM(99));
MOV(IND(IMM(99)), IMM(100));
MOV(IND(IMM(100)), IMM(100));
MOV(IND(IMM(101)), IMM(114));
MOV(IND(IMM(102)), IMM(799345));
MOV(IND(IMM(103)), IMM(4));
MOV(IND(IMM(104)), IMM(99));
MOV(IND(IMM(105)), IMM(97));
MOV(IND(IMM(106)), IMM(100));
MOV(IND(IMM(107)), IMM(114));
MOV(IND(IMM(108)), IMM(799345));
MOV(IND(IMM(109)), IMM(4));
MOV(IND(IMM(110)), IMM(99));
MOV(IND(IMM(111)), IMM(97));
MOV(IND(IMM(112)), IMM(97));
MOV(IND(IMM(113)), IMM(114));
MOV(IND(IMM(114)), IMM(799345));
MOV(IND(IMM(115)), IMM(3));
MOV(IND(IMM(116)), IMM(101));
MOV(IND(IMM(117)), IMM(113));
MOV(IND(IMM(118)), IMM(63));
MOV(IND(IMM(119)), IMM(799345));
MOV(IND(IMM(120)), IMM(14));
MOV(IND(IMM(121)), IMM(115));
MOV(IND(IMM(122)), IMM(116));
MOV(IND(IMM(123)), IMM(114));
MOV(IND(IMM(124)), IMM(105));
MOV(IND(IMM(125)), IMM(110));
MOV(IND(IMM(126)), IMM(103));
MOV(IND(IMM(127)), IMM(45));
MOV(IND(IMM(128)), IMM(62));
MOV(IND(IMM(129)), IMM(115));
MOV(IND(IMM(130)), IMM(121));
MOV(IND(IMM(131)), IMM(109));
MOV(IND(IMM(132)), IMM(98));
MOV(IND(IMM(133)), IMM(111));
MOV(IND(IMM(134)), IMM(108));
MOV(IND(IMM(135)), IMM(799345));
MOV(IND(IMM(136)), IMM(14));
MOV(IND(IMM(137)), IMM(115));
MOV(IND(IMM(138)), IMM(121));
MOV(IND(IMM(139)), IMM(109));
MOV(IND(IMM(140)), IMM(98));
MOV(IND(IMM(141)), IMM(111));
MOV(IND(IMM(142)), IMM(108));
MOV(IND(IMM(143)), IMM(45));
MOV(IND(IMM(144)), IMM(62));
MOV(IND(IMM(145)), IMM(115));
MOV(IND(IMM(146)), IMM(116));
MOV(IND(IMM(147)), IMM(114));
MOV(IND(IMM(148)), IMM(105));
MOV(IND(IMM(149)), IMM(110));
MOV(IND(IMM(150)), IMM(103));
MOV(IND(IMM(151)), IMM(799345));
MOV(IND(IMM(152)), IMM(6));
MOV(IND(IMM(153)), IMM(108));
MOV(IND(IMM(154)), IMM(101));
MOV(IND(IMM(155)), IMM(110));
MOV(IND(IMM(156)), IMM(103));
MOV(IND(IMM(157)), IMM(116));
MOV(IND(IMM(158)), IMM(104));
MOV(IND(IMM(159)), IMM(799345));
MOV(IND(IMM(160)), IMM(5));
MOV(IND(IMM(161)), IMM(97));
MOV(IND(IMM(162)), IMM(112));
MOV(IND(IMM(163)), IMM(112));
MOV(IND(IMM(164)), IMM(108));
MOV(IND(IMM(165)), IMM(121));
MOV(IND(IMM(166)), IMM(799345));
MOV(IND(IMM(167)), IMM(6));
MOV(IND(IMM(168)), IMM(118));
MOV(IND(IMM(169)), IMM(101));
MOV(IND(IMM(170)), IMM(99));
MOV(IND(IMM(171)), IMM(116));
MOV(IND(IMM(172)), IMM(111));
MOV(IND(IMM(173)), IMM(114));
MOV(IND(IMM(174)), IMM(799345));
MOV(IND(IMM(175)), IMM(4));
MOV(IND(IMM(176)), IMM(108));
MOV(IND(IMM(177)), IMM(105));
MOV(IND(IMM(178)), IMM(115));
MOV(IND(IMM(179)), IMM(116));
MOV(IND(IMM(180)), IMM(799345));
MOV(IND(IMM(181)), IMM(8));
MOV(IND(IMM(182)), IMM(115));
MOV(IND(IMM(183)), IMM(101));
MOV(IND(IMM(184)), IMM(116));
MOV(IND(IMM(185)), IMM(45));
MOV(IND(IMM(186)), IMM(99));
MOV(IND(IMM(187)), IMM(97));
MOV(IND(IMM(188)), IMM(114));
MOV(IND(IMM(189)), IMM(33));
MOV(IND(IMM(190)), IMM(799345));
MOV(IND(IMM(191)), IMM(8));
MOV(IND(IMM(192)), IMM(115));
MOV(IND(IMM(193)), IMM(101));
MOV(IND(IMM(194)), IMM(116));
MOV(IND(IMM(195)), IMM(45));
MOV(IND(IMM(196)), IMM(99));
MOV(IND(IMM(197)), IMM(100));
MOV(IND(IMM(198)), IMM(114));
MOV(IND(IMM(199)), IMM(33));
MOV(IND(IMM(200)), IMM(799345));
MOV(IND(IMM(201)), IMM(3));
MOV(IND(IMM(202)), IMM(99));
MOV(IND(IMM(203)), IMM(100));
MOV(IND(IMM(204)), IMM(114));
MOV(IND(IMM(205)), IMM(799345));
MOV(IND(IMM(206)), IMM(3));
MOV(IND(IMM(207)), IMM(99));
MOV(IND(IMM(208)), IMM(97));
MOV(IND(IMM(209)), IMM(114));
MOV(IND(IMM(210)), IMM(799345));
MOV(IND(IMM(211)), IMM(4));
MOV(IND(IMM(212)), IMM(99));
MOV(IND(IMM(213)), IMM(111));
MOV(IND(IMM(214)), IMM(110));
MOV(IND(IMM(215)), IMM(115));
MOV(IND(IMM(216)), IMM(799345));
MOV(IND(IMM(217)), IMM(11));
MOV(IND(IMM(218)), IMM(109));
MOV(IND(IMM(219)), IMM(97));
MOV(IND(IMM(220)), IMM(107));
MOV(IND(IMM(221)), IMM(101));
MOV(IND(IMM(222)), IMM(45));
MOV(IND(IMM(223)), IMM(118));
MOV(IND(IMM(224)), IMM(101));
MOV(IND(IMM(225)), IMM(99));
MOV(IND(IMM(226)), IMM(116));
MOV(IND(IMM(227)), IMM(111));
MOV(IND(IMM(228)), IMM(114));
MOV(IND(IMM(229)), IMM(799345));
MOV(IND(IMM(230)), IMM(11));
MOV(IND(IMM(231)), IMM(118));
MOV(IND(IMM(232)), IMM(101));
MOV(IND(IMM(233)), IMM(99));
MOV(IND(IMM(234)), IMM(116));
MOV(IND(IMM(235)), IMM(111));
MOV(IND(IMM(236)), IMM(114));
MOV(IND(IMM(237)), IMM(45));
MOV(IND(IMM(238)), IMM(115));
MOV(IND(IMM(239)), IMM(101));
MOV(IND(IMM(240)), IMM(116));
MOV(IND(IMM(241)), IMM(33));
MOV(IND(IMM(242)), IMM(799345));
MOV(IND(IMM(243)), IMM(10));
MOV(IND(IMM(244)), IMM(118));
MOV(IND(IMM(245)), IMM(101));
MOV(IND(IMM(246)), IMM(99));
MOV(IND(IMM(247)), IMM(116));
MOV(IND(IMM(248)), IMM(111));
MOV(IND(IMM(249)), IMM(114));
MOV(IND(IMM(250)), IMM(45));
MOV(IND(IMM(251)), IMM(114));
MOV(IND(IMM(252)), IMM(101));
MOV(IND(IMM(253)), IMM(102));
MOV(IND(IMM(254)), IMM(799345));
MOV(IND(IMM(255)), IMM(13));
MOV(IND(IMM(256)), IMM(118));
MOV(IND(IMM(257)), IMM(101));
MOV(IND(IMM(258)), IMM(99));
MOV(IND(IMM(259)), IMM(116));
MOV(IND(IMM(260)), IMM(111));
MOV(IND(IMM(261)), IMM(114));
MOV(IND(IMM(262)), IMM(45));
MOV(IND(IMM(263)), IMM(108));
MOV(IND(IMM(264)), IMM(101));
MOV(IND(IMM(265)), IMM(110));
MOV(IND(IMM(266)), IMM(103));
MOV(IND(IMM(267)), IMM(116));
MOV(IND(IMM(268)), IMM(104));
MOV(IND(IMM(269)), IMM(799345));
MOV(IND(IMM(270)), IMM(11));
MOV(IND(IMM(271)), IMM(109));
MOV(IND(IMM(272)), IMM(97));
MOV(IND(IMM(273)), IMM(107));
MOV(IND(IMM(274)), IMM(101));
MOV(IND(IMM(275)), IMM(45));
MOV(IND(IMM(276)), IMM(115));
MOV(IND(IMM(277)), IMM(116));
MOV(IND(IMM(278)), IMM(114));
MOV(IND(IMM(279)), IMM(105));
MOV(IND(IMM(280)), IMM(110));
MOV(IND(IMM(281)), IMM(103));
MOV(IND(IMM(282)), IMM(799345));
MOV(IND(IMM(283)), IMM(11));
MOV(IND(IMM(284)), IMM(115));
MOV(IND(IMM(285)), IMM(116));
MOV(IND(IMM(286)), IMM(114));
MOV(IND(IMM(287)), IMM(105));
MOV(IND(IMM(288)), IMM(110));
MOV(IND(IMM(289)), IMM(103));
MOV(IND(IMM(290)), IMM(45));
MOV(IND(IMM(291)), IMM(115));
MOV(IND(IMM(292)), IMM(101));
MOV(IND(IMM(293)), IMM(116));
MOV(IND(IMM(294)), IMM(33));
MOV(IND(IMM(295)), IMM(799345));
MOV(IND(IMM(296)), IMM(10));
MOV(IND(IMM(297)), IMM(115));
MOV(IND(IMM(298)), IMM(116));
MOV(IND(IMM(299)), IMM(114));
MOV(IND(IMM(300)), IMM(105));
MOV(IND(IMM(301)), IMM(110));
MOV(IND(IMM(302)), IMM(103));
MOV(IND(IMM(303)), IMM(45));
MOV(IND(IMM(304)), IMM(114));
MOV(IND(IMM(305)), IMM(101));
MOV(IND(IMM(306)), IMM(102));
MOV(IND(IMM(307)), IMM(799345));
MOV(IND(IMM(308)), IMM(13));
MOV(IND(IMM(309)), IMM(115));
MOV(IND(IMM(310)), IMM(116));
MOV(IND(IMM(311)), IMM(114));
MOV(IND(IMM(312)), IMM(105));
MOV(IND(IMM(313)), IMM(110));
MOV(IND(IMM(314)), IMM(103));
MOV(IND(IMM(315)), IMM(45));
MOV(IND(IMM(316)), IMM(108));
MOV(IND(IMM(317)), IMM(101));
MOV(IND(IMM(318)), IMM(110));
MOV(IND(IMM(319)), IMM(103));
MOV(IND(IMM(320)), IMM(116));
MOV(IND(IMM(321)), IMM(104));
MOV(IND(IMM(322)), IMM(799345));
MOV(IND(IMM(323)), IMM(13));
MOV(IND(IMM(324)), IMM(105));
MOV(IND(IMM(325)), IMM(110));
MOV(IND(IMM(326)), IMM(116));
MOV(IND(IMM(327)), IMM(101));
MOV(IND(IMM(328)), IMM(103));
MOV(IND(IMM(329)), IMM(101));
MOV(IND(IMM(330)), IMM(114));
MOV(IND(IMM(331)), IMM(45));
MOV(IND(IMM(332)), IMM(62));
MOV(IND(IMM(333)), IMM(99));
MOV(IND(IMM(334)), IMM(104));
MOV(IND(IMM(335)), IMM(97));
MOV(IND(IMM(336)), IMM(114));
MOV(IND(IMM(337)), IMM(799345));
MOV(IND(IMM(338)), IMM(13));
MOV(IND(IMM(339)), IMM(99));
MOV(IND(IMM(340)), IMM(104));
MOV(IND(IMM(341)), IMM(97));
MOV(IND(IMM(342)), IMM(114));
MOV(IND(IMM(343)), IMM(45));
MOV(IND(IMM(344)), IMM(62));
MOV(IND(IMM(345)), IMM(105));
MOV(IND(IMM(346)), IMM(110));
MOV(IND(IMM(347)), IMM(116));
MOV(IND(IMM(348)), IMM(101));
MOV(IND(IMM(349)), IMM(103));
MOV(IND(IMM(350)), IMM(101));
MOV(IND(IMM(351)), IMM(114));
MOV(IND(IMM(352)), IMM(799345));
MOV(IND(IMM(353)), IMM(10));
MOV(IND(IMM(354)), IMM(112));
MOV(IND(IMM(355)), IMM(114));
MOV(IND(IMM(356)), IMM(111));
MOV(IND(IMM(357)), IMM(99));
MOV(IND(IMM(358)), IMM(101));
MOV(IND(IMM(359)), IMM(100));
MOV(IND(IMM(360)), IMM(117));
MOV(IND(IMM(361)), IMM(114));
MOV(IND(IMM(362)), IMM(101));
MOV(IND(IMM(363)), IMM(63));
MOV(IND(IMM(364)), IMM(799345));
MOV(IND(IMM(365)), IMM(7));
MOV(IND(IMM(366)), IMM(118));
MOV(IND(IMM(367)), IMM(101));
MOV(IND(IMM(368)), IMM(99));
MOV(IND(IMM(369)), IMM(116));
MOV(IND(IMM(370)), IMM(111));
MOV(IND(IMM(371)), IMM(114));
MOV(IND(IMM(372)), IMM(63));
MOV(IND(IMM(373)), IMM(799345));
MOV(IND(IMM(374)), IMM(5));
MOV(IND(IMM(375)), IMM(122));
MOV(IND(IMM(376)), IMM(101));
MOV(IND(IMM(377)), IMM(114));
MOV(IND(IMM(378)), IMM(111));
MOV(IND(IMM(379)), IMM(63));
MOV(IND(IMM(380)), IMM(799345));
MOV(IND(IMM(381)), IMM(7));
MOV(IND(IMM(382)), IMM(115));
MOV(IND(IMM(383)), IMM(116));
MOV(IND(IMM(384)), IMM(114));
MOV(IND(IMM(385)), IMM(105));
MOV(IND(IMM(386)), IMM(110));
MOV(IND(IMM(387)), IMM(103));
MOV(IND(IMM(388)), IMM(63));
MOV(IND(IMM(389)), IMM(799345));
MOV(IND(IMM(390)), IMM(5));
MOV(IND(IMM(391)), IMM(112));
MOV(IND(IMM(392)), IMM(97));
MOV(IND(IMM(393)), IMM(105));
MOV(IND(IMM(394)), IMM(114));
MOV(IND(IMM(395)), IMM(63));
MOV(IND(IMM(396)), IMM(799345));
MOV(IND(IMM(397)), IMM(5));
MOV(IND(IMM(398)), IMM(110));
MOV(IND(IMM(399)), IMM(117));
MOV(IND(IMM(400)), IMM(108));
MOV(IND(IMM(401)), IMM(108));
MOV(IND(IMM(402)), IMM(63));
MOV(IND(IMM(403)), IMM(799345));
MOV(IND(IMM(404)), IMM(5));
MOV(IND(IMM(405)), IMM(99));
MOV(IND(IMM(406)), IMM(104));
MOV(IND(IMM(407)), IMM(97));
MOV(IND(IMM(408)), IMM(114));
MOV(IND(IMM(409)), IMM(63));
MOV(IND(IMM(410)), IMM(799345));
MOV(IND(IMM(411)), IMM(7));
MOV(IND(IMM(412)), IMM(115));
MOV(IND(IMM(413)), IMM(121));
MOV(IND(IMM(414)), IMM(109));
MOV(IND(IMM(415)), IMM(98));
MOV(IND(IMM(416)), IMM(111));
MOV(IND(IMM(417)), IMM(108));
MOV(IND(IMM(418)), IMM(63));
MOV(IND(IMM(419)), IMM(799345));
MOV(IND(IMM(420)), IMM(8));
MOV(IND(IMM(421)), IMM(98));
MOV(IND(IMM(422)), IMM(111));
MOV(IND(IMM(423)), IMM(111));
MOV(IND(IMM(424)), IMM(108));
MOV(IND(IMM(425)), IMM(101));
MOV(IND(IMM(426)), IMM(97));
MOV(IND(IMM(427)), IMM(110));
MOV(IND(IMM(428)), IMM(63));
MOV(IND(IMM(429)), IMM(799345));
MOV(IND(IMM(430)), IMM(8));
MOV(IND(IMM(431)), IMM(105));
MOV(IND(IMM(432)), IMM(110));
MOV(IND(IMM(433)), IMM(116));
MOV(IND(IMM(434)), IMM(101));
MOV(IND(IMM(435)), IMM(103));
MOV(IND(IMM(436)), IMM(101));
MOV(IND(IMM(437)), IMM(114));
MOV(IND(IMM(438)), IMM(63));
MOV(IND(IMM(439)), IMM(799345));
MOV(IND(IMM(440)), IMM(7));
MOV(IND(IMM(441)), IMM(110));
MOV(IND(IMM(442)), IMM(117));
MOV(IND(IMM(443)), IMM(109));
MOV(IND(IMM(444)), IMM(98));
MOV(IND(IMM(445)), IMM(101));
MOV(IND(IMM(446)), IMM(114));
MOV(IND(IMM(447)), IMM(63));
MOV(IND(IMM(448)), IMM(799345));
MOV(IND(IMM(449)), IMM(1));
MOV(IND(IMM(450)), IMM(61));
MOV(IND(IMM(451)), IMM(799345));
MOV(IND(IMM(452)), IMM(1));
MOV(IND(IMM(453)), IMM(62));
MOV(IND(IMM(454)), IMM(799345));
MOV(IND(IMM(455)), IMM(1));
MOV(IND(IMM(456)), IMM(60));
MOV(IND(IMM(457)), IMM(799345));
MOV(IND(IMM(458)), IMM(1));
MOV(IND(IMM(459)), IMM(47));
MOV(IND(IMM(460)), IMM(799345));
MOV(IND(IMM(461)), IMM(1));
MOV(IND(IMM(462)), IMM(42));
MOV(IND(IMM(463)), IMM(799345));
MOV(IND(IMM(464)), IMM(1));
MOV(IND(IMM(465)), IMM(45));
MOV(IND(IMM(466)), IMM(799345));
MOV(IND(IMM(467)), IMM(1));
MOV(IND(IMM(468)), IMM(43));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(INDD(489, 0), IMM(368031));
MOV(INDD(489, 1), IMM(492));
MOV(INDD(489, 2), IMM(494));
MOV(INDD(489, 3), IMM(10));
MOV(R0, 0);MOV(INDD(489, 4), R0);
MOV(INDD(494, 0), IMM(368031));
MOV(INDD(494, 1), IMM(497));
MOV(INDD(494, 2), IMM(499));
MOV(INDD(494, 3), IMM(15));
MOV(R0, 0);MOV(INDD(494, 4), R0);
MOV(INDD(499, 0), IMM(368031));
MOV(INDD(499, 1), IMM(502));
MOV(INDD(499, 2), IMM(504));
MOV(INDD(499, 3), IMM(20));
MOV(R0, 0);MOV(INDD(499, 4), R0);
MOV(INDD(504, 0), IMM(368031));
MOV(INDD(504, 1), IMM(507));
MOV(INDD(504, 2), IMM(509));
MOV(INDD(504, 3), IMM(28));
MOV(R0, 0);MOV(INDD(504, 4), R0);
MOV(INDD(509, 0), IMM(368031));
MOV(INDD(509, 1), IMM(512));
MOV(INDD(509, 2), IMM(514));
MOV(INDD(509, 3), IMM(36));
MOV(R0, 0);MOV(INDD(509, 4), R0);
MOV(INDD(514, 0), IMM(368031));
MOV(INDD(514, 1), IMM(517));
MOV(INDD(514, 2), IMM(519));
MOV(INDD(514, 3), IMM(44));
MOV(R0, 0);MOV(INDD(514, 4), R0);
MOV(INDD(519, 0), IMM(368031));
MOV(INDD(519, 1), IMM(522));
MOV(INDD(519, 2), IMM(524));
MOV(INDD(519, 3), IMM(52));
MOV(R0, 0);MOV(INDD(519, 4), R0);
MOV(INDD(524, 0), IMM(368031));
MOV(INDD(524, 1), IMM(527));
MOV(INDD(524, 2), IMM(529));
MOV(INDD(524, 3), IMM(60));
MOV(R0, 0);MOV(INDD(524, 4), R0);
MOV(INDD(529, 0), IMM(368031));
MOV(INDD(529, 1), IMM(532));
MOV(INDD(529, 2), IMM(534));
MOV(INDD(529, 3), IMM(68));
MOV(R0, 0);MOV(INDD(529, 4), R0);
MOV(INDD(534, 0), IMM(368031));
MOV(INDD(534, 1), IMM(537));
MOV(INDD(534, 2), IMM(539));
MOV(INDD(534, 3), IMM(75));
MOV(R0, 0);MOV(INDD(534, 4), R0);
MOV(INDD(539, 0), IMM(368031));
MOV(INDD(539, 1), IMM(542));
MOV(INDD(539, 2), IMM(544));
MOV(INDD(539, 3), IMM(82));
MOV(R0, 0);MOV(INDD(539, 4), R0);
MOV(INDD(544, 0), IMM(368031));
MOV(INDD(544, 1), IMM(547));
MOV(INDD(544, 2), IMM(549));
MOV(INDD(544, 3), IMM(89));
MOV(R0, 0);MOV(INDD(544, 4), R0);
MOV(INDD(549, 0), IMM(368031));
MOV(INDD(549, 1), IMM(552));
MOV(INDD(549, 2), IMM(554));
MOV(INDD(549, 3), IMM(96));
MOV(R0, 0);MOV(INDD(549, 4), R0);
MOV(INDD(554, 0), IMM(368031));
MOV(INDD(554, 1), IMM(557));
MOV(INDD(554, 2), IMM(559));
MOV(INDD(554, 3), IMM(102));
MOV(R0, 0);MOV(INDD(554, 4), R0);
MOV(INDD(559, 0), IMM(368031));
MOV(INDD(559, 1), IMM(562));
MOV(INDD(559, 2), IMM(564));
MOV(INDD(559, 3), IMM(108));
MOV(R0, 0);MOV(INDD(559, 4), R0);
MOV(INDD(564, 0), IMM(368031));
MOV(INDD(564, 1), IMM(567));
MOV(INDD(564, 2), IMM(569));
MOV(INDD(564, 3), IMM(114));
PUSH(LABEL(EQ)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(564, 4), R0);
MOV(INDD(569, 0), IMM(368031));
MOV(INDD(569, 1), IMM(572));
MOV(INDD(569, 2), IMM(574));
MOV(INDD(569, 3), IMM(119));
PUSH(LABEL(STR_TO_SYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(569, 4), R0);
MOV(INDD(574, 0), IMM(368031));
MOV(INDD(574, 1), IMM(577));
MOV(INDD(574, 2), IMM(579));
MOV(INDD(574, 3), IMM(135));
PUSH(LABEL(SYMBOL_TO_STR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(574, 4), R0);
MOV(INDD(579, 0), IMM(368031));
MOV(INDD(579, 1), IMM(582));
MOV(INDD(579, 2), IMM(584));
MOV(INDD(579, 3), IMM(151));
PUSH(LABEL(LIST_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(579, 4), R0);
MOV(INDD(584, 0), IMM(368031));
MOV(INDD(584, 1), IMM(587));
MOV(INDD(584, 2), IMM(589));
MOV(INDD(584, 3), IMM(159));
PUSH(LABEL(APPLY)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(584, 4), R0);
MOV(INDD(589, 0), IMM(368031));
MOV(INDD(589, 1), IMM(592));
MOV(INDD(589, 2), IMM(594));
MOV(INDD(589, 3), IMM(166));
PUSH(LABEL(VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(589, 4), R0);
MOV(INDD(594, 0), IMM(368031));
MOV(INDD(594, 1), IMM(597));
MOV(INDD(594, 2), IMM(599));
MOV(INDD(594, 3), IMM(174));
PUSH(LABEL(LIST)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(594, 4), R0);
MOV(INDD(599, 0), IMM(368031));
MOV(INDD(599, 1), IMM(602));
MOV(INDD(599, 2), IMM(604));
MOV(INDD(599, 3), IMM(180));
PUSH(LABEL(SET_CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(599, 4), R0);
MOV(INDD(604, 0), IMM(368031));
MOV(INDD(604, 1), IMM(607));
MOV(INDD(604, 2), IMM(609));
MOV(INDD(604, 3), IMM(190));
PUSH(LABEL(SET_CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(604, 4), R0);
MOV(INDD(609, 0), IMM(368031));
MOV(INDD(609, 1), IMM(612));
MOV(INDD(609, 2), IMM(614));
MOV(INDD(609, 3), IMM(200));
PUSH(LABEL(CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(609, 4), R0);
MOV(INDD(614, 0), IMM(368031));
MOV(INDD(614, 1), IMM(617));
MOV(INDD(614, 2), IMM(619));
MOV(INDD(614, 3), IMM(205));
PUSH(LABEL(CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(614, 4), R0);
MOV(INDD(619, 0), IMM(368031));
MOV(INDD(619, 1), IMM(622));
MOV(INDD(619, 2), IMM(624));
MOV(INDD(619, 3), IMM(210));
PUSH(LABEL(CONS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(619, 4), R0);
MOV(INDD(624, 0), IMM(368031));
MOV(INDD(624, 1), IMM(627));
MOV(INDD(624, 2), IMM(629));
MOV(INDD(624, 3), IMM(216));
PUSH(LABEL(MAKE_VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(624, 4), R0);
MOV(INDD(629, 0), IMM(368031));
MOV(INDD(629, 1), IMM(632));
MOV(INDD(629, 2), IMM(634));
MOV(INDD(629, 3), IMM(229));
PUSH(LABEL(VEC_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(629, 4), R0);
MOV(INDD(634, 0), IMM(368031));
MOV(INDD(634, 1), IMM(637));
MOV(INDD(634, 2), IMM(639));
MOV(INDD(634, 3), IMM(242));
PUSH(LABEL(VEC_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(634, 4), R0);
MOV(INDD(639, 0), IMM(368031));
MOV(INDD(639, 1), IMM(642));
MOV(INDD(639, 2), IMM(644));
MOV(INDD(639, 3), IMM(254));
PUSH(LABEL(VEC_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(639, 4), R0);
MOV(INDD(644, 0), IMM(368031));
MOV(INDD(644, 1), IMM(647));
MOV(INDD(644, 2), IMM(649));
MOV(INDD(644, 3), IMM(269));
PUSH(LABEL(MAKE_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(644, 4), R0);
MOV(INDD(649, 0), IMM(368031));
MOV(INDD(649, 1), IMM(652));
MOV(INDD(649, 2), IMM(654));
MOV(INDD(649, 3), IMM(282));
PUSH(LABEL(STR_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(649, 4), R0);
MOV(INDD(654, 0), IMM(368031));
MOV(INDD(654, 1), IMM(657));
MOV(INDD(654, 2), IMM(659));
MOV(INDD(654, 3), IMM(295));
PUSH(LABEL(STR_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(654, 4), R0);
MOV(INDD(659, 0), IMM(368031));
MOV(INDD(659, 1), IMM(662));
MOV(INDD(659, 2), IMM(664));
MOV(INDD(659, 3), IMM(307));
PUSH(LABEL(STR_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(659, 4), R0);
MOV(INDD(664, 0), IMM(368031));
MOV(INDD(664, 1), IMM(667));
MOV(INDD(664, 2), IMM(669));
MOV(INDD(664, 3), IMM(322));
PUSH(LABEL(INT_TO_CHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(664, 4), R0);
MOV(INDD(669, 0), IMM(368031));
MOV(INDD(669, 1), IMM(672));
MOV(INDD(669, 2), IMM(674));
MOV(INDD(669, 3), IMM(337));
PUSH(LABEL(CHAR_TO_INT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(669, 4), R0);
MOV(INDD(674, 0), IMM(368031));
MOV(INDD(674, 1), IMM(677));
MOV(INDD(674, 2), IMM(679));
MOV(INDD(674, 3), IMM(352));
PUSH(LABEL(ISPROCEDURE)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(674, 4), R0);
MOV(INDD(679, 0), IMM(368031));
MOV(INDD(679, 1), IMM(682));
MOV(INDD(679, 2), IMM(684));
MOV(INDD(679, 3), IMM(364));
PUSH(LABEL(ISVECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(679, 4), R0);
MOV(INDD(684, 0), IMM(368031));
MOV(INDD(684, 1), IMM(687));
MOV(INDD(684, 2), IMM(689));
MOV(INDD(684, 3), IMM(373));
PUSH(LABEL(ISZERO)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(684, 4), R0);
MOV(INDD(689, 0), IMM(368031));
MOV(INDD(689, 1), IMM(692));
MOV(INDD(689, 2), IMM(694));
MOV(INDD(689, 3), IMM(380));
PUSH(LABEL(ISSTRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(689, 4), R0);
MOV(INDD(694, 0), IMM(368031));
MOV(INDD(694, 1), IMM(697));
MOV(INDD(694, 2), IMM(699));
MOV(INDD(694, 3), IMM(389));
PUSH(LABEL(ISPAIR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(694, 4), R0);
MOV(INDD(699, 0), IMM(368031));
MOV(INDD(699, 1), IMM(702));
MOV(INDD(699, 2), IMM(704));
MOV(INDD(699, 3), IMM(396));
PUSH(LABEL(ISNULL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(699, 4), R0);
MOV(INDD(704, 0), IMM(368031));
MOV(INDD(704, 1), IMM(707));
MOV(INDD(704, 2), IMM(709));
MOV(INDD(704, 3), IMM(403));
PUSH(LABEL(ISCHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(704, 4), R0);
MOV(INDD(709, 0), IMM(368031));
MOV(INDD(709, 1), IMM(712));
MOV(INDD(709, 2), IMM(714));
MOV(INDD(709, 3), IMM(410));
PUSH(LABEL(ISSYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(709, 4), R0);
MOV(INDD(714, 0), IMM(368031));
MOV(INDD(714, 1), IMM(717));
MOV(INDD(714, 2), IMM(719));
MOV(INDD(714, 3), IMM(419));
PUSH(LABEL(ISBOOLEAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(714, 4), R0);
MOV(INDD(719, 0), IMM(368031));
MOV(INDD(719, 1), IMM(722));
MOV(INDD(719, 2), IMM(724));
MOV(INDD(719, 3), IMM(429));
PUSH(LABEL(ISINTEGER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(719, 4), R0);
MOV(INDD(724, 0), IMM(368031));
MOV(INDD(724, 1), IMM(727));
MOV(INDD(724, 2), IMM(729));
MOV(INDD(724, 3), IMM(439));
PUSH(LABEL(ISNUMBER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(724, 4), R0);
MOV(INDD(729, 0), IMM(368031));
MOV(INDD(729, 1), IMM(732));
MOV(INDD(729, 2), IMM(734));
MOV(INDD(729, 3), IMM(448));
PUSH(LABEL(VAR_EQUAL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(729, 4), R0);
MOV(INDD(734, 0), IMM(368031));
MOV(INDD(734, 1), IMM(737));
MOV(INDD(734, 2), IMM(739));
MOV(INDD(734, 3), IMM(451));
PUSH(LABEL(VAR_GREATERTHAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(734, 4), R0);
MOV(INDD(739, 0), IMM(368031));
MOV(INDD(739, 1), IMM(742));
MOV(INDD(739, 2), IMM(744));
MOV(INDD(739, 3), IMM(454));
PUSH(LABEL(VAR_LESSTHAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(739, 4), R0);
MOV(INDD(744, 0), IMM(368031));
MOV(INDD(744, 1), IMM(747));
MOV(INDD(744, 2), IMM(749));
MOV(INDD(744, 3), IMM(457));
PUSH(LABEL(VAR_DIV)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(744, 4), R0);
MOV(INDD(749, 0), IMM(368031));
MOV(INDD(749, 1), IMM(752));
MOV(INDD(749, 2), IMM(754));
MOV(INDD(749, 3), IMM(460));
PUSH(LABEL(VAR_MUL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(749, 4), R0);
MOV(INDD(754, 0), IMM(368031));
MOV(INDD(754, 1), IMM(757));
MOV(INDD(754, 2), IMM(759));
MOV(INDD(754, 3), IMM(463));
PUSH(LABEL(VAR_MIN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(754, 4), R0);
MOV(INDD(759, 0), IMM(368031));
MOV(INDD(759, 1), IMM(762));
MOV(INDD(759, 2), IMM(764));
MOV(INDD(759, 3), IMM(466));
PUSH(LABEL(VAR_PLUS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(759, 4), R0);
MOV(INDD(759, 2), 2);


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
LabelEnvLoop31:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit31);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop31);
LabelEnvLoopExit31: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop31:
CMP(R5,IMM(2));
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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop26:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit26);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop26);
LabelTailExit26:
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

MOV(ADDR(563), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop25:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit25);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop25);
LabelTailExit25:
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

MOV(ADDR(558), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop24:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit24);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop24);
LabelTailExit24:
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
LabelClosureEnd29:

MOV(ADDR(553), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop23:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit23);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop23);
LabelTailExit23:
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

MOV(ADDR(548), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
LabelEnvLoop27:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit27);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop27);
LabelEnvLoopExit27: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop27:
CMP(R5,IMM(2));
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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop22:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit22);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop22);
LabelTailExit22:
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

MOV(ADDR(543), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
LabelEnvLoop26:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit26);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop26);
LabelEnvLoopExit26: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop26:
CMP(R5,IMM(2));
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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop21:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit21);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop21);
LabelTailExit21:
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
LabelClosureEnd26:

MOV(ADDR(538), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop20:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit20);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop20);
LabelTailExit20:
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

MOV(ADDR(533), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
LabelEnvLoop24:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit24);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop24);
LabelEnvLoopExit24: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop24:
CMP(R5,IMM(2));
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


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop19:
CMP(R4, IMM(4));
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
LabelClosureEnd24:

MOV(ADDR(528), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop18:
CMP(R4, IMM(4));
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
LabelClosureEnd23:

MOV(ADDR(523), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelClosureEnd22:

MOV(ADDR(518), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop16:
CMP(R4, IMM(4));
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
LabelClosureEnd21:

MOV(ADDR(513), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
LabelEnvLoop20:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit20);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop20);
LabelEnvLoopExit20: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop20:
CMP(R5,IMM(2));
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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
LabelTailLoop15:
CMP(R4, IMM(4));
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
LabelClosureEnd20:

MOV(ADDR(508), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
/* - Lambda Var Body -*/
POP(R1);  // Old FP
POP(R2);  // Return addr
POP(R3);  // Env
POP(R4);  // args count
PUSH(R4);
PUSH(IMM(0));
CALL(LIST);
DROP(IMM(1));
POP(R4);
DROP(R4);
PUSH(R0);
PUSH(1);
PUSH(R3);
PUSH(R2);
PUSH(R1);
MOV(FP, SP);


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
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- set! pvar: -- */
MOV(R10, IMM(0));
ADD(R10,IMM(2));
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(IND(R0),FPARG(R10));

MOV(FPARG(2), R0);
MOV(R0, SOB_VOID);

/* --- set! pvar: -- */
MOV(R10, IMM(1));
ADD(R10,IMM(2));
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(IND(R0),FPARG(R10));

MOV(FPARG(3), R0);
MOV(R0, SOB_VOID);



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
LabelEnvLoop18:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit18);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop18);
LabelEnvLoopExit18: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop18:
CMP(R5,IMM(4));
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
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(703)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else6);
/* --- P-Var: --- */
MOV(R0, FPARG(3));

JUMP(LabelIf3Exit6);
LabelIf3Else6:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
MOV(R1, FPARG(IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R0,IND(R1));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(623)); // Value of Free var bucket.Address
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

LabelIf3Exit6:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd18:

MOV(R1, IMM(0));
ADD(R1,IMM(2));
MOV(IND(FPARG(R1)),R0);



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
LabelEnvLoop19:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit19);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop19);
LabelEnvLoopExit19: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop19:
CMP(R5,IMM(4));
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
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(703)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else7);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

JUMP(LabelIf3Exit7);
LabelIf3Else7:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
MOV(R1, FPARG(IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R1,INDD(R1,IMM(1)));
MOV(R0,IND(R1));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
MOV(R1, FPARG(IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R0,IND(R1));
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
LabelTailLoop14:
CMP(R4, IMM(5));
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

LabelIf3Exit7:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd19:

MOV(R1, IMM(1));
ADD(R1,IMM(2));
MOV(IND(FPARG(R1)),R0);

/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(703)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else5);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit5);
LabelIf3Else5:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
PUSH(IMM(2));
/* Compile function and add it's code: */
MOV(R10, IMM(1));
ADD(R10,IMM(2));
MOV(R0,IND(FPARG(R10)));
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

LabelIf3Exit5:

/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd17:
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
LabelTailLoop11:
CMP(R4, IMM(5));
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

POP(FP);
RETURN;
LabelClosureEnd16:

MOV(ADDR(503), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


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
LabelEnvLoop14:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit14);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop14);
LabelEnvLoopExit14: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop14:
CMP(R5,IMM(3));
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
LabelEnvLoop15:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit15);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop15);
LabelEnvLoopExit15: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop15:
CMP(R5,IMM(3));
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


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

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
LabelTailLoop10:
CMP(R4, IMM(5));
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
LabelClosureEnd15:

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
LabelTailLoop9:
CMP(R4, IMM(4));
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
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop13:
CMP(R5,IMM(3));
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
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

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
LabelClosureEnd12:
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
LabelEnvLoop3:
CMP(R5,IMM(0));
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
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


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
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop9:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit9);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop9);
LabelEnvLoopExit9: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop9:
CMP(R5,IMM(3));
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
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop10:
CMP(R5,IMM(2));
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
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(703)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else4);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit4);
LabelIf3Else4:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

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
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(623)); // Value of Free var bucket.Address
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

LabelIf3Exit4:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd10:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd9:

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
LabelEnvLoop4:
CMP(R5,IMM(1));
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
LabelEnvLoop7:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit7);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop7);
LabelEnvLoopExit7: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop7:
CMP(R5,IMM(3));
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
LabelEnvLoop8:
CMP(R5,IMM(3));
JUMP_GE(LabelEnvLoopExit8);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop8);
LabelEnvLoopExit8: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop8:
CMP(R5,IMM(3));
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
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(703)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else3);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit3);
LabelIf3Else3:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- F-Var: --- */
MOV(R1, IMM(613)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(1)));
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

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


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- F-Var: --- */
MOV(R1, IMM(618)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(1)));
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(588)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
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
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(623)); // Value of Free var bucket.Address
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

LabelIf3Exit3:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd8:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd7:

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
LabelEnvLoop5:
CMP(R5,IMM(2));
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
PUSH(IMM(4));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 3; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop6:
CMP(R5,IMM(3));
JUMP_GE(LabelEnvLoopExit6);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop6);
LabelEnvLoopExit6: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop6:
CMP(R5,IMM(3));
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
/* - LabmdaOpt-Body: -*/
POP(R1);  // Old FP
POP(R2);  // Return addr
POP(R3);  // Env
POP(R4);  // args count
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R6,IMM(0));
MOV(R5,R0);
LabelOptCopy1:
CMP(R6, IMM(1));
JUMP_EQ(LabelOptCopyExit1);
POP(R7);
MOV(INDD(R5,R6), R7);
ADD(R6, IMM(1));
JUMP(LabelOptCopy1);
LabelOptCopyExit1:
MOV(R7, R4);
SUB(R7, IMM(1));
PUSH(R7);
PUSH(IMM(0));
CALL(LIST);
DROP(IMM(1));
POP(R7);
DROP(R7);
MOV(R8, R0);
/* - Inserting to stack - */
PUSH(R8);
MOV(R6, IMM(0));
LabelOptCopy21:
CMP(R6, IMM(-1));
JUMP_EQ(LabelOptCopy2Exit1);
PUSH(INDD(R5,R6));
SUB(R6, IMM(1));
JUMP(LabelOptCopy21);
LabelOptCopy2Exit1:
PUSH(IMM(2));
PUSH(R3);
PUSH(R2);
PUSH(R1);
MOV(FP, SP);


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
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
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop3:
CMP(R4, IMM(5));
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

POP(FP);
RETURN;
LabelClosureEnd6:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd5:
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
LabelClosureEnd4:
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
LabelClosureEnd3:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

MOV(ADDR(498), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(568)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else2);
/* In constants .. */
MOV(R0,IMM(3));
JUMP(LabelIf3Exit2);
LabelIf3Else2:
/* In constants .. */
MOV(R0,IMM(5));
LabelIf3Exit2:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd2:

MOV(ADDR(493), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



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
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(568)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else1);
/* In constants .. */
MOV(R0,IMM(3));
JUMP(LabelIf3Exit1);
LabelIf3Else1:
/* In constants .. */
MOV(R0,IMM(5));
LabelIf3Exit1:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd1:

MOV(ADDR(493), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);





/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(5));
PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(493)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);


CALL(PRINT_R0_VALUE);

POP(FP);
DROP(IMM(3));
PROG_ENDING:
STOP_MACHINE;
return 0;
}

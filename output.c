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
#define NUMOFARGS 1
#define SYM_TAB_START 495 
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
MOV(IND(0), IMM(824));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(10)), IMM(799345));
MOV(IND(IMM(11)), IMM(1));
MOV(IND(IMM(12)), IMM(98));
MOV(IND(IMM(13)), IMM(799345));
MOV(IND(IMM(14)), IMM(1));
MOV(IND(IMM(15)), IMM(97));
MOV(IND(IMM(16)), IMM(799345));
MOV(IND(IMM(17)), IMM(3));
MOV(IND(IMM(18)), IMM(110));
MOV(IND(IMM(19)), IMM(111));
MOV(IND(IMM(20)), IMM(116));
MOV(IND(IMM(21)), IMM(799345));
MOV(IND(IMM(22)), IMM(3));
MOV(IND(IMM(23)), IMM(109));
MOV(IND(IMM(24)), IMM(97));
MOV(IND(IMM(25)), IMM(112));
MOV(IND(IMM(26)), IMM(799345));
MOV(IND(IMM(27)), IMM(6));
MOV(IND(IMM(28)), IMM(97));
MOV(IND(IMM(29)), IMM(112));
MOV(IND(IMM(30)), IMM(112));
MOV(IND(IMM(31)), IMM(101));
MOV(IND(IMM(32)), IMM(110));
MOV(IND(IMM(33)), IMM(100));
MOV(IND(IMM(34)), IMM(799345));
MOV(IND(IMM(35)), IMM(6));
MOV(IND(IMM(36)), IMM(99));
MOV(IND(IMM(37)), IMM(97));
MOV(IND(IMM(38)), IMM(97));
MOV(IND(IMM(39)), IMM(97));
MOV(IND(IMM(40)), IMM(97));
MOV(IND(IMM(41)), IMM(114));
MOV(IND(IMM(42)), IMM(799345));
MOV(IND(IMM(43)), IMM(6));
MOV(IND(IMM(44)), IMM(99));
MOV(IND(IMM(45)), IMM(97));
MOV(IND(IMM(46)), IMM(100));
MOV(IND(IMM(47)), IMM(100));
MOV(IND(IMM(48)), IMM(100));
MOV(IND(IMM(49)), IMM(114));
MOV(IND(IMM(50)), IMM(799345));
MOV(IND(IMM(51)), IMM(5));
MOV(IND(IMM(52)), IMM(99));
MOV(IND(IMM(53)), IMM(97));
MOV(IND(IMM(54)), IMM(100));
MOV(IND(IMM(55)), IMM(100));
MOV(IND(IMM(56)), IMM(114));
MOV(IND(IMM(57)), IMM(799345));
MOV(IND(IMM(58)), IMM(6));
MOV(IND(IMM(59)), IMM(99));
MOV(IND(IMM(60)), IMM(97));
MOV(IND(IMM(61)), IMM(97));
MOV(IND(IMM(62)), IMM(100));
MOV(IND(IMM(63)), IMM(100));
MOV(IND(IMM(64)), IMM(114));
MOV(IND(IMM(65)), IMM(799345));
MOV(IND(IMM(66)), IMM(5));
MOV(IND(IMM(67)), IMM(99));
MOV(IND(IMM(68)), IMM(97));
MOV(IND(IMM(69)), IMM(97));
MOV(IND(IMM(70)), IMM(97));
MOV(IND(IMM(71)), IMM(114));
MOV(IND(IMM(72)), IMM(799345));
MOV(IND(IMM(73)), IMM(4));
MOV(IND(IMM(74)), IMM(99));
MOV(IND(IMM(75)), IMM(97));
MOV(IND(IMM(76)), IMM(97));
MOV(IND(IMM(77)), IMM(114));
MOV(IND(IMM(78)), IMM(799345));
MOV(IND(IMM(79)), IMM(5));
MOV(IND(IMM(80)), IMM(99));
MOV(IND(IMM(81)), IMM(97));
MOV(IND(IMM(82)), IMM(97));
MOV(IND(IMM(83)), IMM(100));
MOV(IND(IMM(84)), IMM(114));
MOV(IND(IMM(85)), IMM(799345));
MOV(IND(IMM(86)), IMM(5));
MOV(IND(IMM(87)), IMM(99));
MOV(IND(IMM(88)), IMM(100));
MOV(IND(IMM(89)), IMM(100));
MOV(IND(IMM(90)), IMM(100));
MOV(IND(IMM(91)), IMM(114));
MOV(IND(IMM(92)), IMM(799345));
MOV(IND(IMM(93)), IMM(4));
MOV(IND(IMM(94)), IMM(99));
MOV(IND(IMM(95)), IMM(100));
MOV(IND(IMM(96)), IMM(100));
MOV(IND(IMM(97)), IMM(114));
MOV(IND(IMM(98)), IMM(799345));
MOV(IND(IMM(99)), IMM(4));
MOV(IND(IMM(100)), IMM(99));
MOV(IND(IMM(101)), IMM(97));
MOV(IND(IMM(102)), IMM(100));
MOV(IND(IMM(103)), IMM(114));
MOV(IND(IMM(104)), IMM(799345));
MOV(IND(IMM(105)), IMM(6));
MOV(IND(IMM(106)), IMM(99));
MOV(IND(IMM(107)), IMM(97));
MOV(IND(IMM(108)), IMM(97));
MOV(IND(IMM(109)), IMM(97));
MOV(IND(IMM(110)), IMM(100));
MOV(IND(IMM(111)), IMM(114));
MOV(IND(IMM(112)), IMM(799345));
MOV(IND(IMM(113)), IMM(6));
MOV(IND(IMM(114)), IMM(99));
MOV(IND(IMM(115)), IMM(100));
MOV(IND(IMM(116)), IMM(100));
MOV(IND(IMM(117)), IMM(100));
MOV(IND(IMM(118)), IMM(100));
MOV(IND(IMM(119)), IMM(114));
MOV(IND(IMM(120)), IMM(799345));
MOV(IND(IMM(121)), IMM(3));
MOV(IND(IMM(122)), IMM(101));
MOV(IND(IMM(123)), IMM(113));
MOV(IND(IMM(124)), IMM(63));
MOV(IND(IMM(125)), IMM(799345));
MOV(IND(IMM(126)), IMM(14));
MOV(IND(IMM(127)), IMM(115));
MOV(IND(IMM(128)), IMM(116));
MOV(IND(IMM(129)), IMM(114));
MOV(IND(IMM(130)), IMM(105));
MOV(IND(IMM(131)), IMM(110));
MOV(IND(IMM(132)), IMM(103));
MOV(IND(IMM(133)), IMM(45));
MOV(IND(IMM(134)), IMM(62));
MOV(IND(IMM(135)), IMM(115));
MOV(IND(IMM(136)), IMM(121));
MOV(IND(IMM(137)), IMM(109));
MOV(IND(IMM(138)), IMM(98));
MOV(IND(IMM(139)), IMM(111));
MOV(IND(IMM(140)), IMM(108));
MOV(IND(IMM(141)), IMM(799345));
MOV(IND(IMM(142)), IMM(14));
MOV(IND(IMM(143)), IMM(115));
MOV(IND(IMM(144)), IMM(121));
MOV(IND(IMM(145)), IMM(109));
MOV(IND(IMM(146)), IMM(98));
MOV(IND(IMM(147)), IMM(111));
MOV(IND(IMM(148)), IMM(108));
MOV(IND(IMM(149)), IMM(45));
MOV(IND(IMM(150)), IMM(62));
MOV(IND(IMM(151)), IMM(115));
MOV(IND(IMM(152)), IMM(116));
MOV(IND(IMM(153)), IMM(114));
MOV(IND(IMM(154)), IMM(105));
MOV(IND(IMM(155)), IMM(110));
MOV(IND(IMM(156)), IMM(103));
MOV(IND(IMM(157)), IMM(799345));
MOV(IND(IMM(158)), IMM(6));
MOV(IND(IMM(159)), IMM(108));
MOV(IND(IMM(160)), IMM(101));
MOV(IND(IMM(161)), IMM(110));
MOV(IND(IMM(162)), IMM(103));
MOV(IND(IMM(163)), IMM(116));
MOV(IND(IMM(164)), IMM(104));
MOV(IND(IMM(165)), IMM(799345));
MOV(IND(IMM(166)), IMM(5));
MOV(IND(IMM(167)), IMM(97));
MOV(IND(IMM(168)), IMM(112));
MOV(IND(IMM(169)), IMM(112));
MOV(IND(IMM(170)), IMM(108));
MOV(IND(IMM(171)), IMM(121));
MOV(IND(IMM(172)), IMM(799345));
MOV(IND(IMM(173)), IMM(6));
MOV(IND(IMM(174)), IMM(118));
MOV(IND(IMM(175)), IMM(101));
MOV(IND(IMM(176)), IMM(99));
MOV(IND(IMM(177)), IMM(116));
MOV(IND(IMM(178)), IMM(111));
MOV(IND(IMM(179)), IMM(114));
MOV(IND(IMM(180)), IMM(799345));
MOV(IND(IMM(181)), IMM(4));
MOV(IND(IMM(182)), IMM(108));
MOV(IND(IMM(183)), IMM(105));
MOV(IND(IMM(184)), IMM(115));
MOV(IND(IMM(185)), IMM(116));
MOV(IND(IMM(186)), IMM(799345));
MOV(IND(IMM(187)), IMM(8));
MOV(IND(IMM(188)), IMM(115));
MOV(IND(IMM(189)), IMM(101));
MOV(IND(IMM(190)), IMM(116));
MOV(IND(IMM(191)), IMM(45));
MOV(IND(IMM(192)), IMM(99));
MOV(IND(IMM(193)), IMM(97));
MOV(IND(IMM(194)), IMM(114));
MOV(IND(IMM(195)), IMM(33));
MOV(IND(IMM(196)), IMM(799345));
MOV(IND(IMM(197)), IMM(8));
MOV(IND(IMM(198)), IMM(115));
MOV(IND(IMM(199)), IMM(101));
MOV(IND(IMM(200)), IMM(116));
MOV(IND(IMM(201)), IMM(45));
MOV(IND(IMM(202)), IMM(99));
MOV(IND(IMM(203)), IMM(100));
MOV(IND(IMM(204)), IMM(114));
MOV(IND(IMM(205)), IMM(33));
MOV(IND(IMM(206)), IMM(799345));
MOV(IND(IMM(207)), IMM(3));
MOV(IND(IMM(208)), IMM(99));
MOV(IND(IMM(209)), IMM(100));
MOV(IND(IMM(210)), IMM(114));
MOV(IND(IMM(211)), IMM(799345));
MOV(IND(IMM(212)), IMM(3));
MOV(IND(IMM(213)), IMM(99));
MOV(IND(IMM(214)), IMM(97));
MOV(IND(IMM(215)), IMM(114));
MOV(IND(IMM(216)), IMM(799345));
MOV(IND(IMM(217)), IMM(4));
MOV(IND(IMM(218)), IMM(99));
MOV(IND(IMM(219)), IMM(111));
MOV(IND(IMM(220)), IMM(110));
MOV(IND(IMM(221)), IMM(115));
MOV(IND(IMM(222)), IMM(799345));
MOV(IND(IMM(223)), IMM(11));
MOV(IND(IMM(224)), IMM(109));
MOV(IND(IMM(225)), IMM(97));
MOV(IND(IMM(226)), IMM(107));
MOV(IND(IMM(227)), IMM(101));
MOV(IND(IMM(228)), IMM(45));
MOV(IND(IMM(229)), IMM(118));
MOV(IND(IMM(230)), IMM(101));
MOV(IND(IMM(231)), IMM(99));
MOV(IND(IMM(232)), IMM(116));
MOV(IND(IMM(233)), IMM(111));
MOV(IND(IMM(234)), IMM(114));
MOV(IND(IMM(235)), IMM(799345));
MOV(IND(IMM(236)), IMM(11));
MOV(IND(IMM(237)), IMM(118));
MOV(IND(IMM(238)), IMM(101));
MOV(IND(IMM(239)), IMM(99));
MOV(IND(IMM(240)), IMM(116));
MOV(IND(IMM(241)), IMM(111));
MOV(IND(IMM(242)), IMM(114));
MOV(IND(IMM(243)), IMM(45));
MOV(IND(IMM(244)), IMM(115));
MOV(IND(IMM(245)), IMM(101));
MOV(IND(IMM(246)), IMM(116));
MOV(IND(IMM(247)), IMM(33));
MOV(IND(IMM(248)), IMM(799345));
MOV(IND(IMM(249)), IMM(10));
MOV(IND(IMM(250)), IMM(118));
MOV(IND(IMM(251)), IMM(101));
MOV(IND(IMM(252)), IMM(99));
MOV(IND(IMM(253)), IMM(116));
MOV(IND(IMM(254)), IMM(111));
MOV(IND(IMM(255)), IMM(114));
MOV(IND(IMM(256)), IMM(45));
MOV(IND(IMM(257)), IMM(114));
MOV(IND(IMM(258)), IMM(101));
MOV(IND(IMM(259)), IMM(102));
MOV(IND(IMM(260)), IMM(799345));
MOV(IND(IMM(261)), IMM(13));
MOV(IND(IMM(262)), IMM(118));
MOV(IND(IMM(263)), IMM(101));
MOV(IND(IMM(264)), IMM(99));
MOV(IND(IMM(265)), IMM(116));
MOV(IND(IMM(266)), IMM(111));
MOV(IND(IMM(267)), IMM(114));
MOV(IND(IMM(268)), IMM(45));
MOV(IND(IMM(269)), IMM(108));
MOV(IND(IMM(270)), IMM(101));
MOV(IND(IMM(271)), IMM(110));
MOV(IND(IMM(272)), IMM(103));
MOV(IND(IMM(273)), IMM(116));
MOV(IND(IMM(274)), IMM(104));
MOV(IND(IMM(275)), IMM(799345));
MOV(IND(IMM(276)), IMM(11));
MOV(IND(IMM(277)), IMM(109));
MOV(IND(IMM(278)), IMM(97));
MOV(IND(IMM(279)), IMM(107));
MOV(IND(IMM(280)), IMM(101));
MOV(IND(IMM(281)), IMM(45));
MOV(IND(IMM(282)), IMM(115));
MOV(IND(IMM(283)), IMM(116));
MOV(IND(IMM(284)), IMM(114));
MOV(IND(IMM(285)), IMM(105));
MOV(IND(IMM(286)), IMM(110));
MOV(IND(IMM(287)), IMM(103));
MOV(IND(IMM(288)), IMM(799345));
MOV(IND(IMM(289)), IMM(11));
MOV(IND(IMM(290)), IMM(115));
MOV(IND(IMM(291)), IMM(116));
MOV(IND(IMM(292)), IMM(114));
MOV(IND(IMM(293)), IMM(105));
MOV(IND(IMM(294)), IMM(110));
MOV(IND(IMM(295)), IMM(103));
MOV(IND(IMM(296)), IMM(45));
MOV(IND(IMM(297)), IMM(115));
MOV(IND(IMM(298)), IMM(101));
MOV(IND(IMM(299)), IMM(116));
MOV(IND(IMM(300)), IMM(33));
MOV(IND(IMM(301)), IMM(799345));
MOV(IND(IMM(302)), IMM(10));
MOV(IND(IMM(303)), IMM(115));
MOV(IND(IMM(304)), IMM(116));
MOV(IND(IMM(305)), IMM(114));
MOV(IND(IMM(306)), IMM(105));
MOV(IND(IMM(307)), IMM(110));
MOV(IND(IMM(308)), IMM(103));
MOV(IND(IMM(309)), IMM(45));
MOV(IND(IMM(310)), IMM(114));
MOV(IND(IMM(311)), IMM(101));
MOV(IND(IMM(312)), IMM(102));
MOV(IND(IMM(313)), IMM(799345));
MOV(IND(IMM(314)), IMM(13));
MOV(IND(IMM(315)), IMM(115));
MOV(IND(IMM(316)), IMM(116));
MOV(IND(IMM(317)), IMM(114));
MOV(IND(IMM(318)), IMM(105));
MOV(IND(IMM(319)), IMM(110));
MOV(IND(IMM(320)), IMM(103));
MOV(IND(IMM(321)), IMM(45));
MOV(IND(IMM(322)), IMM(108));
MOV(IND(IMM(323)), IMM(101));
MOV(IND(IMM(324)), IMM(110));
MOV(IND(IMM(325)), IMM(103));
MOV(IND(IMM(326)), IMM(116));
MOV(IND(IMM(327)), IMM(104));
MOV(IND(IMM(328)), IMM(799345));
MOV(IND(IMM(329)), IMM(13));
MOV(IND(IMM(330)), IMM(105));
MOV(IND(IMM(331)), IMM(110));
MOV(IND(IMM(332)), IMM(116));
MOV(IND(IMM(333)), IMM(101));
MOV(IND(IMM(334)), IMM(103));
MOV(IND(IMM(335)), IMM(101));
MOV(IND(IMM(336)), IMM(114));
MOV(IND(IMM(337)), IMM(45));
MOV(IND(IMM(338)), IMM(62));
MOV(IND(IMM(339)), IMM(99));
MOV(IND(IMM(340)), IMM(104));
MOV(IND(IMM(341)), IMM(97));
MOV(IND(IMM(342)), IMM(114));
MOV(IND(IMM(343)), IMM(799345));
MOV(IND(IMM(344)), IMM(13));
MOV(IND(IMM(345)), IMM(99));
MOV(IND(IMM(346)), IMM(104));
MOV(IND(IMM(347)), IMM(97));
MOV(IND(IMM(348)), IMM(114));
MOV(IND(IMM(349)), IMM(45));
MOV(IND(IMM(350)), IMM(62));
MOV(IND(IMM(351)), IMM(105));
MOV(IND(IMM(352)), IMM(110));
MOV(IND(IMM(353)), IMM(116));
MOV(IND(IMM(354)), IMM(101));
MOV(IND(IMM(355)), IMM(103));
MOV(IND(IMM(356)), IMM(101));
MOV(IND(IMM(357)), IMM(114));
MOV(IND(IMM(358)), IMM(799345));
MOV(IND(IMM(359)), IMM(10));
MOV(IND(IMM(360)), IMM(112));
MOV(IND(IMM(361)), IMM(114));
MOV(IND(IMM(362)), IMM(111));
MOV(IND(IMM(363)), IMM(99));
MOV(IND(IMM(364)), IMM(101));
MOV(IND(IMM(365)), IMM(100));
MOV(IND(IMM(366)), IMM(117));
MOV(IND(IMM(367)), IMM(114));
MOV(IND(IMM(368)), IMM(101));
MOV(IND(IMM(369)), IMM(63));
MOV(IND(IMM(370)), IMM(799345));
MOV(IND(IMM(371)), IMM(7));
MOV(IND(IMM(372)), IMM(118));
MOV(IND(IMM(373)), IMM(101));
MOV(IND(IMM(374)), IMM(99));
MOV(IND(IMM(375)), IMM(116));
MOV(IND(IMM(376)), IMM(111));
MOV(IND(IMM(377)), IMM(114));
MOV(IND(IMM(378)), IMM(63));
MOV(IND(IMM(379)), IMM(799345));
MOV(IND(IMM(380)), IMM(5));
MOV(IND(IMM(381)), IMM(122));
MOV(IND(IMM(382)), IMM(101));
MOV(IND(IMM(383)), IMM(114));
MOV(IND(IMM(384)), IMM(111));
MOV(IND(IMM(385)), IMM(63));
MOV(IND(IMM(386)), IMM(799345));
MOV(IND(IMM(387)), IMM(7));
MOV(IND(IMM(388)), IMM(115));
MOV(IND(IMM(389)), IMM(116));
MOV(IND(IMM(390)), IMM(114));
MOV(IND(IMM(391)), IMM(105));
MOV(IND(IMM(392)), IMM(110));
MOV(IND(IMM(393)), IMM(103));
MOV(IND(IMM(394)), IMM(63));
MOV(IND(IMM(395)), IMM(799345));
MOV(IND(IMM(396)), IMM(5));
MOV(IND(IMM(397)), IMM(112));
MOV(IND(IMM(398)), IMM(97));
MOV(IND(IMM(399)), IMM(105));
MOV(IND(IMM(400)), IMM(114));
MOV(IND(IMM(401)), IMM(63));
MOV(IND(IMM(402)), IMM(799345));
MOV(IND(IMM(403)), IMM(5));
MOV(IND(IMM(404)), IMM(110));
MOV(IND(IMM(405)), IMM(117));
MOV(IND(IMM(406)), IMM(108));
MOV(IND(IMM(407)), IMM(108));
MOV(IND(IMM(408)), IMM(63));
MOV(IND(IMM(409)), IMM(799345));
MOV(IND(IMM(410)), IMM(5));
MOV(IND(IMM(411)), IMM(99));
MOV(IND(IMM(412)), IMM(104));
MOV(IND(IMM(413)), IMM(97));
MOV(IND(IMM(414)), IMM(114));
MOV(IND(IMM(415)), IMM(63));
MOV(IND(IMM(416)), IMM(799345));
MOV(IND(IMM(417)), IMM(7));
MOV(IND(IMM(418)), IMM(115));
MOV(IND(IMM(419)), IMM(121));
MOV(IND(IMM(420)), IMM(109));
MOV(IND(IMM(421)), IMM(98));
MOV(IND(IMM(422)), IMM(111));
MOV(IND(IMM(423)), IMM(108));
MOV(IND(IMM(424)), IMM(63));
MOV(IND(IMM(425)), IMM(799345));
MOV(IND(IMM(426)), IMM(8));
MOV(IND(IMM(427)), IMM(98));
MOV(IND(IMM(428)), IMM(111));
MOV(IND(IMM(429)), IMM(111));
MOV(IND(IMM(430)), IMM(108));
MOV(IND(IMM(431)), IMM(101));
MOV(IND(IMM(432)), IMM(97));
MOV(IND(IMM(433)), IMM(110));
MOV(IND(IMM(434)), IMM(63));
MOV(IND(IMM(435)), IMM(799345));
MOV(IND(IMM(436)), IMM(8));
MOV(IND(IMM(437)), IMM(105));
MOV(IND(IMM(438)), IMM(110));
MOV(IND(IMM(439)), IMM(116));
MOV(IND(IMM(440)), IMM(101));
MOV(IND(IMM(441)), IMM(103));
MOV(IND(IMM(442)), IMM(101));
MOV(IND(IMM(443)), IMM(114));
MOV(IND(IMM(444)), IMM(63));
MOV(IND(IMM(445)), IMM(799345));
MOV(IND(IMM(446)), IMM(7));
MOV(IND(IMM(447)), IMM(110));
MOV(IND(IMM(448)), IMM(117));
MOV(IND(IMM(449)), IMM(109));
MOV(IND(IMM(450)), IMM(98));
MOV(IND(IMM(451)), IMM(101));
MOV(IND(IMM(452)), IMM(114));
MOV(IND(IMM(453)), IMM(63));
MOV(IND(IMM(454)), IMM(799345));
MOV(IND(IMM(455)), IMM(1));
MOV(IND(IMM(456)), IMM(61));
MOV(IND(IMM(457)), IMM(799345));
MOV(IND(IMM(458)), IMM(1));
MOV(IND(IMM(459)), IMM(62));
MOV(IND(IMM(460)), IMM(799345));
MOV(IND(IMM(461)), IMM(1));
MOV(IND(IMM(462)), IMM(60));
MOV(IND(IMM(463)), IMM(799345));
MOV(IND(IMM(464)), IMM(1));
MOV(IND(IMM(465)), IMM(47));
MOV(IND(IMM(466)), IMM(799345));
MOV(IND(IMM(467)), IMM(1));
MOV(IND(IMM(468)), IMM(42));
MOV(IND(IMM(469)), IMM(799345));
MOV(IND(IMM(470)), IMM(1));
MOV(IND(IMM(471)), IMM(45));
MOV(IND(IMM(472)), IMM(799345));
MOV(IND(IMM(473)), IMM(1));
MOV(IND(IMM(474)), IMM(43));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(800)), IMM(945311));
MOV(IND(IMM(801)), IMM(5));
MOV(IND(IMM(802)), IMM(945311));
MOV(IND(IMM(803)), IMM(3));
MOV(INDD(495, 0), IMM(368031));
MOV(INDD(495, 1), IMM(498));
MOV(INDD(495, 2), IMM(500));
MOV(INDD(495, 3), IMM(10));
MOV(R0, 0);MOV(INDD(495, 4), R0);
MOV(INDD(500, 0), IMM(368031));
MOV(INDD(500, 1), IMM(503));
MOV(INDD(500, 2), IMM(505));
MOV(INDD(500, 3), IMM(13));
MOV(R0, 0);MOV(INDD(500, 4), R0);
MOV(INDD(505, 0), IMM(368031));
MOV(INDD(505, 1), IMM(508));
MOV(INDD(505, 2), IMM(510));
MOV(INDD(505, 3), IMM(16));
PUSH(LABEL(NOT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(505, 4), R0);
MOV(INDD(510, 0), IMM(368031));
MOV(INDD(510, 1), IMM(513));
MOV(INDD(510, 2), IMM(515));
MOV(INDD(510, 3), IMM(21));
MOV(R0, 0);MOV(INDD(510, 4), R0);
MOV(INDD(515, 0), IMM(368031));
MOV(INDD(515, 1), IMM(518));
MOV(INDD(515, 2), IMM(520));
MOV(INDD(515, 3), IMM(26));
MOV(R0, 0);MOV(INDD(515, 4), R0);
MOV(INDD(520, 0), IMM(368031));
MOV(INDD(520, 1), IMM(523));
MOV(INDD(520, 2), IMM(525));
MOV(INDD(520, 3), IMM(34));
MOV(R0, 0);MOV(INDD(520, 4), R0);
MOV(INDD(525, 0), IMM(368031));
MOV(INDD(525, 1), IMM(528));
MOV(INDD(525, 2), IMM(530));
MOV(INDD(525, 3), IMM(42));
MOV(R0, 0);MOV(INDD(525, 4), R0);
MOV(INDD(530, 0), IMM(368031));
MOV(INDD(530, 1), IMM(533));
MOV(INDD(530, 2), IMM(535));
MOV(INDD(530, 3), IMM(50));
MOV(R0, 0);MOV(INDD(530, 4), R0);
MOV(INDD(535, 0), IMM(368031));
MOV(INDD(535, 1), IMM(538));
MOV(INDD(535, 2), IMM(540));
MOV(INDD(535, 3), IMM(57));
MOV(R0, 0);MOV(INDD(535, 4), R0);
MOV(INDD(540, 0), IMM(368031));
MOV(INDD(540, 1), IMM(543));
MOV(INDD(540, 2), IMM(545));
MOV(INDD(540, 3), IMM(65));
MOV(R0, 0);MOV(INDD(540, 4), R0);
MOV(INDD(545, 0), IMM(368031));
MOV(INDD(545, 1), IMM(548));
MOV(INDD(545, 2), IMM(550));
MOV(INDD(545, 3), IMM(72));
MOV(R0, 0);MOV(INDD(545, 4), R0);
MOV(INDD(550, 0), IMM(368031));
MOV(INDD(550, 1), IMM(553));
MOV(INDD(550, 2), IMM(555));
MOV(INDD(550, 3), IMM(78));
MOV(R0, 0);MOV(INDD(550, 4), R0);
MOV(INDD(555, 0), IMM(368031));
MOV(INDD(555, 1), IMM(558));
MOV(INDD(555, 2), IMM(560));
MOV(INDD(555, 3), IMM(85));
MOV(R0, 0);MOV(INDD(555, 4), R0);
MOV(INDD(560, 0), IMM(368031));
MOV(INDD(560, 1), IMM(563));
MOV(INDD(560, 2), IMM(565));
MOV(INDD(560, 3), IMM(92));
MOV(R0, 0);MOV(INDD(560, 4), R0);
MOV(INDD(565, 0), IMM(368031));
MOV(INDD(565, 1), IMM(568));
MOV(INDD(565, 2), IMM(570));
MOV(INDD(565, 3), IMM(98));
MOV(R0, 0);MOV(INDD(565, 4), R0);
MOV(INDD(570, 0), IMM(368031));
MOV(INDD(570, 1), IMM(573));
MOV(INDD(570, 2), IMM(575));
MOV(INDD(570, 3), IMM(104));
MOV(R0, 0);MOV(INDD(570, 4), R0);
MOV(INDD(575, 0), IMM(368031));
MOV(INDD(575, 1), IMM(578));
MOV(INDD(575, 2), IMM(580));
MOV(INDD(575, 3), IMM(112));
MOV(R0, 0);MOV(INDD(575, 4), R0);
MOV(INDD(580, 0), IMM(368031));
MOV(INDD(580, 1), IMM(583));
MOV(INDD(580, 2), IMM(585));
MOV(INDD(580, 3), IMM(120));
PUSH(LABEL(EQ)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(580, 4), R0);
MOV(INDD(585, 0), IMM(368031));
MOV(INDD(585, 1), IMM(588));
MOV(INDD(585, 2), IMM(590));
MOV(INDD(585, 3), IMM(125));
PUSH(LABEL(STR_TO_SYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(585, 4), R0);
MOV(INDD(590, 0), IMM(368031));
MOV(INDD(590, 1), IMM(593));
MOV(INDD(590, 2), IMM(595));
MOV(INDD(590, 3), IMM(141));
PUSH(LABEL(SYMBOL_TO_STR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(590, 4), R0);
MOV(INDD(595, 0), IMM(368031));
MOV(INDD(595, 1), IMM(598));
MOV(INDD(595, 2), IMM(600));
MOV(INDD(595, 3), IMM(157));
PUSH(LABEL(LIST_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(595, 4), R0);
MOV(INDD(600, 0), IMM(368031));
MOV(INDD(600, 1), IMM(603));
MOV(INDD(600, 2), IMM(605));
MOV(INDD(600, 3), IMM(165));
PUSH(LABEL(APPLY)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(600, 4), R0);
MOV(INDD(605, 0), IMM(368031));
MOV(INDD(605, 1), IMM(608));
MOV(INDD(605, 2), IMM(610));
MOV(INDD(605, 3), IMM(172));
PUSH(LABEL(VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(605, 4), R0);
MOV(INDD(610, 0), IMM(368031));
MOV(INDD(610, 1), IMM(613));
MOV(INDD(610, 2), IMM(615));
MOV(INDD(610, 3), IMM(180));
PUSH(LABEL(LIST)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(610, 4), R0);
MOV(INDD(615, 0), IMM(368031));
MOV(INDD(615, 1), IMM(618));
MOV(INDD(615, 2), IMM(620));
MOV(INDD(615, 3), IMM(186));
PUSH(LABEL(SET_CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(615, 4), R0);
MOV(INDD(620, 0), IMM(368031));
MOV(INDD(620, 1), IMM(623));
MOV(INDD(620, 2), IMM(625));
MOV(INDD(620, 3), IMM(196));
PUSH(LABEL(SET_CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(620, 4), R0);
MOV(INDD(625, 0), IMM(368031));
MOV(INDD(625, 1), IMM(628));
MOV(INDD(625, 2), IMM(630));
MOV(INDD(625, 3), IMM(206));
PUSH(LABEL(CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(625, 4), R0);
MOV(INDD(630, 0), IMM(368031));
MOV(INDD(630, 1), IMM(633));
MOV(INDD(630, 2), IMM(635));
MOV(INDD(630, 3), IMM(211));
PUSH(LABEL(CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(630, 4), R0);
MOV(INDD(635, 0), IMM(368031));
MOV(INDD(635, 1), IMM(638));
MOV(INDD(635, 2), IMM(640));
MOV(INDD(635, 3), IMM(216));
PUSH(LABEL(CONS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(635, 4), R0);
MOV(INDD(640, 0), IMM(368031));
MOV(INDD(640, 1), IMM(643));
MOV(INDD(640, 2), IMM(645));
MOV(INDD(640, 3), IMM(222));
PUSH(LABEL(MAKE_VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(640, 4), R0);
MOV(INDD(645, 0), IMM(368031));
MOV(INDD(645, 1), IMM(648));
MOV(INDD(645, 2), IMM(650));
MOV(INDD(645, 3), IMM(235));
PUSH(LABEL(VEC_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(645, 4), R0);
MOV(INDD(650, 0), IMM(368031));
MOV(INDD(650, 1), IMM(653));
MOV(INDD(650, 2), IMM(655));
MOV(INDD(650, 3), IMM(248));
PUSH(LABEL(VEC_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(650, 4), R0);
MOV(INDD(655, 0), IMM(368031));
MOV(INDD(655, 1), IMM(658));
MOV(INDD(655, 2), IMM(660));
MOV(INDD(655, 3), IMM(260));
PUSH(LABEL(VEC_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(655, 4), R0);
MOV(INDD(660, 0), IMM(368031));
MOV(INDD(660, 1), IMM(663));
MOV(INDD(660, 2), IMM(665));
MOV(INDD(660, 3), IMM(275));
PUSH(LABEL(MAKE_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(660, 4), R0);
MOV(INDD(665, 0), IMM(368031));
MOV(INDD(665, 1), IMM(668));
MOV(INDD(665, 2), IMM(670));
MOV(INDD(665, 3), IMM(288));
PUSH(LABEL(STR_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(665, 4), R0);
MOV(INDD(670, 0), IMM(368031));
MOV(INDD(670, 1), IMM(673));
MOV(INDD(670, 2), IMM(675));
MOV(INDD(670, 3), IMM(301));
PUSH(LABEL(STR_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(670, 4), R0);
MOV(INDD(675, 0), IMM(368031));
MOV(INDD(675, 1), IMM(678));
MOV(INDD(675, 2), IMM(680));
MOV(INDD(675, 3), IMM(313));
PUSH(LABEL(STR_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(675, 4), R0);
MOV(INDD(680, 0), IMM(368031));
MOV(INDD(680, 1), IMM(683));
MOV(INDD(680, 2), IMM(685));
MOV(INDD(680, 3), IMM(328));
PUSH(LABEL(INT_TO_CHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(680, 4), R0);
MOV(INDD(685, 0), IMM(368031));
MOV(INDD(685, 1), IMM(688));
MOV(INDD(685, 2), IMM(690));
MOV(INDD(685, 3), IMM(343));
PUSH(LABEL(CHAR_TO_INT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(685, 4), R0);
MOV(INDD(690, 0), IMM(368031));
MOV(INDD(690, 1), IMM(693));
MOV(INDD(690, 2), IMM(695));
MOV(INDD(690, 3), IMM(358));
PUSH(LABEL(ISPROCEDURE)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(690, 4), R0);
MOV(INDD(695, 0), IMM(368031));
MOV(INDD(695, 1), IMM(698));
MOV(INDD(695, 2), IMM(700));
MOV(INDD(695, 3), IMM(370));
PUSH(LABEL(ISVECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(695, 4), R0);
MOV(INDD(700, 0), IMM(368031));
MOV(INDD(700, 1), IMM(703));
MOV(INDD(700, 2), IMM(705));
MOV(INDD(700, 3), IMM(379));
PUSH(LABEL(ISZERO)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(700, 4), R0);
MOV(INDD(705, 0), IMM(368031));
MOV(INDD(705, 1), IMM(708));
MOV(INDD(705, 2), IMM(710));
MOV(INDD(705, 3), IMM(386));
PUSH(LABEL(ISSTRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(705, 4), R0);
MOV(INDD(710, 0), IMM(368031));
MOV(INDD(710, 1), IMM(713));
MOV(INDD(710, 2), IMM(715));
MOV(INDD(710, 3), IMM(395));
PUSH(LABEL(ISPAIR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(710, 4), R0);
MOV(INDD(715, 0), IMM(368031));
MOV(INDD(715, 1), IMM(718));
MOV(INDD(715, 2), IMM(720));
MOV(INDD(715, 3), IMM(402));
PUSH(LABEL(ISNULL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(715, 4), R0);
MOV(INDD(720, 0), IMM(368031));
MOV(INDD(720, 1), IMM(723));
MOV(INDD(720, 2), IMM(725));
MOV(INDD(720, 3), IMM(409));
PUSH(LABEL(ISCHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(720, 4), R0);
MOV(INDD(725, 0), IMM(368031));
MOV(INDD(725, 1), IMM(728));
MOV(INDD(725, 2), IMM(730));
MOV(INDD(725, 3), IMM(416));
PUSH(LABEL(ISSYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(725, 4), R0);
MOV(INDD(730, 0), IMM(368031));
MOV(INDD(730, 1), IMM(733));
MOV(INDD(730, 2), IMM(735));
MOV(INDD(730, 3), IMM(425));
PUSH(LABEL(ISBOOLEAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(730, 4), R0);
MOV(INDD(735, 0), IMM(368031));
MOV(INDD(735, 1), IMM(738));
MOV(INDD(735, 2), IMM(740));
MOV(INDD(735, 3), IMM(435));
PUSH(LABEL(ISINTEGER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(735, 4), R0);
MOV(INDD(740, 0), IMM(368031));
MOV(INDD(740, 1), IMM(743));
MOV(INDD(740, 2), IMM(745));
MOV(INDD(740, 3), IMM(445));
PUSH(LABEL(ISNUMBER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(740, 4), R0);
MOV(INDD(745, 0), IMM(368031));
MOV(INDD(745, 1), IMM(748));
MOV(INDD(745, 2), IMM(750));
MOV(INDD(745, 3), IMM(454));
PUSH(LABEL(VAR_EQUAL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(745, 4), R0);
MOV(INDD(750, 0), IMM(368031));
MOV(INDD(750, 1), IMM(753));
MOV(INDD(750, 2), IMM(755));
MOV(INDD(750, 3), IMM(457));
PUSH(LABEL(VAR_GREATERTHAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(750, 4), R0);
MOV(INDD(755, 0), IMM(368031));
MOV(INDD(755, 1), IMM(758));
MOV(INDD(755, 2), IMM(760));
MOV(INDD(755, 3), IMM(460));
PUSH(LABEL(VAR_LESSTHAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(755, 4), R0);
MOV(INDD(760, 0), IMM(368031));
MOV(INDD(760, 1), IMM(763));
MOV(INDD(760, 2), IMM(765));
MOV(INDD(760, 3), IMM(463));
PUSH(LABEL(VAR_DIV)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(760, 4), R0);
MOV(INDD(765, 0), IMM(368031));
MOV(INDD(765, 1), IMM(768));
MOV(INDD(765, 2), IMM(770));
MOV(INDD(765, 3), IMM(466));
PUSH(LABEL(VAR_MUL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(765, 4), R0);
MOV(INDD(770, 0), IMM(368031));
MOV(INDD(770, 1), IMM(773));
MOV(INDD(770, 2), IMM(775));
MOV(INDD(770, 3), IMM(469));
PUSH(LABEL(VAR_MIN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(770, 4), R0);
MOV(INDD(775, 0), IMM(368031));
MOV(INDD(775, 1), IMM(778));
MOV(INDD(775, 2), IMM(780));
MOV(INDD(775, 3), IMM(472));
PUSH(LABEL(VAR_PLUS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE); // Done.
DROP(IMM(2));
MOV(INDD(775, 4), R0);
MOV(INDD(775, 2), 2);


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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
LabelClosureEnd29:

MOV(ADDR(579), R0);
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd28:

MOV(ADDR(574), R0);
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd27:

MOV(ADDR(569), R0);
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
LabelClosureEnd26:

MOV(ADDR(564), R0);
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
LabelClosureEnd25:

MOV(ADDR(559), R0);
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd24:

MOV(ADDR(554), R0);
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd23:

MOV(ADDR(549), R0);
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd22:

MOV(ADDR(544), R0);
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd21:

MOV(ADDR(539), R0);
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
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd20:

MOV(ADDR(534), R0);
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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop19:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit19);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop19);
LabelEnvLoopExit19: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop19:
CMP(R5,IMM(2));
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd19:

MOV(ADDR(529), R0);
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
LabelClosureEnd18:

MOV(ADDR(524), R0);
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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop15:
CMP(R5,IMM(1));
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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop16:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit16);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop16);
LabelEnvLoopExit16: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop16:
CMP(R5,IMM(4));
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
MOV(R1, IMM(719)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, SOB_FALSE);
JUMP_EQ(LabelIf3Else4);
/* --- P-Var: --- */
MOV(R0, FPARG(3));

JUMP(LabelIf3Exit4);
LabelIf3Else4:


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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(639)); // Value of Free var bucket.Address
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

LabelIf3Exit4:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd16:

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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop17:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit17);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop17);
LabelEnvLoopExit17: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop17:
CMP(R5,IMM(4));
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
MOV(R1, IMM(719)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, SOB_FALSE);
JUMP_EQ(LabelIf3Else5);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

JUMP(LabelIf3Exit5);
LabelIf3Else5:


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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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

LabelIf3Exit5:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd17:

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
MOV(R1, IMM(719)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, SOB_FALSE);
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
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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

LabelIf3Exit3:

/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd15:
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
LabelClosureEnd14:

MOV(ADDR(519), R0);
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
LabelClosureEnd12:

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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop11:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit11);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop11);
LabelEnvLoopExit11: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop11:
CMP(R5,IMM(3));
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
LabelClosureEnd11:

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
LabelClosureEnd10:
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
LabelClosureEnd9:

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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop7:
CMP(R5,IMM(1));
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
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop8:
CMP(R5,IMM(2));
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
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(719)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, SOB_FALSE);
JUMP_EQ(LabelIf3Else2);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit2);
LabelIf3Else2:


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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(639)); // Value of Free var bucket.Address
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

LabelIf3Exit2:
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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop2:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit2);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop2);
LabelEnvLoopExit2: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop2:
CMP(R5,IMM(3));
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(719)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, SOB_FALSE);
JUMP_EQ(LabelIf3Else1);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit1);
LabelIf3Else1:


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
MOV(R1, IMM(629)); // Value of Free var bucket.Address
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
MOV(R1, IMM(634)); // Value of Free var bucket.Address
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
MOV(R1, IMM(604)); // Value of Free var bucket.Address
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
MOV(R1, IMM(639)); // Value of Free var bucket.Address
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

LabelIf3Exit1:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd6:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd5:

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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop3:
CMP(R5,IMM(2));
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
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop4:
CMP(R5,IMM(3));
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

MOV(ADDR(514), R0);
MOV(R0, SOB_VOID);



CALL(PRINT_R0_VALUE);





/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(734)); // Value of Free var bucket.Address
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





/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- F-Var: --- */
MOV(R1, IMM(694)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(694)); // Value of Free var bucket.Address
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





/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(495));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(500));
PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(584)); // Value of Free var bucket.Address
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





/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(800));
PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(509)); // Value of Free var bucket.Address
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





/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(802));
PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(664)); // Value of Free var bucket.Address
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
